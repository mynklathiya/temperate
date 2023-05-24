#include<stdio.h>

main()
{
	  int fstdigit,lastdigit,sum=0,n;
	  printf("plz enter number and find sum of fst and last digit=");
	  scanf("%d",&n);
	  lastdigit=n%10;
	  while(n>=10)
	  {
	  	n=n/10;
	  }
	  fstdigit=n;
	  sum=fstdigit+lastdigit;
	  printf("sum of digit=%d",sum);
}
