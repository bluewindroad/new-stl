#include<bits/stdc++.h>
using namespace std; 
void swap(int &x,int &y)
{
	int t=x;
	x=y;
	y=t;
}
void mysort(vector<int> &a,int l,int r)
{
	if(l==r)return;
	int mid=(l+r)/2;
	int t=a[mid];
	int i=l;
	int j=r;
	while(i<j)
	{
		while(a[i]<t)++i;
		while(a[j]>t)--j;
		if(a[i]>=t&&a[j]<=t&&a[i]!=a[j]
		){
		swap(a[i],a[j]);
		if(j==mid)mid=i;
		else if(i==mid)mid=j;
		cout<<mid<<' '<<i<<' '<<j<<endl;
	}
	if(a[i]==t)--j; 
	}
	for(int i=0;i<10;++i)
	{
		cout<<a[i]<<' ';
	}
	cout<<endl;
if(mid!=l)	mysort(a,l,mid);
if(mid!=r-1)	mysort(a,mid+1,r);

}
int main()
{
	vector<int> a;
	int p;
	for(int i=0;i<10;++i)
	{
		cin>>p;
		a.push_back(p);
	}
	mysort(a,0,9);
	for(int i=0;i<10;++i)
	{
		cout<<a[i]<<' ';
	}
	cout<<endl;
	return 0;
 } // 1 3 5 8 5 6 6 8 4 2
// 7 9 5 6 4 3 1 2 0 8
//1 3 5 7 9 0 2 4 6 8
