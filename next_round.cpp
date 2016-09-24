#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int n,k,i,count;
	vector <int> a(101);
	cin >> n >> k;
	for(i=0;i<n;i++)
		cin >> a[i];
	if(a[k-1]>0)
	{
		i=0;
		count=0;
		while((a[k-1]==a[k+i])&&((i+k)<n))
		{
			count++;
			i++;
		}
	}
	else if(a[k-1]<=0)
	{
		i=-2;
		count=-1;
		while((a[k+i]<=0)&&((k+i)>=0))
		{
			i--;
			count--;
		}
	}
	printf("%d\n", k+count);
	return 0;
}


