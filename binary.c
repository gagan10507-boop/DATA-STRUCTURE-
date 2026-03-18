#include <stdio.h>
int main(){
	int arr[100],n,i,key;
	int low,high,mid;
	int found=0;
	
	printf("ENTER NUMBER OF ELEMENT: ");
	scanf("%d",&n);
	
	printf("ENTER SORTED ARRAY ELEMENT:\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
    printf("ENTER ELEMENT TO SEARCH: ");
    scanf("%d",&key);
    
    low = 0;
    high = n-1;
    
    while(low>high)
    {
    	mid = (low + high)/2;
    	
    	if(arr[mid] == key)
    	{
    		printf("ELEMENT FOUND AT POSITION %d",mid+1);
    		found = 1;
    		break;
		}
		else if(key < arr[mid])
		{
			high = mid-1;
		}
		else
		{
			low = mid+1;
		}
	}
	
	if(found == 0)
	{
		printf("ELEMENT NOT FOUND");
	}
	
	return 0;	
}
