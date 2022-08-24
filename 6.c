#include<stdio.h>
void rev(int n[],int s)
{
     int i,j;
     printf("enter a array element\n");
     for(i=0;i<s;i++)
     scanf("%d",&n[i]);
     for(i=s-1;i>=0;i--)
          printf("%d ",n[i]);
}
int main()
{
     int s;
     printf("enter size of array\n");
     scanf("%d",&s);
     int n[s];
     rev(n,s);
     return 0;
}

