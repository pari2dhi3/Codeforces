#include<stdio.h>
int main()
{
	int n, a[1005],i,flag;
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	a[0]=n-a[0];
	for(i=1;i<n;i++)
	{
		if(i%2==0)
		{
			if(a[i]>i)
				a[i]=n-a[i];
			else if(a[i]<=i)
				a[i]=i-a[i];
		}
		else if(i%2!=0)
		{
			if(a[i]>=i)
				a[i]=a[i]-i;
			else if(a[i]<i)
				a[i]=i+a[i];
		}
	}
	flag=0;
	for(i=0;i<(n-1);i++)
	{
		if(a[i]==a[i+1])
			flag=1;
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}
