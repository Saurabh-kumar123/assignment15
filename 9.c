#include<stdio.h>
int main()
{
    int a[5]={1,3,5,7,9},b[5]={2,4,8,11,12},i=0,j=0,c[10],k;
    for(k=0;k<10;k++)
    {
    if(i>=5)
    {
        while(k<10)
        {
            c[k]=b[j];
            k++,j++;
            if(k==10)
            break;
        }}
       else if(a[i]<b[j])
        {
        c[k]=a[i];
        i++;
        }
        else
        {
        c[k]=b[j];
        j++;
        if(j>=5)
    {
        while(k<10)
        {
            c[k]=a[i];
            k++,i++;
            if(k==10)
            break;
        }}
        }
        
    }
    for(k=0;k<10;k++)
    printf("%d ",c[k]);
    return 0;
}