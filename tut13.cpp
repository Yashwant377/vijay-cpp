#include<iostream>
using namespace std;
int main(){
 int mathsmarks[4];    
int marks[] = {23, 17 , 16 , 10};
//cout<<marks[0]<<endl;
//cout<<marks[1]<<endl;
//cout<<marks[2]<<endl;
//cout<<marks[3]<<endl;
//cout<<marks[4]<<endl;

//mathsmarks[0] = 17 ;
//mathsmarks[1] = 61 ;
//mathsmarks[2] = 16 ;
//mathsmarks[3] = 20 ;
//mathsmarks[4] = 18 ;


//cout<<mathsmarks[1]<<endl;
//cout<<mathsmarks[2]<<endl;
//marks[2] = 7706;
//cout<<mathsmarks[4]<<endl;



// Pointer and arrays...


int* p = marks;

cout<<"the value of marks *p is "<<p<<endl;
cout<<"the value of marks *(p+1) is "<<(p+1)<<endl;
cout<<"the value of marks *(p+2) is "<<(p+2)<<endl;
cout<<"the value of marks *(p+3) is "<<(p+3)<<endl;

 




    return 0;
}