#include<stdio.h>
void freq(int n[],int s)
{
     int i,j,count=0;
     printf("enter a element\n");
     for(i=0;i<s;i++)
          scanf("%d",&n[i]);
          for(i=0;i<s;i++)
     {
          for(j=0;j<=i;j++)
               if(n[i]==n[j])
               break;
          if(i==j)
               {for(j=0;j<s;j++)
               if(n[i]==n[j])
               count++;
          printf("\n%d - %d",n[i],count);}
          count=0;
     }
}
int main()
{
     int s;
     printf("enter a size of array\n");
     scanf("%d",&s);
     int a[s];
     freq(a,s);
     return 0;
}
