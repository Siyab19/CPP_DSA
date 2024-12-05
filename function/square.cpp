#include <iostream>
using namespace std;

int square(int a)
{
    int sq=a*a;
    return sq;
}
int main() {
    // Write C++ code here
    int n,s;
    cout << "Enter a number"<<endl;
    cin>>n;
    s=square(n);
    cout<<s;

    return 0;
}