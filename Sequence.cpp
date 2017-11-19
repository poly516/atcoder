#include<algorithm>
#include<iostream>
using namespace std;
long long sum,a[1000000],n,ans,ans1,last;
void solve1(){
	if (sum<=0){
		ans+=1-sum;
		sum=1;
	}
}
void solve2(){
	if (sum>=0){
		ans+=sum+1;
		sum=-1;
	}
}
void solve(int f){
	for (int i=0;i<n;i++){
		sum+=a[i];
		if (i%2==f)
			solve1();
		else
			solve2();
	}
}
int main()
{
	cin>>n;
	for (int i=0;i<n;i++) cin>>a[i];
	solve(0);
	ans1=ans;sum=ans=0;
	solve(1);
	cout<<min(ans,ans1);
	return 0;
}
