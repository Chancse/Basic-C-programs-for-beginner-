#include<stdio.h>
int main()
{
    int num1;
    printf("Enter the integers\n");
    scanf("%d",&num1);
    if(num1<10)
    {
        printf("%d is less than 10",num1);

    }
    else
    {
        printf("%d is greater than 10",num1);
    }
    return 0;
}
