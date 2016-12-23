#include <stdio.h>

#define MAXLINE 10

int my_getline(char s[], int lim);
void my_reverse(char s[]);

int main() 
{
    int len;
    char line[MAXLINE];

    while ((len = my_getline(line, MAXLINE)) > 0) {
        printf("origin: %s", line);
        my_reverse(line);
        printf("%s", line);
    }
    return 0;
}

void my_reverse(char s[]) 
{
    int i = 0, len = 0;
    char tmp;

    while (s[len] != '\n') {
        ++len;
    }
    printf("len: %d\n", len);
    printf("len/2: %d\n", len/2);
    for (i = 0; i < len/2; ++i) {
        tmp = s[i];
        s[i] = s[len -i];
        s[len - i] = tmp;
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
        s[j] = c;
        ++j;
        ++i;
    }
    s[j] = '\0';
    return i;
}
