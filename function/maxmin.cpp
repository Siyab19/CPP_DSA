// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int greater1(int a, int b)
{
    if(a>b)
    {
        cout<<a<<" is greater and "<<b<<" is smaller";
    }
    else
    {
        cout<<b<<" is greater and "<<a<<" is smaller";
    }
    return 0;
}
int main() {
    // Write C++ code here
    int num1, num2,great;
    cout << "Enter a number"<<endl;
    cin>>num1;
    cout << "Enter a number"<<endl;
    cin>>num2;
    great=greater1(num1,num2);
    return 0;

}