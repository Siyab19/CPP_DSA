//Finding the sub array with the maximum sum using sliding window approach
#include <iostream>
using namespace std;

int main() {
    
int i, max, w = 4, n = 7, current = 0;
int arr[] = {3,8,2,5,7,6,12};
for(int i = 0; i<w; i++)
{
    current = current +arr[i];
}
max = current;;
for(int i =1; i<=n-w; i++)
{
    current = current - arr[i-1] + arr[i+w-1];
    if(current > max)
    {
        max = current;
    }
}
cout<<"Maximum of numbers is max "<<max;
    return 0;
}