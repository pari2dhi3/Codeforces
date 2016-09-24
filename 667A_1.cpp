#include<bits/stdc++.h>
//#define pi 3.1415926535897932384626433832
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	double d,e,v,h,i,ans,t,vdrink,vrain,vini;
	cin >> d >> h >> v >> e;
	vdrink=v;
	vrain=(3.1415926535897932)*d*d*e/4;
	vini=(3.1415926535897932)*d*d*h/4;
        t=(vini/(vdrink-vrain));
	if(t<=10000 && t>=0)
	{
        	cout << "YES\n";
		cout << setprecision(13) << t << endl;
        }
	else
		cout << "NO\n";
	return 0;
}
		
