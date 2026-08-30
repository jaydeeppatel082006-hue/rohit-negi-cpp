/*
  col

row       *  *  *  *  *  *  *  *  *
          .  *  *  *  *  *  *  *  .
          .  .  *  *  *  *  *  .  .
          .  .  .  *  *  *  .  .  .
          .  .  .  .  *  .  .  .  .


*/

#include<iostream>
using namespace std;

int main(){


int row,col,n;

cout<<" Input : ";
cin>>n;

for(row = 5 ; row >= 1 ; row = row -1 )
{  //space
    for(col = 1 ; col <= n - row ; col = col + 1)
    {
        cout<<"  ";
    }
   // star
    for(col = 1 ; col <= 2*row - 1 ; col = col + 1)
    {
        cout<<"*"<<" ";
    }
    cout<<endl;








}






}