#include<stdio.h>
int main()
{
    int num1,num2,sum;
    printf("Enter the integers to add\n");
    scanf("%d%d",&num1,&num2);
    sum = num1+num2;
    printf("addition of the given numbers : %d",sum);
    getch();
    return 0;
}
