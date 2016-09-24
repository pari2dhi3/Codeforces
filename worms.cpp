#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int n,m,sum,p,i,j,k;
	vector <int> a(100005,0);
	vector < pair <int,int> > q;
	pair <int,int> t;
	vector <int> ans(100005,0);
	cin >> n;
	sum=0;
	for(i=0;i<n;i++)
	{
		cin >> p;
		a[i]=sum+p;
		sum=sum+p;
	}
	cin >> m;
	for(i=0;i<m;i++)
	{
		cin >> p;
		t.first=p;
		t.second=i;
		q.push_back(t);
	}
	sort(q.begin(),  q.begin()+m);
	j=0;
	i=0;
	k=0;
	for(i=0;i<m;i++)
	{
		while(q[k].first>a[j])
			j++;
		ans[q[k].second]=j+1;
		k++;
	}
	for(i=0;i<m;i++)
		cout << ans[i] << endl;
	return 0;
}
