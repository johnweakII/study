#include <stdio.h>
#include <stdlib.h>

void push();
void pop();
int as=-1,c=-1,num[5];

void main()
{
int f;
do{printf("\n\nPush-[1]\nPop -[2]\nExit-[3]");
printf("\nChoose Function:");
scanf("%d",&f);  
if(f==1)
{
        if(as>3)
    {
        printf("\n\nCAN'T PUSH THE STACK IS FULL!\n\n");
        system("pause");
        system("cls");
        as=4;
        c=4;
        f=4;
    }
    else
    {
        as++;
        c++;
        push();
    }
}
else if(f==2)
{
    if(as==-1)
    {
        printf("\nNo data can be pop off!\n");
        main();
    }
    else
    {
    as--;
    c--;
    pop();
    }
}
else if(f==3)
{
    system("cls");
    printf("\nTHANK YOU!\n");
}
else
{
    printf("Invalid Input!");
}
}while(f>=4 || f<=0);
}
void push()
{
    int nump,i;
    printf("\nEnter data to push:");
    scanf("%d",&nump);
    num[c]=nump;
    printf("\nStack Datas:");
    for(i=0;i<=as;i++)
    {
        printf("%d ",num[i]);
    }
    printf("\n\n");
    system("pause");
    system("cls"); 
    main();
}
void pop()
{
     int i;
     printf("\nStack Datas: ");
    for(i=0;i<=as;i++)
    {
        printf("%d ",num[i]);
    }
    printf("\n\n");
    system("pause");
    system("cls");
    main();
}

