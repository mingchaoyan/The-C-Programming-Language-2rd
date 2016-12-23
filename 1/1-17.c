#include <stdio.h>

#define LINESIZE 10

int my_getline(char line[], int maxline);

int main() 
{
    int len;
    char line[LINESIZE];

    len = 0;
    while ((len = my_getline(line, LINESIZE))  > 0) {
        if (len > LINESIZE) {
            printf("%d %s",len, line);
        }
    }
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
        s[i] = c;
        ++j;
        ++i;
    }
    s[j] = '\0';
    return i;
}
