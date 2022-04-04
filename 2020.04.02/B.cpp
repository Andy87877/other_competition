#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int a[n], l[n];
    int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }

    vector<int> answer;
    int temp = 0;
    for (int i = 0; i < n; i++) {
        if (l[i] >= k) {
            temp += l[i];
        }
        if (temp >= a[i]) {
            temp = 0;
            total += 1;
            answer.push_back(i+1);
        }
    }
    sort(answer.begin(), answer.end());

    cout << total << endl;
    for (int i = 0; i < total; i++) {
        cout << answer[i] << " ";
    }
}