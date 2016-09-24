#include <iostream>
using namespace std;
int main()
{
	long long int n,m,a,len,bre,rem,total;
	cin >> n >> m >> a;
	len=(n/a);
	bre=(m/a);
	if(((n%a)==0)&&((m%a)==0))
		total=len*bre;
	else if(((n%a)==0)&&((m%a)!=0))
		total=(len*bre)+len;
	else if(((n%a)!=0)&&((m%a)==0))
		total=(len*bre)+bre;
	else
	{
		rem=len+bre+1;
		total=(len*bre)+rem;
	}
	cout << total << endl;
	return 0;
}

