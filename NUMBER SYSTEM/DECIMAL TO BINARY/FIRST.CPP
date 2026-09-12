#include<iostream>
using namespace std;

int main(){

int num;

cout<<"ENTER DECINAM NUMBER : ";
cin>>num;

int rem,ans=0,mul=1;

while(num>0)
{

rem = num % 2;
 
ans = rem * mul + ans;
num /= 2;


mul *= 10;

}

cout<<"BINARY OF GIVEN NUM  IS  "<<ans;







}