/*
Enter number of rows :4
Enter number of columns :4
4	4	4	4	
3	3	3	3	
2	2	2	2	
1	1	1	1	
*/
#include<iostream>
#include<cstdlib>

using namespace std ; 
void print (int iRow, int iCol){
    int i =0 ; 
    int j = 0 ;
    for(i = iRow ; i >= 1; i--){
        for(j = 1; j<= iCol; j++){
            cout << i << "\t"; 
        }
        cout << "\n"; 
    }
}
int main(){
    int iValue1 = 0 ;
    int iValue2 = 0 ;

    cout <<"Enter number of rows :"  ;
    if(!(cin >> iValue1)){
        cerr << "Invalid input" ;
        return EXIT_FAILURE ; 
    }
    cout <<"Enter number of columns :"  ;
    if(!(cin >> iValue2)){
        cerr << "Invalid input" ;
        return EXIT_FAILURE ; 
    }

    print(iValue1, iValue2); 
    return EXIT_SUCCESS ;
}