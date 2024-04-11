#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 int a[20],l[20];
 int st,c,s,n,z=0;
 char name[20]; 
struct file
{
 char n[20];
 int start;
 int size;
};

 struct file arr[10];
  
  void bit ( int a[])
  {
   
    printf("\nBit Vector:- ");
      for(int i=0;i<20;i++)
      {
       printf("%d\t", a[i]);
      }
   }
   
   
   void  create ()
{  
    printf("\nEnter the file name:-");
    scanf("%s",name);
     printf("\nEnter the Start Block:-");
    scanf("%d",&st);
     printf("\nEnter the size:-");
    scanf("%d",&s);  
   }
   
   void display()
   {
     for(int i=0;i<n;i++)
     {
      printf("\nFile Name:- \t %s",arr[i].n);
      printf("\nStart Block:- \t%d",arr[i].start);
      printf("\nSize:- \t%d",arr[i].size);
          
     }
   }
   
   
   void linked()
   {
      int i,j;
     for(i=0;i<20;i++)
     {
       if(a[i]==0)
       {
         l[0]=i;
         break;
       }
     }
   
     for(j=i;j<20-i;i++)
     {
       if(a[j]==0)
       {
         l[i]=j;
         i=i+1;
       }
     }
   }
   
   
   void assign()
   {
    if(c==0)
    {
      
     for(int i=st; i<st+s;i++)
     {
          a[i]=1;
     }
     strcpy(arr[z].n,name);
     arr[z].start=st;
     arr[z].size=s;
     z=z+1;
    }
   }
 
  
   
int main()
{

  
  int ch,f=1;
 //int st,s,c;

  printf("\nEnter  the NO file:-");
    scanf("%d",&n);
 
  for(int i=0;i<20;i++)
    a[i]=0;
 
   while(f)
  {
  
  //int a[20];
  printf("\n\t\t*** Menu Driven Program*** \n1. Show Bit vector. \n2.Create New File.\n3.Show Directory. \n4. Delete File. \n5. Exit. ");
   
   printf("\nEnter your choice:-  ");
   scanf("%d",&ch);
   switch(ch)
   {   
     case 1:
     {
           bit(a);
     }
     break;
     case 2:
     {
             
      }
 
     break;
     case 3:
     {
       display();
     }
     break;
     case 4:
     {
     
     }
     break;
     case 5:
     {
        f=0;
     }
    }
   
  
  }

}




