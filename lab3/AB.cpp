#include <iostream>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    cout << "A = " << A << " | B = " << B << "\n";
    if (A > B) {
        swap(A, B);
    }

    cout << "A = " << A << " | B = " << B << "\n";
}