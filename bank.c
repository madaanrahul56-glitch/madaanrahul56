// Basic Banking Transections
#include<stdio.h>
int main(){
    int ch, balance = 0, amt, sub;
    do{
        printf("Press - 1 for check balance \n ");
        printf("Press - 2 for add money \n");
        printf("Press - 3 for withdraw money \n");
        printf("Press - 4 for exit \n");

        printf("Enter you choice \n");
        scanf("%d",&ch);

        switch(ch){
            case 1:
            printf("Your balance is :%d \n",balance);
            break;
            case 2:
            printf("Enter money to be add :");
            scanf("%d",&amt);
            balance+=amt;
            printf("Your new amount is %d \n",balance);
            break;
            case 3:
            printf("Enter money to withdraw :");
            scanf("%d",&sub);
            balance-=sub;
            printf("Your new amount is %d \n",balance);
            break;
            case 4:
            printf("Thank you for using banking system \n");
            break;
            default:
            printf("You taken wrong input \n");
        }
    }while(ch!=4);

    return 0;
}
