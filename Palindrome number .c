#include <stdio.h>
int main()
{
	long int n,s,t;
	scanf("%d",&n);
	s=0;
	t=n;
	while((n/10)!=0)
	{
		s=(n%10)+s*10;
		n=n/10;
	}
	s=s*10+n;
	
	if(s==t)
     printf("Yes");
	else printf("No");
	return 0;
}
