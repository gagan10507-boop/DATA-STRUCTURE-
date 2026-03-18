#include <stdio.h>
int main(){
	int arr[100],n,j,i,min,temp;
	
	printf("ENTER NUMBER OF ELEMENT: ");
	scanf("%d",&n);
	
	printf("ENTER ELEMENT:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		min = i;
		for(j=i+1;j<n;j++)
	    {
		   if(arr[j]>arr[j+1])
		   {
		   	min=j;  
		   } 
	    }
	    temp = arr[j];
        arr[j] = arr[j+1];   	 
        arr[j+1] = temp;
    }  
	
	printf("SORTED ELEMENT:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	
	return 0;	
}
