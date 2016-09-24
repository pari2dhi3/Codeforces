#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int n,ans=0;
	cin >> n;
	if(n%3==0)
		ans=n-(n/3);
	else
	{
		n-=(n%3);
		ans=n-(n/3)+1;
	}
	cout << ans << endl;
	return 0;
}

