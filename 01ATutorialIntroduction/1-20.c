#include <stdio.h>

#define TAB 8

int main() 
{
    int c, nb, pos;
    pos = 1;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            nb = TAB - (pos-1) % TAB;
            while (nb > 0) {
                putchar(' ');
                ++ pos;
                nb --;
            }
        } else if (c == '\n') {
            pos = 1;
            putchar(c);
        } else {
            pos ++;
            putchar(c);
        }
    }
}
