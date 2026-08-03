#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long a[n], b[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        long long sum = 0;
        long long mxSmall = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) {
                sum += a[i];
                if (b[i] > mxSmall)
                    mxSmall = b[i];
            } else {
                sum += b[i];
                if (a[i] > mxSmall)
                    mxSmall = a[i];
            }
        }

        cout << sum + mxSmall << endl;
    }

    return 0;
}
