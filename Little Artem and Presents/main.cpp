#include <iostream>
using namespace std;

int main() {
    int stone_count, gift_count = 0, last_gift;

    cin >> stone_count;

    if (stone_count % 3 == 1) {
        last_gift = 2;
    }
    else {
        last_gift = 1;
    }

    while (stone_count != 0) {
        if (last_gift == 2) {
            gift_count += 1;
            last_gift = 1;
            stone_count -= 1;
        }
        else {
            gift_count += 1;
            last_gift = 2;
            stone_count -= 2;
        }
    }

    cout << gift_count << endl;

    return 0;
}