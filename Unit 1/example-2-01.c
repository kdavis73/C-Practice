#include <stdio.h>

// ANSI C has been deprecated in VS2012
// Add this line to remove error msg
#pragma warning(disable: 4996)

int n = 5;
int main() { 
    int i;

    printf("Enter an integer: ");
    scanf("%d", &i);
    if (i > n)
        n = n + i;
    else
        n = n - i;

    printf("i = %d, n = %d\n", i, n);

    return 0;
}
