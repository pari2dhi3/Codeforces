#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int n,i,p,w,x,q,flag;
	vector <int> a(100000,0);
	vector <int> b(100000,0);
	vector <int> c(100000,0);
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> p;
		a[i]=p;
	}
	for(i=0;i<(n-1);i++)
	{
		cin >> p;
		b[i]=p;
	}
	for(i=0;i<(n-2);i++)
	{
		cin >> p;
		c[i]=p;
	}
	sort (a.begin(), a.begin()+n);
	sort (b.begin(), b.begin()+(n-1));
	sort (c.begin(), c.begin()+(n-2));
	flag=0;
	for(i=0;i<(n-1);i++)
	{
		if(a[i]==b[i])
			flag=1;
		else
		{
			w=a[i];
			flag=0;
			break;
		}
	}
	if(flag==1)
		w=a[n-1];
	flag=0;
	for(i=0;i<(n-2);i++)
	{
		if(b[i]==c[i])
			flag=1;
		else
		{
			x=b[i];
			flag=0;
			break;
		}
	}
	if(flag==1)
		x=b[n-2];
	cout << w << endl;
	cout << x << endl;
	return 0;
}





