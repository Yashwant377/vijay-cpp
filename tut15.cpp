#include<iostream>
using namespace std;

//int sum (int ,int);
//void g(void);
//int main(){
//    int num1,num2;
//    cout<<"enter the first number"<<endl;
//    cin>>num1;
//    cout<<"enter the second number"<<endl;
//    cin>>num2;
//    // num1 and num 2 are actual parameters
//    cout<<"the sum of 2 number is "<<sum(num1,num2);
//    g();
//    return 0;}
//int sum(int a, int b){
//    // formal parameter a and b will be taking values from actual parameters num1 and num2
//    int c = a+b;
//    return c;
//}
//void g (){ 
//    cout <<"\nVIJAY , JAI SHREE RAM";
//}

void swapPointer(int *a, int *b){
int temp = *a;
*a = *b;
*b = temp;
}

int main (){
int a =  4, b  = 5;
cout<<"the value of a is "<<a<<"and the value of b is "<<a<<endl;
swapPointer(&a, &b);
cout<<"the value of a is "<<a<<"and the value of b is "<<a<<endl;
return 0;

}