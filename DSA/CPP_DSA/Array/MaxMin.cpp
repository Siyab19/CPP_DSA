//Finding the maximum and minimum number of an array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {7,6,9,4,2};
    int i;
    int max, min = arr[0];
    for(i=0;i<5;i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
        if(min>arr[i])
        {
            min = arr[i];
        }
    }
    cout<<"max is "<<max<<endl;
    cout<<"min is "<<min<<endl;

    return 0;
}