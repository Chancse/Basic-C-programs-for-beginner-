#include<stdio.h>
clrscr();
int main()
{
    int num1,num2,ans;//ans1=mul,ans2=div
    printf("Enter the integers to multiply\n");
    scanf("%d %d",&num1,&num2);
    ans=num1*num2;
    printf("The subraction of the given integers : %d ",ans);
    getch();
    return 0;

}
