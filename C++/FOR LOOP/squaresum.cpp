#include<iostream>
using namespace std;
// sum of squares of  n natural numbers like 1,2,3,4,5,6,

int main(){

int count,i,n;



cout<<"enter the value of N : ";
cin>>n;




count = 0;


for(i = 1; i<=n ; i = i + 1){

count = count + i * i;


}

cout<<"sum of  N natural numbers is : "<<count<<endl;




}