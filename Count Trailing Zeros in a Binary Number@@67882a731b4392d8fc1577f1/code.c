#include <stdio.h>
int main() {
int num;
scanf("%d",&num);
int count = _builtin_clz(num);
printf("%d",count);
return 0;
}