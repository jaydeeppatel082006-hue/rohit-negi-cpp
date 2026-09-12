#include<iostream>
using namespace std;

int main(){

int num;

cout<<"Enter a binary number : ";
cin>>num;

int rem,ans=0,mul=1;

while(num > 0)
{
    rem = num % 10;

    num /= 10;

    ans =  rem * mul + ans;

    mul *= 2;

}

cout<<"Decimal number is : "<<ans;







}