#include<stdio.h>
void shot(int n[],int s)
{
     int i,j,temp;
     printf("enter a element\n");
     for(i=0;i<s;i++)
           scanf("%d",&n[i]);
           for(i=0;i<s;i++)
     for(j=i+1;j<s;j++)
          if(n[i]>n[j])
     {
          temp=n[i];
          n[i]=n[j];
          n[j]=temp;
     }
      for(i=0;i<s;i++)
          printf("%d ",n[i]);
}
int main()
{
     int s;
     printf("enter a size of array\n");
     scanf("%d",&s);
     int a[s];
     shot(a,s);
     return 0;
}
