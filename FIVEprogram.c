#include<stdio.h>
int main(){
float a,b;
printf("enter the values a:");
scanf("%f",&a);
printf("enter the value b:");
scanf("%f",&b);
float quotient=a/b;
float remainder= a-(b*quotient);//dividend-divisor*quotient
printf("value of quotient is:%f/n",quotient); 
printf("value of the remainder is :%f/n",remainder);
    return 0;
}