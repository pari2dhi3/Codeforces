#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int n, len,i;
	string a;
	cin >> n;
	while(n--)
	{
		cin >> a;
		len=a.length();
		if(len>10)
		{
			cout <<  a[0] << len-2 << a[len-1];
		}
		else
		{
			for(i=0;i<len;i++)
				cout << a[i];
		}
		cout << endl;

	}
	return 0;
}




