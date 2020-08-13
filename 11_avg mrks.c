#include<stdio.h>
#include<conio.h>
int main()
{
    int mrk1,mrk2,mrk3,total,roll_no;
    float avg;
    printf("Enter the Roll no of the student\n");
    scanf("%d",&roll_no);
    printf("Enter the 3 subjects marks \n");
    scanf("%d %d %d",&mrk1,&mrk2,&mrk3);
    total=mrk1+mrk2+mrk3;
    avg=total/3.0;
    printf("The student Roll no is : %d\n",roll_no);
    printf("Mark 1 = %d\n",mrk1);
    printf("Mark 2 = %d\n",mrk2);
    printf("Mark 3 = %d\n",mrk3);
    printf("Total = %d\n",total);
    printf("The average marks of 3 subjects is : %3.2f \n",avg);

    return 0;
}
