#include<stdio.h>
main()
{
    int num1,num2,temp;
    printf("Enter the numbers to swap\n");
    scanf("%d %d",&num1,&num2);
    printf("Before the swap \n1stnumber=%d 2ndnumber=%d\n",num1,num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\nAfter the swap \n1stnumber=%d 2ndnumber=%d\n",num1,num2);

}
