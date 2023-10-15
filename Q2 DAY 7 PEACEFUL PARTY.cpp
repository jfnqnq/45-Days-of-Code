#include <iostream>
using namespace std;
int main() {
    int num, a, b, c;
    cin >> num; 
    while (num--) {
        cin >> a >> b >> c;
        if (a + c > b) {
            cout << a + c << endl;
        } else {
            cout << b << endl;
        }
    }
    return 0;
}

