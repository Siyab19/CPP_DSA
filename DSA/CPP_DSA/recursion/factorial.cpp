#include <iostream>
using namespace std;


int sum(int n)
{
    if(n==0)
    {
        return 1;
    }
    else{
        return n* sum(n-1);
    }
}
int main() {
    // Write C++ code here
    int num,s;
    cout<<"Enter a number: ";
    cin>>num;
    s = sum(num);
    cout<<s;
}