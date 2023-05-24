#include<stdio.h>

main()
{
	int n,i=0;
	printf("Enter Value:-");
	scanf("%d",&n);
	
	while(n>0)
	{
		n=n/10;
	    i++;
	}
	printf("Count = %d",i);
}
