#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	long long int a,b,count,temp;
	cin >> a >> b;
	count=0;
	while( a>0 && b>0)
	{
		temp=a%b;
		count+=a/b;
		a=b;
		b=temp;
	}
	cout << count << endl;
	return 0;
}


