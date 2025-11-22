#include<stdio.h>
int main(){
    float x;
    printf("enter the value of x in intger from:");
    scanf("%f",&x); 
    int y = x;// the value of intger number is 
    float z = x - y;// the value of fractional number is
    printf("%d/n",y);
    printf("%f",z);     
    return 0;
}