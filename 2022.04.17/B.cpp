#include <bits/stdc++.h>
 
#define int long long
 
using namespace std;
 
signed main(void)
{
	int n,k,t;
	
	cin >> n >> k >> t;
	
	int ans = k / n;
	
	int more = k % n;
	
	if( ans % 2 == 1 )
	{
		int last_one = n - more + 1;
		
		if( t >= last_one ) ans++;
	}
	else
	{
		if( t <= more ) ans++; // last_one = more
	}
	
	cout << ans << "\n";
}

// #include <iostream>
// #define int long long
// using namespace std;

// signed main() {
//     int N,K,T, temp, total = 0;
//     cin >> N >> K >> T;
   
//     temp = (K%N);
//     if ((temp) != 0) {
//         if (((K/N) % 2) == 0) {
//             total = (temp >= T);
//         } else {
//             total = (temp <= T);
//         }
//     }
//     total += (K/N);

//     cout << total << endl;
// }