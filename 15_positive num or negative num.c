#include<stdio.h>
int main()
{
    float num;
    printf("Enter the number \n");
    scanf("%f",&num);
    if(num<0) {
        printf("The given number is negative");
        }
    else if(num>0)
    {
        printf("The given number is positive");
    }
    else
    {
        printf("The given number is Zero");
    }

    return 0;


}
