/*
Enter number :101
Greater %    

vedantbarne@Vedants-MacBook-Air-2 Assignment_15 % ./myexe
Enter number :99
Not greater %       

vedantbarne@Vedants-MacBook-Air-2 Assignment_15 % ./myexe
Enter number :100
Not greater % 


*/
#include<iostream>
#include<cstdlib>
using namespace std ; 
bool greaterthan100 (int iNo){
    bool ret = false ; 

    if(iNo >100) ret = true ; 
    else ret = false ; 
    return ret ; 
}
int main(){
    int iValue = 0 ;
    bool bRet = false ;
    cout<<"Enter number :" ;
    if(!(cin >> iValue)){
        cerr <<"Invalid input "; 
        return EXIT_FAILURE ;
    }
    bRet = greaterthan100(iValue) ;
    if(bRet == true ) cout << "Greater ";
    else cout <<"Not greater ";

    return EXIT_SUCCESS ;
}