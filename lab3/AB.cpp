#include <iostream>

using namespace std;

int main() {
    int A;
    int B;
    cin >> A;
    cin >> B;
    cout << "A = " << A << " | B = " << B << "\n";
    if (A > B) {
        int i = A;
        A = B;
        B = i;
    }

    cout << "A = " << A << " | B = " << B << "\n";
}