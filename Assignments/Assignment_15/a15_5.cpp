#include<iostream>
#include<cstdlib>

using namespace std ; 
double percentage (int iNo1, int iNo2){
    double p = 0.0 ; 
    p = ((double)iNo1 / (double)iNo2) * 100 ; 
    return p ; 
}
int main(){
    int iValue1 = 0 ;
    int iValue2 = 0 ;
    double iRet = 0 ;

    cout <<"Enter obtained marks :" ;
    if(!(cin >> iValue1)){
        cout << "Invalid input " ;
        return EXIT_FAILURE ;
    }
    cout <<"Enter total marks :" ;
    if(!(cin >> iValue1)){
        cout << "Invalid input " ;
        return EXIT_FAILURE ;
    }

    iRet = percentage (iValue1 , iValue2) ; 
    cout << iRet <<"\n" ;

    
    return EXIT_SUCCESS ;
}