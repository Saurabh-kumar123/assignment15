#include<stdio.h>
void rotate(int a[])
{
     int temp,s=3,i;


     while(s)
     {
          temp=a[5-1];
          for(i=5-1;i>=1;i--)
               a[i]=a[i-1];
          a[0]=temp;
          s--;
     }
     for(i=0;i<5;i++)
          printf("%d ",a[i]);
}
 int main()
{
     int a[5]={32,29,40,12,70};
   printf("rotate by array in n position\n");
   rotate(a);
   return 0;
}
