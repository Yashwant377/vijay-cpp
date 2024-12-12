#include<iostream>
using namespace std;

struct employeee
{
    /* data */
    int uid;
    char favchar;
    float salary;
};

int main (){

  struct employeee vijay;
  vijay.uid = 17;
  vijay.favchar = 'v';
  vijay.salary = 1000000;


cout<<vijay.salary<<endl;
cout<<vijay.uid<<endl;
cout<<vijay.favchar<<endl;

return 0;
} 
    






     


