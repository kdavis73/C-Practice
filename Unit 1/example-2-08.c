#include <stdio.h>

void main() { 
    char *p = 0;
    char ma[2][4]; // 0123
    ma[0][0] = 'a';
    ma[0][1] = 'b';
    ma[0][2] = 'c';
    ma[0][3] = 'd';
    ma[1][0] = 'e';
    ma[1][1] = 'f';
    ma[1][2] = 'g';
    ma[1][3] = '\0';
    p = ma;
    while (*p){
        printf("%c", *p);
        *p = *p + 1; // cheapo encryption
        p++;
    }
    printf("\n");
}
