/*
Enter a number :0
Equal to zero % 

vedantbarne@Vedants-MacBook-Air-2 Assignment_4 % ./myexe
Enter a number :4
Positive number %  

vedantbarne@Vedants-MacBook-Air-2 Assignment_4 % ./myexe
Enter a number :-4
Negative number %  


*/
#include<iostream>
#include<cstdlib>
using namespace std ; 

void print(int iNo){
    if(iNo > 0) cout << "Positive number "; 
    else if (iNo < 0) cout<< "Negative number ";
    else cout << "Equal to zero " ; 
}

int main(){
    int iValue = 0 ; 

    cout << "Enter a number :";
    if(!(cin >> iValue )){
        cout << "Invalid input " ; 
        return EXIT_FAILURE ;

    }
    print (iValue) ;
    return EXIT_SUCCESS ;

}