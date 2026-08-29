/*
                 col

  row           .  .  .  .  1
                .  .  .  1  2
                .  .  1  2  3
                .  1  2  3  4
                1  2  3  4  5


*/

#include<iostream>
using namespace std;


int main(){

int row , col , n;

cout<<" Input : ";
cin>>n;


for(row = 1; row<= n ; row = row + 1)
{   // space print
    for(col = 1 ; col <= n - row ; col = col + 1 )
    {
        cout<<"  ";
    }
    // number print
    for(col = 1 ; col <= row ; col = col + 1)
    {
        cout<<col<<" ";
    }

    cout<<endl;





}







}