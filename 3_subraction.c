#include<stdio.h>
clrscr();
int main()
{
    int num1,num2,ans;
    printf("Enter the integers to subract\n");
    scanf("%d %d",&num1,&num2);
    ans=num1-num2;
    printf("The subraction of the given integers : %d ",ans);


    getch();
    return 0;
}
