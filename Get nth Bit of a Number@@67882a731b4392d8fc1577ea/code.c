#include <stdio.h>

int main() {
    int num, n;
    
    scanf("%d", &num);  // Read the number
    scanf("%d", &n);    // Read the bit position to check

    int bit = (num >> n) & 1;  // Right shift and mask with 1
    printf("%d", bit);  // Print the nth bit

    return 0;
}
