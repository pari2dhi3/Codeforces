#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p,a,i;
	double b;
	cin >> n;
	p=0;
	for(i=0;i<n;i++)
	{
		cin >> a;
		p=p+a;
	}
	b=(double)p/(double)n;
	printf("%.12f\n", b);	
	return 0;
}


