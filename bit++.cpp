#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int n,count;
	string a;
	cin >> n;
	count=0;
	while(n--)
	{
		cin >> a;
		if((a.compare("++X")==0)||(a.compare("X++")==0))
			count++;
		else if((a.compare("--X")==0)||(a.compare("X--")==0))
			count--;
	}
	cout << count <<endl;
	return 0;
}

