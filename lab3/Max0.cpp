#include <iostream>
using namespace std;

int main() {
    int A, B;
    cout << "Input A: ";
    cin >> A;
    cout << "Input B: ";
    cin >> B;

    cout << "A = " << A << " B = " << B << endl;

    int max;
    if(A > B) {
        max = A;
    } else {
        max = B;
    }

    cout << "Max(" << A << ", " << B << ") = " << max << endl;

    return 0;
}
