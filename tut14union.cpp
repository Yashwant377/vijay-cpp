#include<iostream>
using namespace std;
union money
{
    /* data */
     
int uid;
char favchar;
float salary;
};
int main(){
    union money m2 ;
    
     m2.uid = 17;
    cout<<m2.uid;







    return 0;
}