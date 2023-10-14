#include<iostream>
using namespace std;
int main(){
int a[4];
int i;
cout<<"give 5 integer in input"<<endl;
for (i=0;i<5;i++)
{
	cin>>a[i];
}
cout<<"the 5 given input are"<<endl;
for(i=0;i<5;i++)
{
	cout<<a[i]<<" ";
}
	return 0;
}


//concecutive no. in reverse order
#include<iostream>
using namespace std;
int main(){
int a[9];
int i;
cout<<"give 10 integer in input"<<endl;
for (i=0;i<=9;i++)
{
	cin>>a[i];
}
cout<<"the 10 given input are"<<endl;
for(i=9;i>=0;i--)
{
	cout<<a[i]<<" ";
}
	return 0;
}
