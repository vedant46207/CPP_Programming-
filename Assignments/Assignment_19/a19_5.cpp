
#include<iostream>
#include<cstdlib>

using namespace std ; 

void print(int iRow,int iCol){
    int i = 0 ; 
    int j = 0 ; 
    int iCount = 1 ;
    for(i=1 ; i<= iRow ;i++){
        iCount = i ; 
        for(j=0; j<= i-1; j++){
            if(i>1)
            cout << " \t";
        }
        for(j=iCol;j >= i ; j--){
            cout<<iCount<<"\t";
            iCount ++ ; 
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