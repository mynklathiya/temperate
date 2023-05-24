#include<stdio.h>

main()
{
	  int n,o,rem,reversed=0;
	  printf("enter int=");
	  scanf("%d",&n);
	  o=n;
	  while(n!=0)
	  {
	  	  rem=n%10;
	  	  reversed=reversed*10+rem;
	  	  n /=10;
	  }
	  if(o==reversed)
	  {
	  	printf("%d is a palindrome",o);
	  }
	  else
	  {
	  	printf("%d is not palindrome",o);
	  }
}
