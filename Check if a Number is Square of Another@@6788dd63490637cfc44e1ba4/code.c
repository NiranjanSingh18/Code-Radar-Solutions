#include <stdio.h>
#include <math.h>
int main() {
    int a, b,w;
    scanf("%d %d", &a, &b);
    w=pow(a,2);
    if (b == w)
        printf("Yes");
    else 
        printf("No");

    return 0;
}