
#include <iostream>
using namespace std;

int main() {
   int a[2][2], b[2][2];
   cout<<"Enter the elements of an array1"<<endl;
   for(int i=0; i<2; i++)
   {
       for(int j=0; j<2; j++)
       {
           cin>>a[i][j];
       }
   }
   cout<<"Enter the elements of an array2"<<endl;
   for(int i=0; i<2; i++)
   {
       for(int j =0;j<2; j++)
       {
           cin>>b[i][j];
       }
   }
   for(int i=0; i<2; i++)
   {
       for(int j=0; j<2; j++)
       {
           a[i][j] = a[i][j]+b[i][j];
           cout<<a[i][j];
           cout<<" ";
       }
       cout<<endl;
   }

   

    return 0;
}