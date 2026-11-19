/*
Enter number of rows :4
Enter number of columns :4
*	*	*	*	
*	*	*	
*	*	
*		
*/
#include<iostream>
#include<cstdlib>

using namespace std ; 

void print(int iRow,int iCol){
    int i = 0 ; 
    int j = 0 ; 
    for(i=1 ; i<= iRow ;i++){
        for(j=iCol; j>=i; j--){
            cout<<"*\t";
        }
        cout<<"\n";
    }
}
int main(){
    int iValue1 = 0 ;
    int iValue2 = 0 ;

    cout << "Enter number of rows :"; 
    if(!(cin >> iValue1)){
        cerr<<"Invalid input";
        return EXIT_FAILURE ;
    }
    cout << "Enter number of columns :"; 
    if(!(cin >> iValue2)){
        cerr<<"Invalid input";
        return EXIT_FAILURE ;
    }
    print (iValue1, iValue2); 

    return EXIT_SUCCESS ;
}