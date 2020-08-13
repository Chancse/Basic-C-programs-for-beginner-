#include<stdio.h>
int main()
{
    int  num;
    printf("Enter the number to check even or odd\n");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("The %d is EVEN",num);
    }
    else {
        printf("The %d is ODD",num);
    }
    return 0;
}

