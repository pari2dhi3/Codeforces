#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int t,n,sum,i;
	cin >> n;
	if(n>=1)
		sum=n;
	for(i=1;i<n;i++)
		sum=sum+i*(n-i);
	cout << sum << endl;
	return 0;
}






