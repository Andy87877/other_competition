#include <iostream>
#include <cmath>
#define int long long
using namespace std;

signed main() {
    double ans = 0.0, down = 0.0;
    int N;
    cin >> N;
    double X[N], Y[N];

    for (int i = 0; i < N; i++) {
        cin >> X[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> Y[i];
    }


    for (int i = 0; i < N; i++) {
        ans += (X[i]*Y[i]);
    }

    for (int i = 0; i < N; i++) {
        down += pow((X[i]*X[i]),0.5)*pow((Y[i]*Y[i]),0.5);
    }

    ans /= down;
    printf("%.2f ", ans);
}