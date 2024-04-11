#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100],i,n,seek=0,initial,count=0;
    printf("Enter the size of an array:- ");
    scanf("%d",&n);
    printf("Enter the array elements:- ");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    printf("Enter head position:- ");
    scanf("%d",&initial);

    while(count!=n)
    {
        int min=1000,d,index;
        for(i=0;i<n;i++)
        {
           d=abs(a[i]-initial);
           if(min>d)
           {
               min=d;
               index=i;
           }
           
        }
        seek=seek+min;
        initial=a[index];
     
        a[index]=1000;
        count++;
    }
    
    printf("Total head movement is %d",seek);
    return 0;
}



