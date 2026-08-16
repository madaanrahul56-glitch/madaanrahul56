/*Calculating area and parameter of rectangle*/
#include<stdio.h>
int main(){
    int l,b,a,p;
    printf("Enter lenght of rectangle :");
    scanf("%d",&l);
    printf("Enter breath of rectangle :");
    scanf("%d",&b);

    //formula for area of rectangle
    a=l*b;
    printf("Area of rectangle is : %d \n",a);

    //formula for parameter of rectangle
    p=2*(l+b);
    printf("Parameter of rectangle is : %d \n",p);

    return 0;
    
}