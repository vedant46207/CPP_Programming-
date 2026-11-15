/*
vedantbarne@Vedants-MacBook-Air-2 Assignment_1 % ./myexe
5
4
3
2
1
vedantbarne@Vedants-MacBook-Air-2 Assignment_1 % 
*/

#include<iostream>
#include<cstdlib>

using namespace std ; 
void print ()
{
    int i = 0 ; 
    for(i =5 ;i>=1 ; i-- ){
        cout << i << "\n" ;
    }
}
int main(){

    print (); 
    return EXIT_SUCCESS ; 

}