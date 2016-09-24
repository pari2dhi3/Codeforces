#include<stdio.h>
int b[105];
int main()
{
	int n,m,i,j,q,max,p,index,final;
	index=0;
	final=0;
	scanf("%d %d", &n, &m);
	for(i=0;i<m;i++)
	{
		max=-1;
		p=0;
		q=0;
		for(j=0;j<n;j++)
		{
			scanf("%d", &q);
			p=q;
			if(p>max)
			{
				max=p;
				index=j;
			}
		}
		b[index]++;
	}
	max=0;
	p=0;
	for(i=0;i<n;i++)
	{
		p=b[i];
		if(p>max)
		{
			max=p;
			final=i;
		}
	}
	printf("%d\n", (final+1));
	return 0;
}

