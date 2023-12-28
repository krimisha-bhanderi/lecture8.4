#include<stdio.h>
main()
{
	int n,m;
	
	printf("enter the array size:");
	scanf("%d",&n);
	printf("enter the array size:");
	scanf("%d",&m);
	
	int i,j,a[n][m],b[n][m],sum;

	 
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++){
			
			printf("enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
		}
		

		
		for(i=0;i<n;i++)
		{
				for(j=0;j<m;j++){
			       sum+=a[i][j];
				
				}
	    }
	  	printf("the sum of A and B element is:%d\n",sum);   
    
}
