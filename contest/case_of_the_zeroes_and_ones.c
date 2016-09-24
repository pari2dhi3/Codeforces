#include<stdio.h>
int main()
{
	int l,i,count0, count1;
	char s[200001];
	scanf("%d", &l);
	scanf("%s", s);
	count0=0;
	count1=0;
	for(i=0;i<l;i++)
	{
		if(s[i]=='0')
			count0++;
		if(s[i]=='1')
			count1++;
	}
	if(count0>=count1)
		printf("%d\n", (count0-count1));
	if(count1>count0)
		printf("%d\n", (count1-count0));
	return 0;
}
