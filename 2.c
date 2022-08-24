#include<stdio.h>
int arr(int b[],int s)
{
     int i,max;
     printf("enter a element of array\n");
     for(i=0;i<s;i++)
          scanf("%d",&b[i]);
          max=b[0];
          for(i=0;i<s;i++)
               if(max>b[i])
               max=b[i];
          return max;
}
int main()
{
     int s;
     printf("enter a size of array\n");
     scanf("%d",&s);
     int a[s];
     printf("smallest element is %d",arr(a,s));
     return 0;
}

