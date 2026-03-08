#include <iostream> 
using namespace std;

int main() {
    int n = 10;      
    int count = 1;
    int oddsum = 0;


    while( count<= n) { // loop 
        count++;
        if( count%2 != 0) { // condition for odd
            oddsum += count; //odd number add
        }
    }

    cout << "oddsum = " << oddsum << endl;
    return 0; 
}
