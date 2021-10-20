
#include <stdio.h>

void main() { 
    int n1 = 4, n2 = 8;
    int *pn1 = &n1, *pn2 = &n2;
    char c1 = 65, c2 = 66;
    char *pc1 = &c1, *pc2 = &c2;

    printf("n1 address = %d, n1 value = %d\n", pn1, *pn1);
    pn1 = pn1 + 1;
    // n1 address and value changed by 4
    printf("n1 address = %d, n1 value = %d\n", pn1, *pn1);
    printf("n2 address = %d, n2 value = %d\n", pn2, *pn2);
    printf("c1 address = %d, c1 value = %c\n", pc1, *pc1);
    pc1 = pc1 + 1;
    // c1 address and value changed by 1
    printf("c1 address = %d, c1 value = %c\n", pc1, *pc1);
    printf("c2 address = %d, c2 value = %c\n", pc2, *pc2);
    
    int i = 137, *j, **k; // *j and **k are aliases of i
    j = &i; // i address 
    k = &j; // j address / makes *k an alias of j
    **k = 0; // i value changes to 0
    printf("i address = %d, i value = %d\n", j, *j);
    // j has unique address but value is the same as i address
    printf("j address = %d, j value = %d\n", k, *k);
    // *k address and value is the same as j address and value
    printf("*k address = %d, *k value = %d\n", k, j);
    
    char *p = "hello", *s = "this is a str"; 
    // *p has unique address and value is a single char 'h'
    printf("*p address = %d, *p value = %c\n", p, *p);
    // *s has unique address and value is single char 't'
    printf("*s address = %d, *s value = %c\n", s, *s);
    // p value is "hello" because we set *p to "hello"
    printf("before change: p address = %d, p value = %s\n", &p, p);
    // s value is "this is a str" because we set *s to "this is a str"
    printf("before change: s address = %d, s value = %s\n", &s, s);
    p = s;
    // p address is the same but p value changed to "this is a str"
    printf("after change: p address = %d, p value = %s\n", &p, p);
    // s address and value stayed the same
    printf("after change: s address = %d, s value = %s\n", &s, s);
    printf("%s\n", p);

    char *a = 0;
    char ma[2][4]; // 0123
    ma[0][0] = 'a'; //0: abcd
    ma[0][1] = 'b'; //1: efg
    ma[0][2] = 'c';
    ma[0][3] = 'd';
    ma[1][0] = 'e';
    ma[1][1] = 'f';
    ma[1][2] = 'g';
    ma[1][3] = '\0';
    // a has an address and value is zero (because *a is set to zero)
    printf("before change: a address = %d, a value = %d\n", &a, a);
    // *a address is zero 
    // *a is the name of variable whose address is the value of a
    printf("before change: *a address = %d\n", a);
    a = ma;
    // ma value and address are identical
    printf("ma address = %d, ma value = %d\n", &ma, ma);
    // a has the same address but value has changed to ma value
    printf("after change: a address = %d, a value = %d\n", &a, a);
    // *a address has changed to a value / value changed to letter "a"
    printf("after change: *a address = %d, *a value = %c\n", a, *a);
    while(*a){
        printf("%c\n", *a); 
        *a = *a + 1; // *a address and value changes by 1
        printf("In loop: *a address = %d, *a value = %d\n", a, *a);
        a++; // a address stays the same. value changes by 1
        printf("In loop: a address = %d, a value = %d\n", &a, a);
    }
    printf("\n");
}
