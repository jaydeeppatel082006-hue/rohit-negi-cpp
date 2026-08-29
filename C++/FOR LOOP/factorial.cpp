#include<iostream>
using namespace std;

int main(){

// we did not use int because int store only 4 byte (32 bit) and dou
//double store 8 byte (64 bit)
double fac,i;

cout<<"PRINT FACTORIAL OF : ";
cin>>fac;


for(i = fac - 1  ; i >= 1 ; i = i - 1)
{
     fac = fac * i;
}

cout<<"FACTORIAL : "<<fac<<endl;







}