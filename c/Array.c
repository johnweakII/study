#include <stdio.h>
#include <stdlib.h>

void main()
{
int i,x,as,t,num[20];
float m1,m2,median;
printf("Enter array size: ");
scanf("%d", &as);
printf("Enter %d numbers: \n", as);
for(i=0;i<as;i++)
{
    printf("#%d:",i+1);
    scanf("%d", &num[i]);
    t=num[i];
    num[i]=num[0];
    num[0]=t;
    for(x=1;x<=i;x++)
    {
        if(num[x]==num[0])
        {
            printf("Duplicate not allowed!\n");
            t=num[i];
            num[i]=num[0];
            num[0]=t;
            i--;
        }
    }

}
for(x=0;x<as;x++)
{
    for(i=0;i<as-1;i++)
    {
        if(num[i]>num[i+1])
        {
            t=num[i];
            num[i]=num[i+1];
            num[i+1]=t;
        }
    }
}
if(as%2==0)
{
    m1=num[i/2];
    m2=num[(i+1)/2];
    median=(m1+m2)/2;
}
else
{
    median=num[i/2];
}
printf("\nSorted Numbers: ");
for(i=0;i<as;i++)
{
    printf("%d ", num[i]);
}
printf("\nThe median: %.1f", median);
}