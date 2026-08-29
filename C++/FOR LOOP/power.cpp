#include<iostream>
using namespace std;

int main(){

int n,pow,num,i;

cout<<"ENTER THE NUMBER : ";
cin>>n ;

cout<<"ENTER POWER : ";
cin>>pow;

num = n;

for( i = 1; i < pow ; i=i+1)
{
    num = num * n;          // 1.  num = 5*5 = 25
                             // 2. num = 25 * 5 = 125
                             // 3. num = 125 * 5 = 625
}

cout<<num;


}