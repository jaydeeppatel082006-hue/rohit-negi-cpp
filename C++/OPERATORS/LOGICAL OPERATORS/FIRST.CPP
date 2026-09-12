#include<iostream>
using namespace std;

int main(){
int a,b,c;


cout<<"Enter the value of A : ";
cin>>a;
cout<<"Enter the value of B : ";
cin>>b;
cout<<"Enter the value of c : ";
cin>>c;


//and operator
if(a>b && a>c)
{
    cout<<"True"<<endl;
}
else
{
    cout<<"False"<<endl;

}

//or operator
char name = 'e';

if(name == 'a'||name == 'e'||name == 'i'||name == 'o'|| name == 'u')
{
    cout<<"vowel"<<endl;
}
else
{
    cout<<"Consonent"<<endl;

}


cout<<!2<<endl;


    
}