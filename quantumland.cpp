/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
int i,n,c,prob,j;
float sum, ans;

vector <pair <int,float> > a(100001);
vector <int> b(100002,0);
cin >> n;
for(i=1;i<=n;i++)
{
cin >> a[i].first >> a[i].second;
a[i].second=a[i].second/100;
}
sum=0;
ans=1;
for(i=1;i<=n;i++)	
{
if(b[i]==0)
{
a[i].first=j;
ans=a[i].second;
b[i]=1;
while(a[j].first!=i)
{
ans=ans*a[j].second;
b[j]=1;
j=a[j].first;
}
ans=ans*a[j].second;
b[j]=1;
sum=sum+ans;
}
}
printf("%0.2f\n", sum);
return 0;
}
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	vector< pair<int,double> > a(100001);
	vector<int> vis(100001,0);
	int n,i,flag,initial;
	double t_pro,prob,ans;
	cin >> n;
	for(i=1;i<=n;i++)
	{
		cin >> a[i].first >> a[i].second;
		a[i].second=a[i].second/100;
	}
	i=1;
	flag=1;
	prob=0;
	while(flag!=0)
	{
		flag=0;
		t_pro=1;
		while(vis[i]==0)
		{
			vis[i]=1;
			t_pro=t_pro*a[i].second;
			i=a[i].first;
		}
		prob=prob+t_pro;
		for(i=1;i<=n;i++)
		{
			if(vis[i]==0)
			{
				flag=1;
				break;
			}
		}
	}
	ans = roundf(prob * 100) / 100;
	printf("%0.2f\n", ans);
	return 0;
}



