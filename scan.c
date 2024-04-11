#include<stdio.h>
#include<stdlib.h>


 int scan(int a[],int n,int d,int s)
  {
   
   if(d==0)
   {
    int i,j,seek=0;
    for(i=s;i<n-1;i++)
    {
     int z=abs(a[i+1]-a[i]);
     seek=seek+z;
    }
    
    seek=seek+abs(a[n-1]-a[s-1]);
    
    for(j=s-1;j>1;j--)
    {
     int z=abs(a[j]-a[j-1]);
     seek=seek+z;
    }
     
     return seek;    
    }
    
    
   if(d==1)
   {
    int i,j,seek=0;   
   for(j=s;j>0;j--)
    {
     int z=abs(a[j]-a[j-1]);
     seek=seek+z;
    }
    seek=seek+abs(a[0]-a[s+1]);
    
    
    for(i=s+1;i<n-2;i++)
    {
     int z=abs(a[i+1]-a[i]);
     seek=seek+z;
    }
    return seek;   
   }   
     
  }
    
  
  
  
  void sort( int a[],int n)
  {
    int i,j,temp;
    for(i=0;i<n;i++)
    {
     for(j=0;j<n-1;j++)
     {
      if(a[j] > a[j+1])
      {
       temp= a[j];
       a[j]=a[j+1];
       a[j+1]=temp;
      }
     }
    }
  }

 int search(int a[],int n,int h)
 {
  for(int i=0;i<n;i++)
  {
    if(h==a[i])
    {
     return i;
    }
  }
 }


int main()
{
  int i,h,n,d;
  printf("Enter the size of array:- ");
  scanf("%d",&n);
  
  int a[n];
  printf("Enter the array elements");
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
  
  printf("Enter the start header:- ");
  scanf("%d",&h);

  printf("Enter the direction as Right or Left (0 for Right and 1 for Left):- ");
  scanf("%d",&d);
  
  sort (a,n);
  for(i=1;i<n;i++)
  {
   printf("%d \t",a[i]);
  }
  
 int s= search(a,n,h);
   
 printf("\n Total seek header:- %d",scan(a,n,d,s));

}






