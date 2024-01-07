#include <iostream>
using namespace std;

int main() {
    int X;
    int absX;
    cout << "Enter a number: ";
    cin >> X;
    
    if (X < 0) {
        absX = -X;
    } else {
        absX = X;
    }
    
    cout << "| " << absX << " |" << X << endl;
    return 0;
}
