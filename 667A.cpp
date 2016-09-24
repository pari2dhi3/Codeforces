#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	double d,e,v,h,i,ans,t,vdrink,vrain,vini;
	cin >> d >> h >> v >> e;
	vdrink=v;
	vrain=(22/7)*(pow(d,2))*e/4;
	vini=(22/7)*(pow(d,2))*h/4;
	if(vdrink<=vrain)
		cout << "NO\n";
	else
	{
		t=(-1)*vini/(vdrink-vrain);
		cout << t << endl;
		if(t<=1000 && t>=0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
		
