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
long long n,a[1000000],ans;
int main(){
	cin>>n;
	for (int i=0;i<n;i++) cin>>a[i];
	for (int i=0;i<n;i++) a[i]=a[i]-i-1;
	sort(a,a+n);
	if (n%2==1)
		for (int i=0;i<n;i++) ans+=abs(a[i]-a[n/2]);
	else
		for (int i=0;i<n;i++) ans+=abs(a[i]-(a[n/2]+a[n/2-1])/2);
	cout<<ans<<endl;
	return 0;
}
