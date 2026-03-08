#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter n" << endl;
    cin >> n;


    int count = 1;
    int evensum = 0;

    while (n>=count) {
        count++;
        if (n%count == 0) {
            evensum += count;
        }
    }
    cout << "evensum = " << evensum << endl;
    return 0;
}