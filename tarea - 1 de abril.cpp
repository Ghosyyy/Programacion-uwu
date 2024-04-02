#include <iostream>
using namespace std;

int main() {
    int nums;
    cout << "Pon un numero para ver la serie fibonacci aaaa: ";
    cin >> nums;

    if (nums <= 0) {
        return 0;
    }

    int n1 = 0, n2 = 1;
    for (int i = 0; i < nums; ++i) {
        cout << (i == 0 ? n1 : n2) << (i < nums - 1 ? ", " : "");
        int temp = n2;
        n2 += n1;
        n1 = temp;
    }
    return 0;
}

