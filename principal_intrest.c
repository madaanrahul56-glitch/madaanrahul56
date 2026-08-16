/*calculating principal intrest*/
#include<stdio.h>
int main(){
    int p;
    float r,t,si;
    printf("Enter principal amount :");
    scanf("%d",&p);
    printf("Enter intrest rate :");
    scanf("%f",&r);
    printf("Enter time :");
    scanf("%f",&t);
    
    //formula for principal interst
    si=(p*r*t)/100;
    printf("Principal intrest is %.2f",si);
    return 0;


}