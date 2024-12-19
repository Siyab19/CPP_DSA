#include <iostream>
using namespace std;

int main() {
    int arr[5] = {9,6,4,3};
    int j,k,item;
    j = 4;
    k = 2;
    item = 8;
    while(j>=k)
    {
        arr[j+1] = arr[j];
        j--;
      
    }
    arr[k] = item;  
    
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
        
    }
    return 0;
}