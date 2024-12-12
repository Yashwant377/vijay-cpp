#include<iostream>
using namespace std;
int main(){
    int a=3;
    int*b = &a;

    //what is pointer ? ------> date type which hold the address of other data types.

    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of a is "<<b<<endl;

    //*-----> (vlue at ) dereference operater.

    cout<<"the value at address b is "<<*b<<endl;

    // ponter to pointer

    int ** c = &b;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the address of b is  "<<c<<endl;
    cout<<"the value at address c is  "<<*c<<endl;     


return 0;

}