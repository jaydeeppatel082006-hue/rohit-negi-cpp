/*      

                COL
                                   
  ROW             .  .  .  .  A
                  .  .  .  A  B
                  .  .  A  B  C 
                  .  A  B  C  D
                  A  B  C  D  E


*/


#include<iostream>
using namespace std;


int main(){


int row , col , n;

cout<<"Input : ";
cin>>n;


for(row = 1 ; row <= n ; row = row + 1)
{
    for(col = 1; col <= n - row ; col = col + 1)
    {
        cout<<"  ";
    }

    for(char name = 'A'; name <= 'A' + row - 1 ; name = name + 1)
    {
        cout<<name<<" ";

    }
    cout<<endl;
}

}