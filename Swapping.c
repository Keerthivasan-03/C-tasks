//swapping of two numbers
#include<stdio.h>
main()
{
int a=11, b=3;
printf("Before swapping:\n a=%d\n b=%d\n", a ,b );
a = a+b;  // 11+3=14
b = a-b;  // 14-3=11
a = a-b;  // 14-11=3
printf("After swapping:\n a=%d\n b=%d\n", a, b);
}
