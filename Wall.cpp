#include<iostream>
#include<sstream>
#include<algorithm>
#include<cstdio>
#include<math.h>
#include<cmath>
#include<cstdlib>
#include<utility>
#include<queue>
#include<ctime>
#include<string>
#include<string.h>
#include<cstring>
#include<vector>
#include<stack>
#include<map>
#include<set>
#include<functional>
#include<cassert>
#include<complex>
#include<deque>
#include<stdio.h>
using namespace std;
int c[11][11]={0},h,k,a[200][200],number[10]={0},magic=1000000000,ans=0;
bool b[11]={0};
void dfs(int x,int now,int l){
	if (x==1||x==-1){
		magic=min(magic,now);
		return ;
	}
	for (int i=0;i<=9;i++) if (b[i]==0&&i!=x&&c[x][i]<=l){
		b[i]=1;
		dfs(i,now+c[x][i],l);
		b[i]=0;
	}
}
int main()
{
	cin>>h>>k;
	for (int i=0;i<=9;i++)
		for (int j=0;j<=9;j++)
			cin>>c[i][j];
	for (int i=0;i<h;i++)
		for (int j=0;j<k;j++)
			cin>>a[i][j];
	number[1]=0;
	for (int i=0;i<h;i++)
		for (int j=0;j<k;j++){
			memset(b,0,11);
			magic=1000000000;
			if (number[a[i][j]]==0){
				dfs(a[i][j],0,c[a[i][j]][1]);
				number[a[i][j]]=magic;
			}
			ans+=number[a[i][j]];
		}
	cout<<ans;
	return 0;
}
