#include<bits/stdc++.h>
using namespace std;int64_t T,N,a,c,v;main(){for(cin>>T;cin>>N;cout<<a<<' ')for(a=c=0;N--;a=max(a,c-=v))cin>>v;}


#include <iostream>
using namespace std;
int main(){
	int T, N;
	for(cin >> T; T; T--){
		long long mn = 0, a, sum=0;
		for(cin >> N; N; N--){
			cin >> a;
			sum += a;
			mn = min(sum, mn);
		}
		cout << -mn << endl;
	}
}


