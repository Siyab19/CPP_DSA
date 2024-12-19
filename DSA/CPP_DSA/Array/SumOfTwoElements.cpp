//Finding two elements in an array that sum upto a given target
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 7, 11, 15, 27}; 
    int target = 22;               
    int s = 0;                     
    int e = 4;                     

    while (s < e) {
        if ((arr[s] + arr[e]) == target) {
            cout << "Pair found at " << s+1 << " and " << e+1 << endl;
            return 0; 
        } else if ((arr[s] + arr[e]) < target) {
            s++; 
        } else { 
            e--; 
        }
    }
    cout << "No pair found" << endl;
    return 0;
}
