#include<iostream>
using namespace std;


int main(){


int num ;

cout<<"ENTER DECIMAL NUMMBER : ";
cin>>num;

int rem , ans = 0 , mul = 1;


while(num > 0)
{
    rem = num % 8;

    num /= 8;

    ans = rem * mul + ans;

    mul = mul * 10;

}

cout<<ans;












}