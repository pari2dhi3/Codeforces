#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
                 return a;
         else
                 return gcd(b,a%b);
}
int main()
{
	ios_base::sync_with_stdio(false);
	vector <int> num(100000,0);
	int i,n,w,flag;
	cin >> n;
	w=0;
	for(i=0;i<n;i++)
	{
		cin >> num[i];
	}
	w=gcd(num[0], num[1]);
	for(i=2;i<n;i++)
		w=gcd(w,num[i]);
	flag=0;
	for(i=0;i<n;i++)
	{
		num[i]=num[i]/w;
		while((num[i]%2==0)||(num[i]%3==0))
		{
			if(num[i]%2==0)
				num[i]=num[i]/2;
			if(num[i]%3==0)
				num[i]=num[i]/3;
		}
		if(num[i]!=1)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}

