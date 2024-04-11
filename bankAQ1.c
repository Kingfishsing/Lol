#include <stdio.h>
#include<stdlib.h>

int main()
{
     int m,n,i,j;    
     int index=0;  
      int c=0;
      

       
    printf("\nEnter the size of alloction matrix:- ");
    scanf("%d %d" ,&m,&n);
    
        int  alo[m][n];
      int  max[m][n];
     int  need[m][n];
    int safe[m];
    printf("\nEnter the size elements of Alloction matrix:- ");
    
    for(i=0;i<m;i++)
    {
       for( j=0;j<n;j++)
       scanf("%d",&alo[i][j]);
    }
    
      printf("\nAllocation matrix:-\n");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
            printf("\t%d",alo[i][j]);
      }
      printf("\n");
    }
    
  
    printf("\nEnter the elements of Max matrix:- ");
   
    for(i=0;i<m;i++)
    {
       for( j=0;j<n;j++)
       scanf("%d",&max[i][j]);
    }   
     
     int  avi[10];
    printf("\nEnter the avilable:- ");
   for(i=0;i<n;i++)
   scanf("%d",&avi[i]);       
     
     
       printf("\n avi:- "); 
        for(int i=0;i<n;i++)
         printf("\t %d ",avi[i]); 
   
   
    printf("\nMax matrix:-\n");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
            printf("\t%d",max[i][j]);
      }
      printf("\n");     
    }
  
  
  printf(" Need matrix:-\n");
 
 
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
           need[i][j] = abs(max[i][j] - alo[i][j]);
      }
    }
    
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
         printf("\t%d",need[i][j]);
      }
              printf("\n");     
    }
   
    int check[m];
  for(i=0;i<m;i++)
    check[i]=0;
  
  int w[n];
  for( j=0;j<n;j++)
         w[j]=avi[j];
     
     printf("\nWork:- "); 
        for(i=0;i<n;i++)
         printf("\t %d ",w[i]); 
         
         

       for(int c=0;c<m;c++)
	{
	  for(int i=0;i<m;i++)
	    {
	      if(check[i]==0)
	      {
	        int flag=0;
	        for(int j=0;j<n;j++)
	        {   
	          if(need[i][j]>w[j])
	          {
		flag=1;
		break;
	          }
	        }
	        
	        if(flag==0)
	        {
	          safe[index++]=i;
	           for(int y=0; y<n; y++)  
                      	w[y] += alo[i][y];  
                      check[i] = 1; 
	        }
	      }
	    }
	}
	
	
	int f=1;
	for (int i = 0; i < n; i++)  
    	{  
        	    if (check[i] == 0)  
        	        {   
        	        	 f=0;
	            printf("The following system is not safe");  
           	 break;  
	        }  
	} 
	
	if(f==1)
	{
	  for (int i = 0; i <n ; i++)  
                 printf(" P%d ->", safe[i]);  
             printf(" P%d\n", safe[n]); 
	}
       
      
  
 return 0;
 
}








