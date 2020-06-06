#include <bits/stdc++.h>

using namespace std;

void decode(){
	int a[] = {1, 2, 5, 10, 50, 100};
	int n, cnt = 0, i = 5;
	cin >> n;
	while (n >= 1){
		if (n < a[i])
			i--; 
		else{
			n -= a[i];
			cnt++;
		}
	}
	cout << cnt << "\n";
}
int main(){
   	ios::sync_with_stdio(false);
   	cin.tie(0);
   	int t;
   	cin >> t;
   	while (t--)
   		decode();
    return 0;
}
