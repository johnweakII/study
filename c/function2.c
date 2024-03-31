#include <stdio.h>
#include <stdlib.h>

void f1();
void f2();
void f3();

void f1()
{
    int n1,n2,ave=0;
    printf("\nEnter 2 numbers:");
    scanf("%d", &n1);
    scanf("%d", &n2);
    ave=(n1+n2)/2;
    printf("\nAVERAGE:%d",ave);
}
void f2()
{
    int num[4],i,esum=0;
    printf("\nEnter 4 numbers:");
    for(i=0;i<4;i++)
    {
        scanf("%d", &num[i]);
        if(num[i]%2==0)
        {
            esum+=num[i];
        }
    }   
    printf("\nThe sum of even numbers: %d", esum);
}
void f3()
{
    int num[5], i, sml;
    printf("\nEnter 5 numbers:");
    for(i=0;i<5;i++)
    {
        scanf("%d", &num[i]); 
    }   
    sml=num[0];
    for(i=1;i<5;i++)
    {
        if(sml>num[i])
        {
            sml=num[i];
        }
    }
    printf("\nSmallest: %d",sml);
}
void main()
{
    int f;
     printf("      *Choose functions*\n");
    printf("[1]-F1\n[2]-F2\n[3]-F3");
    printf("\nEnter function: ");
    scanf("%d", &f);
    if (f==1)
    {
        f1();
    }
    else if (f==2)
    {
        f2();
    }
    else if (f==3)
    {
        f3();
    }
    else
    {
        printf("\nInvalid input!");
    }
}