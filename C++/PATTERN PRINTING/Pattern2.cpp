/*
                col = 5

     row = 4     10 10 10 10 10
                 10 10 10 10 10
                 10 10 10 10 10
                 10 10 10 10 10



*/


#include<iostream>
using namespace std;

int main(){


int row , col;
//row
for(row = 1; row <= 4 ; row = row + 1)
{
    //column
    for(col = 1; col<=5 ;col = col + 1)
    {
        cout<<"10"<<" ";

    }

    cout<<endl;
}

}