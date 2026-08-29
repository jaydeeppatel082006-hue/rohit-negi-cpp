/*
                 col

   row          .  .  .  .  1
                .  .  .  2  1
                .  .  3  2  1
                .  4  3  2  1
                5  4  3  2  1


*/

#include<iostream>
using namespace std;


int main(){


int row ,col,n;


cout<<"Input  : ";
cin>>n;

for(row = 1 ; row <= n; row = row + 1 )
{
    for(col =1 ; col <= n - row ; col = col + 1)
    {
        cout<<"  ";

    }

    for(col = row; col >= 1 ; col = col - 1)
    {
        cout<<col<<" ";
    }
    cout<<endl;











}











}