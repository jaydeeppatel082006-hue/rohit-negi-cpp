/*

             col

 row        .  .  .  1
            .  .  2  2
            .  3  3  3
            4  4  4  4


*/

#include<iostream>
using namespace std;

int main(){

int row,col,n;

cout<<"Enter no of rows : ";
cin>>n;

for(row = 1; row <= n ; row = row + 1)
{    // space print 
    for(col = 1; col <= n - row ; col = col + 1)
    {
        cout<<"  ";

    }
    // number print
    for(col = 1; col <= row ; col = col + 1)
    {
        cout<<row<<" ";

    }

    cout<<endl;

}

}