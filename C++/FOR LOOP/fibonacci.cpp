/*

 fibo :  0 1 1 2 3 5 8 12 20 32
 index : 1 2 3 4 5 6 7 8 9 
        last prev curr
*/


#include<iostream>
using namespace std;

int main(){
int n;

cout<<"Enter series from : ";
cin>>n;

int last = 0,prev = 1,current;

if(n == 1)
{
    cout<<last;
    return 0;
}

if(n == 2)
{
    cout<<last<<" "<<prev;
    return 0 ;

}

cout<<last <<" "<<prev;

for(int i=3; i<= n; i = i+1)
{

current = last + prev;
cout<<" "<<current;
last = prev;
prev = current;


}




return 0 ;


}