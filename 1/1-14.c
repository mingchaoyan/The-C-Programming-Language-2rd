#include <stdio.h>

#define SIZE 26

int main() 
{
    int c, i;
    int count[SIZE];

    for (i = 0; i < SIZE; ++i) {
        count[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        count[c - 'a'] ++;
    }

    for (i = 0; i < SIZE; ++i) {
        printf("%c:%d\n", i+'a', count[i]);
    }
}
