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
