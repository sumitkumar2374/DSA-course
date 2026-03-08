#include <iostream>
using namespace std;

int main() {
    int n = 1000;
    int count = 1;

    while (count<=n) {
        cout << count << " ";
        count++;
        if(count==50) {
            break;
        }
    }
    return 0;
}
