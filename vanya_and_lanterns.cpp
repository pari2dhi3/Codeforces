#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,l,i,p;
	double diff,maxdiff,ans;
	vector <int> a(1000,-1);
	cin >> n >> l;
	for(i=0;i<n;i++)
	{
		cin >> p;
		a[i]=p;
	}
	sort(a.begin(), a.begin()+n);
	for(i=1;i<n;i++)
	{
		diff=(double)a[i]-(double)a[i-1];
		if(maxdiff<=diff)
			maxdiff=diff;
	}
	maxdiff=maxdiff/2;
	if((a[0]==0)&&(a[n-1]==n))
		printf("%0.10f\n", maxdiff);
	else
	{
		if((maxdiff<a[0])&&((l-a[n-1])<a[0]))
			ans=(double)a[0];
		else if(((l-a[n-1])>a[0])&&((l-a[n-1])>maxdiff))
			ans=(double)(l-a[n-1]);
		else if(a[0]>maxdiff)
			ans=(double)a[0];
		else if(l-a[n-1]>maxdiff)
			ans=(double)l-a[n-1];
		else
			ans=(double)maxdiff;
		printf("%0.10f\n", ans);
	}
	return 0;
}


