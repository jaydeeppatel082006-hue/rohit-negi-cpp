/*   
             col

row          5 
             5  4  
             5  4  3 
             5  4  3  2
             5  4  3  2  1

*/


#include<iostream>
using namespace std;


int main(){

int row,col;


for(row = 5 ; row >= 1; row = row - 1)
{
    for(col = 5; col >= row  ; col = col - 1 )
    {
        cout<<col<<" ";
    }
    cout<<endl;






}









}