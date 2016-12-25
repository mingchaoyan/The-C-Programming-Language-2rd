#include<stdio.h>
int main() {
    int c, lastc;
    lastc = 'A';
    while((c = getchar()) != EOF) {
        if(c != ' ' || lastc != ' ')
            putchar(c);
        lastc = c;
    }
}
