#include<iostream>
using namespace std;
int main()
{
    int age,i;
    cout<<"if you are citizen of India press 1 else press 2";
    cin>>i;
    cout<<"entre age"<<endl;
    cin>>age;
    if(age>=18 && i==1){
    cout<<"eligible for vote"<<endl;
    }
    else{
    cout<<"not eligible"<<endl;
    }
    return 0;
}