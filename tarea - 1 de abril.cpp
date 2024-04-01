#include <iostream>
using namespace std;

int main() {
    int nums = -1;
    while (nums <= 0) {
        cout << "Pon un numero para ver la serie fibonacci aaa: ";
        cin >> nums;
    }

    int n1 = 0, n2 = 1;
    for (int i = 0; i < nums; ++i) {
        cout << (i == 0 ? n1 : n2) << (i < nums - 1 ? ", " : "");
        if (i > 0) {
            n2 += n1;
            n1 = n2 - n1;
        }
    }
    return 0;
}
