#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter n" << endl;
    cin >> n;


    int i = 1;
    int sum = 0;
    while (i<=n) {
        i++;
        sum+=i;
    }




    cout << "sum = " << sum << endl;
    return 0;
}






