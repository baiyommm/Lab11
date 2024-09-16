#include <iostream>
using namespace std;

int main() {
    
    int value1, value2;
    int largerValue;
    
    cout << "Please enter the first number: " << endl;
    cin >> value1;
    
    cout << "Please enter the second number: " << endl;
    cin >> value2;
    
    if (value1 < value2) {
        largerValue = value2;
    } 
    else {
        largerValue = value1;
    }

    cout << "The larger value that was stored is: " << largerValue << endl;
    
    return 0;
}
