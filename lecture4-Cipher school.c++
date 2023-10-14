#include<iostream>
using namespace std;

//if else statement
// int main(){
// float a,b;0
// cout << "take two floating no as input"<<endl;
// cin >>a>>b;
// if(a>0.01&&b>a)
// {
// cout<<"the condition is correct";
// }
// else
// {
// cout <<"the condition is incorrect";
// }
// return 0;
// }

//switch statement
int main(){
int a;
cin >>a;
switch(a)
{
case 1:
cout<<"the value of a is 1";
break; //used to break the statement so that other statement do not run
case 2:
cout<<"the value of a is 2";
break;
default:
cout<<"default will be always printed";
}
return 0; 
}

