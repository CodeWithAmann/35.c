#include<stdio.h>
void swap ( int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    printf("The number after swaping : a is %d and b is %d \n",x,y);
}
int main ()
{
    int a, b;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    printf("The number before swaping : a is %d and b is %d \n",a,b);
    swap(a,b);
    return 0;
}

// ****************** Simple method *******************

// #include<stdio.h>
// int main ()
// {
//     int x = 4;
//     int y = 5;
//     printf("The number after swaping : a is %d and b is %d \n",x,y);
//     int temp = x;
//     x = y;
//     y = temp;
//     printf("The number before swapring : a is %d and b is %d \n",x, y);
//     return 0;
// }
