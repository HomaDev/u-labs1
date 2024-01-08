#include <iostream>

using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    cout << "A = " << A << " | B = " << B << " | C = " << C << " | D = " << D << "\n";

    if (A > B) swap(A, B);
    if (A > C) swap(A, C);
    if (A > D) swap(A, D);
    if (B > C) swap(B, C);
    if (B > D) swap(B, D);
    if (C > D) swap(C, D);

    cout << "A = " << A << " | B = " << B << " | C = " << C << " | D = " << D << "\n";
    return 0;
}