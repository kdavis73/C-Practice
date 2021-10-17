/* In this program, we ask the user to enter a number from the keyboard and 
then print "Hello World" n number of times.. */

#include <stdio.h>

#pragma warning(disable: 4996)

int main() {
    int i, n;
    
    printf("Hi, please enter an integer: ");
    scanf("%d", &i);
    
    for(n = 0; n < i; n++){
        printf("%d - Hello World!\n", n + 1);
    }
    
    return 0;
}
