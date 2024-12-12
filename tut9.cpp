#include<iostream>
using namespace std;
int main(){

int age;
cout<<"tell me your age"<<endl;
cin>>age;
//if(age<18){
//cout<<"you can not come  to the party"<<endl;
//}
//else if (age==18){
//    cout<<"you are a kid and you will get a kid to the party "<<endl;
//}
//else if (age<1){
//    cout<<"you are not yet born"<<endl;
//}
//else{
//    cout<<"you can come to thee party"<<endl;
//}

switch (age)
{
case 17:
    cout<<"you are 17"<<endl;
    break;
    case 16:
    cout<<"you are 16"<<endl;
    break;

default:
cout<<"no special case"<<endl;
    break;
}
cout<<"done with switch case";
    return 0;
}
