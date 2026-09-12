/*                                 





part 1
                                      
1                                    *
2                                  *   *
3                                *   *   *
4                              *   *   *   *
4                              *   *   *   *
3                                *   *   *
2                                  *   *   
1                                    *


part 2

*/


#include<iostream>
using namespace std;


int main(){

int row , col , n;

cout<<"Input : ";
cin>>n;

// part 1

for(row = 1 ; row <= n ; row = row + 1)
{
    //space

    for(col = 1 ; col <= n - row ; col = col + 1)
    {
        cout<<" ";
    }

    //star

    for(col = 1 ; col <= row ; col = col + 1)
    {
        cout<<"*"<<" ";
    }

    cout<<endl;







}


// part 2

for(row = n ; row >= 1 ; row = row - 1)
{
    //space

    for(col = 1 ; col <= n - row ; col = col + 1)
    {
        cout<<" ";
    }

    //star

    for(col = 1 ; col <= row ; col = col + 1)
    {
        cout<<"*"<<" ";
    }

    cout<<endl;







}


}