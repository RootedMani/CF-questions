#include <iostream>
using namespace std;

int main() {
    int n, m, socks_count = 0, days = 0; // socks_count variable refers to the socks that her mother has bought during the process

    cin >> n >> m;


    while (socks_count != 0 or n != 0) {
        if (n != 0) {
            n -= 1;
            days += 1;
        }
        else {
            socks_count -= 1;
            days += 1;
        }

        if (days >= m and days % m == 0) {
            socks_count += 1;
        }
    }
    cout << days << endl;

    return 0;
}