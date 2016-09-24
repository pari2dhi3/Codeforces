#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	long long int d, e;
	cin >> n;
	cin >> q;
	e=q;
	d=q;
	n--;
	while(n--)	
	{
		cin >> q;
		if(e>q)
			e=e+(e-q);
		else
		{
			d=d+(q-e);
			e=e+(q-e);
		}
	}
	cout << d << endl;
	return 0;
}

