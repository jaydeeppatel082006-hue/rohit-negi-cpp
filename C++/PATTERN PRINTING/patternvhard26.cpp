/*

                      col


  row       4    *  *  *  *  *  *  *  *
            3    *  *  *        *  *  *
part 1      2    *  *              *  *
            1    *                    *
            1    *                    * 
part 2      2    *  *              *  *
            3    *  *  *        *  *  *
            4    *  *  *  *  *  *  *  *

*/


#include<iostream>
using namespace std;


int main(){

int row,col,n;

cout<<"INPUT : ";
cin>>n;

//part 1
for(row = n ; row >= 1 ; row = row - 1)
{
    //star print 
    for(col = 1 ; col <= row ; col = col + 1)
    {
        cout<<"*"<<" ";
    }

    //space print
    for( col = 1 ; col <= 2*n - 2*row ; col = col + 1)
    {
        cout<<"  ";

    }

    //star print
    for(col = 1 ; col <= row ; col = col + 1)
    {
        cout<<"*"<<" ";
    }
    cout<<endl;



}


//part 2

for(row = 1 ; row <= n ; row = row + 1)
{

    //star print 
    for(col = 1; col <= row ; col = col + 1)
    {
        cout<<"*"<<" ";

    }

    //space print
    for(col = 1 ; col <= 2*n - 2*row ; col = col + 1)
    {
        cout<<"  ";

    }

    //star print

    for(col = 1 ; col <= row ; col = col + 1)
    {
        cout<<"*"<<" ";

    }
    cout<<endl;



}




























}










































