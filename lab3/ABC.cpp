#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    cout << "A = " << A << " | B = " << B << " | C = " << C << "\n";

    if (A > B) {
        swap(A, B);
    }
    if (B > C) {
        swap(B, C);
    }
    if (A > B) {
        swap(A, B);
    }

    cout << "A = " << A << " | B = " << B << " | C = " << C << "\n";
}