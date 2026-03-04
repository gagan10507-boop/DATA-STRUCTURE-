#include <stdio.h>
int main(){
	int i,n=5;
	int ele;
	int a[5];
	
	for(i=0;i<n;i++)
	{
		printf("enter the aaray");
		scanf("%d",&a[i]);
	}
	
	printf("enter the element");
	scanf("%d",&ele);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==ele)
		
		{
			printf("element of path is %d\n",i);
		}
	}
	
	return 0;
	
}
