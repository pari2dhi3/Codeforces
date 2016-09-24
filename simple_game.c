#include<stdio.h>
int main()
{
	int n,m,flag,ans;
	scanf("%d %d", &n, &m);
	flag=0;
	if((n==1)&&(m==1))
	{
		ans=1;
		flag=1;
	}
	if((n%2!=0)&&(flag==0))
	{
		if(m>=((n/2)+1))
			ans=m-1;
		else 
			ans=m+1;
	}
	else if((n%2==0)&&(flag==0))
	{
		if(m>((n/2)+1))
			ans=m-1;
		else if(m<(n/2))
			ans=m+1;
		else if(m==(n/2))
			ans=m+1;
		else if(m==((n/2)+1))
			ans=m-1;
	}
	printf("%d\n", ans);
	return 0;
}
