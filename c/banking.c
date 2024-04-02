#include <stdio.h>
#include <stdlib.h>

void withdraw();
int b=0,d=0,w=0;

void main()
{
int f;
do{printf("\n\n[1]-Withdraw\n[2]-Deposit\n[3]-Check Balance\n[4]-Exit\n");
printf("Choose function: ");
scanf("%d",&f);
if(f==1)
{
    if(b<1)
    {
        printf("\nYou don't have balance to withdraw!\n\n");
        system("pause");
        system("cls");
    }
    else
    {
        withdraw();
    }
}
else if(f==2)
{
    printf("\nEnter value to deposit: ");
    scanf("%d",&d);
    b+=d;
    printf("\nThe new balance: %d\n\n",b);
    system("pause");
    system("cls");
    d=0;
}
else if(f==3)
{
    printf("\nYour Current Balance: %d\n\n",b);
    system("pause");
    system("cls");
}
else if(f==4)
{
    system("cls");
    printf("\n\n***THANK YOU FOR USING OUR SYSTEM!***\n\n");
    system("pause");
    system("cls");
}
else
{
    printf("\nInvalid Input!\nPlease Re-Enter Function\n\n");
    system("pause");
    system("cls");
}
}while(f!=4);
}
void withdraw()
{
    printf("\nEnter the value you want to withdraw: ");
    scanf("%d",&w);
    if(w>b)
    {
        printf("\nNot Enough Balance!");
        printf("\nYour Current Blance: %d\n\n",b);
        system("pause");
        system("cls");
    }
    else
    {
        b-=w;
        printf("\nThe new balance: %d\n\n",b);
        system("pause");
        system("cls");
        w=0;
    }
}
