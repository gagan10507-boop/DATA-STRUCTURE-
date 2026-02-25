#include <stdio.h>
int main()
{
	int a[10];
	int n=5;
	int pos;
	int ele;
	
	
	for(int i=0;i<5;i++)
	{
		printf("enter the aaray");
	    scanf("%d",&a[i]);
	}
	
	
	printf("enter the aaray to change");
    scanf("%d",&pos);
    
    printf("enter the element to insert");
    scanf("%d",&ele);
    
    
   
    	
	for(int i=0;i>pos;i--)
	{
	    a[i]=a[i-1];
	}
	
	a[pos]=ele; 
	n++;
	
	
	for(int i=0;i<10;i++)
    {
    	printf("%d\n",a[i]);
	}
    
    return 0;
}
