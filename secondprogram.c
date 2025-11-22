#include<stdio.h>
int main(){
    float m1,m2,m3,m4,m5;
    printf("enter the value of:m1,m2,m3,m4,m5");
    scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
    float percentage=(m1+m2+m3+m4+m5)/5;
    printf("m1=%f,m2=%f,m3=%f,m4=%f,m5=%f/n",m1,m2,m3,m4,m5);
    printf("percentage=%f/n",percentage);
    return 0;
}