#include<iostream>
using namespace std;

int main(){

int n;

cout<<"ENTER A NUMBER : ";
cin>>n;

if( n < 2)
{
    cout<<"NOT A PRIME NUMBER";
    return 0;
}
else
{

for(int i = 2; i < n; i = i+1)
{
    if( n % i == 0)
    {
        cout<<" NOT A PRIME NUMBER ";
        return 0;
    }
}

cout<<n<<" IS A PRIME NUMBER";

return 0;

}

return 0;
}