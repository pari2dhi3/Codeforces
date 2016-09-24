#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
	return ( *(int*)b - *(int*)a );
}
int main()
{
	int n, a[1000],i,j,p,q,size,k,flag;
	scanf("%d", &n);
	scanf("%d", &p);
	q=p;
	for(i=0;i<(n-1);i++)
		scanf("%d", &a[i]);
	qsort(a, i, sizeof(int), cmpfunc);
	j=0;
	while(1)
	{
		if(a[j]>=p)
		{
			i=j;
			size=0;
			while(a[i]==a[j])
			{
				size++;	
				i++;
			}
			k=j;
			if(size!=1)
			{
				for(i=0;i<size;i++)
				{
					if(a[j]>=p)
					{
						a[j]--;
						p++;
						j++;
					}
					else
					{
						flag=1;
						break;
					}
				}
			}
			else
			{
				while(a[j]>=p)
				{
					a[j]--;
					p++;
					j++;
				}
			}
			j=j+size;
			if(flag==1)
				break;
		}
		else
			break;
	}
	printf("%d\n", p-q);
	return 0;
}

