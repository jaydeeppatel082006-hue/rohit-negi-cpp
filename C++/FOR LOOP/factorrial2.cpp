#include<iostream>
using namespace std;

int main(){

double fac = 1, n, i;

cout<<"PRINT FACTORIAL OF : ";
cin>>n;

for(i = 1; i <= n; i = i + 1)
{
    fac = fac * i;

}

cout<<"THE FACTORIAL IS : "<<fac<<endl;


}