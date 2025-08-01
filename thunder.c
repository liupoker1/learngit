#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void leisize(char arr[][1000],int n,int m,char lei)
	{
	  
		int i;
	   	int j;
		int k;
	   	int count;
		for(i=0;i<n;i++)
		{
		  
		  for(j=0;j<m;j++)
		  {
		  	if(arr[i][j]==lei)
		  	{
		  		printf("*");
			}
		  	
			
		    else
			{
				int direction[8][2]={{-1,-1},{-1,0},{-1,1},
				                      {0,-1},        {0,1},
				                      {1,-1}, {1,0}, {1,1} };	
				
			
					int count=0;  
					for(k=0;k<8;k++)	  	       
				   {
	                 //i=0,j=0
					  int ni=i+direction[k][0];
					  int nj=j+direction[k][1];
					  if(ni>=0&&nj>=0&&ni<n&&nj<m&&arr[ni][nj]==lei)
					  {
						count++;
					  }
				    }
					printf("%d",count);
			}
				       
		  } 
			   printf("\n");   
	        }   
	}	
	int main()
	{
	    char lei='*';
	    char empty='.';
	    int i;
	    int j;
		int n;
		int m;
		printf("请输入两个整数\n");
		scanf("%d%d",&n,&m);
		char arr[1000][1000];
		char (*p)[m]=arr;
			srand(time(NULL));
			for(i=0;i<n;i++)
			{
				
				for(j=0;j<m;j++)
				{
					int index=rand()%2;
					if(index==0)
					{
					arr[i][j]=lei;
						//*(*p+j)=lei;//指针传递后传入函数出问题？ 
					}
					else
					{
						arr[i][j]=empty;
					//*(*p+j)=empty;
						
					}
					printf("%c",arr[i][j]);
				}
				printf("\n");
			}
			printf("-------------\n");
		leisize(arr,n,m,lei);	
		return 0;
	}

	


