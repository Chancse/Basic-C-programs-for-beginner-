#include<stdio.h>
clrscr();
int main()
{
    float radius,area;
    printf("Enter the radius to calculate the area\n");
    scanf("%f",&radius);
    area = 3.14*radius*radius;
    printf("Area of the circle is : %5.2f",area);
    getch();
    return 0;
}
