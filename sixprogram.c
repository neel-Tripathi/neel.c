#include<stdio.h> 
int main(){
 float a,b;
 printf("enter the value of a and b :");// a>b
 scanf("%f %f ",&a ,&b);
 float q =a/b ;//quotient =  dividend/divisior
 float remainder = a-(b*q);
 printf("a=%f,b=%f,q=%f/n",a,b,q);
 printf("the value of quotient :%f",q);
 printf("the value of remainder is:%f",remainder);
    return 0;
}