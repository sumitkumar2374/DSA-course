#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "enter marks: ";
    cin >> marks;


    if (marks>=90) {
        cout << "A" << endl;
    } else if (marks>= 80 && marks<90) {
        cout << "B" << endl;
    } else if (marks<80) {
            cout << "c" << endl;
        }
        return 0 ;
    }