#include <iostream>
using namespace std;

int main() {
    cout << ((3<5) && (5<15));
    cout << (5<16) || (6<14);
    cout << !(5<=5);


    cout << ((5<2) && (7<3));
    cout << (5<2) || (3<8);
    cout << !(4<=7);
    return 0;
}