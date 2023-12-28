#include<stdio.h>
main()
{
	int n,m;
	
	printf("enter the array size:");
	scanf("%d",&n);
	printf("enter the array size:");
	scanf("%d",&m);
	
	int i,j,a[n][m],b[n][m],c[n][m];
	printf("enter the value of array A element:\n");
	 
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++){
			
			printf("enter a[%d]",i);
			scanf("%d",&a[i][j]);
		}
		}
		
	printf("enter the value of array B element:\n");
	
	
	    for(i=0;i<n;i++)
		{
				for(j=0;j<n;j++){ 
			printf("enter b[%d]",i);
			scanf("%d",&b[i][j]);
		}
		}	
		
		
		printf("the addition , subtraction and multiplication of array is:-\n");
		for(i=0;i<n;i++)
		{
				for(j=0;j<n;j++){
			        
					printf("\n addition of %d + %d is:- %d",a[i][j],b[i][j],a[i][j]+b[i][j]);
					printf("\n"); 
					
					printf("\n multiplication of %d * %d is:- %d",a[i][j],b[i][j],a[i][j]*b[i][j]);
					printf("\n");
					   
					printf("\n subtraction of %d - %d is:- %d",a[i][j],b[i][j],a[i][j]-b[i][j]); 
					printf("\n"); 
				}
	    }
	    
    
}
