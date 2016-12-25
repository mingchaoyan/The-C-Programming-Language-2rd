#include <stdio.h>

void rcomment(int c); 
void in_comment();
void echo_quote(int c);

int main() 
{
    int c, d;
    while ((c = getchar()) != EOF) 
        rcomment(c);
    return 0;
}

void rcomment(int c)
{
    int d;
    if (c == '/') {
        if ((d = getchar()) == '*')
            in_comment();
        else if (d == '/') {
            putchar(c);
            rcomment(d);
        }
    } else if (c == '\'' || c == '"') {
        echo_quote(c);
    } else 
        putchar(c);
}

void in_comment()
{
    int c, d;
    c = getchar();
    d = getchar();
    while (c != '*' || d != '/') {
        c = d;
        d = getchar();
    }
}

void echo_quote(int c)
{
    int d;
    putchar(c);

    while((d = getchar()) != c) {
        putchar(d);
        if(d == '\\')
            putchar(getchar());
    }
    putchar(d);
}
