#include<iostream>
using namespace std;

int main(){

int num;

cout<<"ENTER A OCTAL NUMBER : ";
cin>>num;

int rem , ans = 0 , mul = 1;

while(num>0)
{
    rem = num % 10;
    num /= 10;
    ans = rem*mul + ans;
    mul *= 8;
}


cout<<ans;






}