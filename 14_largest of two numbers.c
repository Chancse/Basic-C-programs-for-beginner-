#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the two integers \n");
    scanf("%d %d",&num1,&num2);
    if(num1<num2)
    {
        printf("%d is greater than %d",num2,num1);
    }
    else
    {
        printf("%d is greater than %d",num1,num2);

    }
    return 0;
}
