#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number \n");
    scanf("%d",&num);
    if(num%5==0)
    {
        printf("%d is divisible by 5",num);
    }
    else
    {
        printf("%d id not divisible by 5",num);
    }
    return 0;
}
