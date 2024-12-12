#include<iostream>
#include<iomanip>
using namespace std;
int main (){
 int a = 12, b = 17, c = 61;
 cout<<"the value  of a " <<a<<endl;
cout<<"the value  of b " <<a<<endl;
cout<<"the value  of c " <<c<<endl;


cout<<"the value of a "<<setw (10) <<a<<endl ;  
cout<<"the value of b "<<setw (5)<<b<<endl ;
cout<<"the value of c "<<setw (1)<<c<<endl;
}