#include<stdio.h>
int main()
{
    float P,N,R,SI;
    printf("Enter the values for P,N,R\n");
    scanf("%f %f %f",&P,&N,&R);
    SI=(P*N*R)/100;
    printf("Simple Interest for the given values %f",SI);

    return 0;
}
