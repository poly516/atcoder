#include<algorithm>
#include<clocale>
#include<cmath>
#include<complex>
#include<csetjmp>
#include<csignal>
#include<cstdarg>
#include<cstddef>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<deque>
#include<iostream>
#include<istream>
#include<map>
#include<math.h>
#include<ostream>
#include<queue>
#include<set>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
int n,a,b,m,num,ans;
vector<pair<int,int> > v;
int main(){
	cin>>n>>m;
	for (int i=0;i<m;i++){
		cin>>a>>b;
		v.push_back(pair<int,int>(a,b-1));
	}
	sort(v.begin(),v.end());
	for (int i=0;i<m&&num<=n;)
		if (num<v[i].second)
			num++;
		else if (num==v[i].second){
			ans++;
			while (i<m&&num>=v[i].first){
				if (num>v[i].second) num=v[i].second;
				i++;
			}
		}
	cout<<ans<<endl;
	return 0;
}
