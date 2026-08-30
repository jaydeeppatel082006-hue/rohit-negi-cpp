/*

                         col


  row          .  .  .  .  1
               .  .  .  1  2  1
               .  .  1  2  3  2  1
               .  1  2  3  4  3  2  1
               1  2  3  4  5  4  3  2  1



*/


#include<iostream>
using namespace std;

int main(){

int row,col,n;

cout<<"Input : ";
cin>>n;

for(row = 1 ; row <= n ; row  = row + 1)
{
    for(col = 1 ; col <= n - row ; col = col + 1 )
    {
        cout<<"  ";
    }

    for(col = 1 ; col <= row ; col = col + 1)
    {
        cout<<col<<" ";
    }


    for(col = row - 1 ; col >= 1 ; col = col - 1)
    {
        cout<<col<<" ";
    }


    cout<<endl;
    









}

















}