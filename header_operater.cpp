#include<iostream>
using namespace std;
int main(){
int a = 1, b=3;
int d = 3, e = 4;
char c = 'c';

cout<<"the value of a + b is: "<<a;
cout<<"the value of a - b is "<<a - b<<endl;
cout<<"the value of a + b is "<<a + b<<endl;
cout<<"the value of a / b is "<<a / b<<endl;
cout<<"the value of a * b is "<<a * b<<endl;
cout<<"the value of a -+ b is "<<a -+ b<<endl;
cout<<"the value of a +- b is "<<a +- b<<endl;
cout<<"the value of a --  is "<<a -- <<endl;
cout<<"the value of a ++ is "<<a ++ <<endl;

cout<<"the value of d == e "<< (d == e)<<endl;
cout<<"the value of d != e "<< (d != e)<<endl;
cout<<"the value of d <= e "<< (d <= e)<<endl;
cout<<"the value of d >= e "<< (d >= e)<<endl;
cout<<"the value of d *= e "<< (d *= e)<<endl;

return 0;

}