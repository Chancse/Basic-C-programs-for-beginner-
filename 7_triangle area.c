#include<stdio.h>
int main()
{

    float b,h,area;
    printf("Enter the base and height to calculate the area of the triangle\n");
    scanf("%f %f",&b,&h);
    area = 0.5*b*h;
    printf("Area of the triangle is : %5.2f",area);
    getch();
    return 0;
}
