#include<bits/stdc++.h>
using namespace std;
vector <int> a(2*100005, 0);
int main()
{
	int n,i,p,diff,j,flag;
	long long int countless, countmore, ans;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> p;
		a[i]=p;
	}
	sort(a.begin(), a.begin()+n);
	diff=a[n-1]-a[0];
	i=1;
	j=n-2;
	countless=1;
	countmore=1;
	flag=0;
	while(((a[i]==a[0])||(a[n-1]==a[j])))
	{
		flag=1;
		if(a[i]!=a[j])
		{	if(a[i]==a[0])
			{
				countless++;
				i++;
			}
			if(a[j]==a[n-1])
			{
				countmore++;
				j--;
			}
			ans=countless*countmore;
		}
		else
		{
			ans=(n*(n-1))/2;
			break;
		}
	}
	if(flag==0)
		cout << diff << " " << "1" << endl;
	else
		cout << diff << " " <<  ans << endl;
	return 0;
}
