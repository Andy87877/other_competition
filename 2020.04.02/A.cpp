#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, m, t;
    cin >> n >> m >> t;
    string a[4];
    string b[n], c[m];
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> c[i];
    }

    if (n == m) {
        a[0] = b[0];
        a[1] = c[0];

        int q;
        for (int i = 0; i < t; i++) {
            cin >> q;
            q += 1;
            q %= 2;
            cout << a[q] << endl;
        }
    } else {
        if (n == 1) {
            a[0] = b[0];
            a[1] = c[0];
            a[2] = b[0];
            a[3] = c[1];
        } else {
            a[0] = b[0];
            a[1] = c[0];
            a[2] = b[1];
            a[3] = c[0];
        }
        
        int q;
        for (int i = 0; i < t; i++) {
            cin >> q;
            q -= 1;
            q %= 4;
            cout << a[q] << endl;
        }
    }
}