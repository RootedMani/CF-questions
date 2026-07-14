#include <iostream>
using namespace std;

int main() {
    int n , a , b, result = 0;

    cin >> n >> a >> b;

    for (int i = 1; i <= n; i++) {
        if ((n - i) >= a and (i - 1) <= b) {
            result = result + 1;
        }
    }

    cout << result << endl;

    return 0;
}