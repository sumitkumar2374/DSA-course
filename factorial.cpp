#include <iostream>
using namespace std;

int main() {
    int i,fac =1;
    cout << "enter no to find factorial: ";
    cin >> i;

    while(i>0) {
        fac = fac*i;
        i--;
    }
    cout << "factorial = " << fac << endl;
    return 0;
}