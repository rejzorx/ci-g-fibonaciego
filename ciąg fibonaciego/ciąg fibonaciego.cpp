#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Podaj liczbe n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Podaj liczbe wieksza od 0" << endl;
        return 1;
    }

    int a = 0, b = 1;
    cout << "Ciag Fibonacciego: ";

    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            cout << a << " ";
        }
        else if (i == 1) {
            cout << b << " ";
        }
        else {
            int next = a + b;
            a = b;
            b = next;
            cout << next << " ";
        }
    }
    cout << endl;

    return 0;
}
