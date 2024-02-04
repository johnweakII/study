#include <stdio.h>

int main()
{
   int num[5], i, c,t=0;
   
   printf("\n\nEnter 5 numbers: ");
   for(i = 0 ; i < 5 ; i++)
   {
       scanf("%d",&num[i]);
           t=num[i];
           num[i]=num[0];
           num[0]=t;
         
       for(c = 1 ; c <=i; c++)
       {
            if(num[c]==num[0])
           {
               printf("duplicate not allowed\n");
           t=num[i];
           num[i]=num[0];
           num[0]=t;
               i--;
           }

       }
           
          
   }
   printf("\nUnique values:%d,%d,%d,%d,%d",num[0],num[1],num[2],num[3],num[4]);
   return 0;
}
