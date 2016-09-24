#include<stdio.h>
int mod(int a, int b)
{
	int r=a%b;
	return r<0 ? r+b : r;
}
int main()
{
	int n, a[1005],i,flag;
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	a[0]=n-a[0];
	flag=0;
	for(i=1;i<n;i++)
	{
		if(i%2==0)
		{
			a[i]=a[i]+a[0];
			a[i]=a[i]%n;
			if(a[i]!=i)
				flag=1;
		}
		else if(i%2!=0)
		{
			a[i]=a[i]-a[0];
			a[i]=mod(a[i],n);
			if(a[i]!=i)
				flag=1;
		}
	}
	if(flag==0)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}
