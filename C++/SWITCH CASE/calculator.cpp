#include<iostream>
using namespace std;

int main(){

char i;
int a,b;

cout<<"ENTER NUM 1 : ";
cin>>a;

cout<<"OPERATOR :  +  , -  , * , /  , %   : ";
cin>>i;



cout<<"ENTER NUM 2 : ";
cin>>b;






 
switch(i)
{

    case  '+':
    cout<<a<<" + "<<b<<" = "<< a+b <<endl;
    break;


    case  '-':
    cout<<a<<" - "<<b<<" = "<< a-b <<endl;
    break;


    case  '*':
    cout<<a<<" x "<<b<<" = "<< a*b <<endl;
    break;


    case  '/':
    cout<<a<<" / "<<b<<" = "<< a/b <<endl;
    break;


    case  '%':
    cout<<a<<" % "<<b<<" = "<< a%b <<endl;
    break;


    default:
    cout<<"WRONG INPUT"<<endl;
    cout<<"TRY AGAIN.......";

    
    
    








}









}