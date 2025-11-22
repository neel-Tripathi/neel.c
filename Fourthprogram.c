#include<stdio.h>
int main(){
    float principle,rate,time;
    printf("enter the values of principle,rate,time");
    scanf("%f %f %f",&principle,&rate,&time);
    float si =(principle*rate*time)/100;
    printf("principle=%f,rate=%f,time=%f/n",principle,rate,time);
    printf("your simple interest is :%f/n",si);
    return 0;
}
