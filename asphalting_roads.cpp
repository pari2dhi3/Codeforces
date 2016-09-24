#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,p,q,day,j;
	vector<int> h(50,0);
	vector<int> v(50,0);
	vector<int> a(50,0);
	cin >> n;
	i=n*n;
	day=0;
	j=0;
	while(i--)
	{
		cin >> p;
		cin >> q;
		if((h[p-1]==0)&&(v[q-1]==0))
		{
			h[p-1]++;
			v[q-1]++;
			day++;
			a[j]=day;
			j++;
		}
		else
			day++;
	}
	for(i=0;i<j;i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}

