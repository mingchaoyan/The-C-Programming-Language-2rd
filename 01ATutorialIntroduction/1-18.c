#include <stdio.h>

#define MAXLINE 10

int my_getline(char s[], int lim);
int my_remove(char s[]);

int main() 
{
    int len;
    char line[MAXLINE];

    while ((len = my_getline(line, MAXLINE)) > 0) {
        if(my_remove(line) > 0)
            printf("%s", line);
    }
    return 0;
}

int my_remove(char s[]) 
{
    int i = 0;
    while (s[i] != '\n') {
        ++i;
    }

    --i;
    while(i >= 0 && (s[i] == ' ' || s[i] == '\t'))
        --i;
    if (i >= 0) {
        ++i;
        s[i] = '\n';
        ++i;
        s[i] = '\0';
    }
    return i;
}

int my_getline(char s[], int lim) 
{
    int c, i, j;
    j = 0;

    for (i = 0; (c = getchar())!=EOF && c!='\n'; ++i) {
        if (i < lim - 2) {
            s[j] = c;
            ++j;
        }
    }
    if (c == '\n') {
        s[j] = c;
        ++j;
        ++i;
    }
    s[j] = '\0';
    return i;
}
