#include <stdio.h>
#include <math.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (sqrt(b) == a) 
        printf("Yes");
    else 
        printf("No");
    return 0;
}
