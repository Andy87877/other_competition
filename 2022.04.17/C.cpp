#include <iostream>
#include <cmath>
#define int long long
using namespace std;

signed main() {
    int ans;
    double s,a,b,c;
    cin >> a >> b >> c;
    s = (a+b+c)/2;
    ans = pow((s*(s-a)*(s-b)*(s-c)),0.5);
    cout << ans;
}