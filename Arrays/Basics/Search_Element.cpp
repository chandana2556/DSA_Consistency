#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 20, 30, 4, 5};
    int target = 30;
    bool found = false;

    for(int i = 0; i < 5; i++) {
        if(arr[i] == target) {
            cout << "Element found at index: " << i << endl;
            found = true;
            break; // stop after finding
        }
    }

    if(!found) {
        cout << "Element Not Found" << endl;
    }

    return 0;
}
