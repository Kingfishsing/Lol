#include<stdio.h>
#include<stdlib.h>


 int fcfs(int a[],int n)
  {
    int i,seek=0;
    for(i=0;i<n-1;i++)
    {
     int z=abs(a[i+1]-a[i]);
     seek=seek+z;
    }
    return seek;
  }

int main()
{
  int i,n;
  printf("Enter the size of array:- ");
  scanf("%d",&n);
  
  int a[n];
  printf("Enter the array elements");
  for(i=1;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
  
  printf("Enter the start header:- ");
  scanf("%d",&a[0]);
 
 
 printf("Total seek header:- %d",fcfs(a,n));

}

