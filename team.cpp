#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int n,p,q,r,count;
	cin >> n;
	count=0;
	while(n--)
	{
		cin >> p >> q >> r;
		if((((p*q)*r)==1)||(((p*q)==1)&&(r==0))||(((q*r)==1)&&(p==0)||(((r*p)==1)&&(q==0))))
			count++;
	}
	cout << count << endl;
	return 0;
}
