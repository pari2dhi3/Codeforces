#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int i,j,len;
	string a;
	string b;
	cin >> a;
	len=a.length();
	j=0;
	for(i=0;i<len;)
	{
		if((a[i]==65)||(a[i]==79)||(a[i]==89)||(a[i]==69)||(a[i]==85)||(a[i]==73)||(a[i]==97)||(a[i]==111)||(a[i]==121)||(a[i]==101)||(a[i]==117)||(a[i]==105))
			i++;	
		else if((a[i]>=65)&&(a[i]<=90))
		{
			b.insert(j,1,'.');
			j++;
			b.insert(j,1,a[i]+32);
			j++;
			i++;
		}
		else if((a[i]>=97)&&(a[i]<=122))
		{
			b.insert(j,1,'.');
			j++;
			b.insert(j,1,a[i]);
			j++;
			i++;
		}
	}
	cout << b;
	cout << endl;
	return 0;
}
