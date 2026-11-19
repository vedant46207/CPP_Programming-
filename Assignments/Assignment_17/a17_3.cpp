/*
Enter number of rows :4
Enter number of columns :5
a	b	c	d	e	
1	2	3	4	5	
a	b	c	d	e	
1	2	3	4	5		
*/
#include<iostream>
#include<cstdlib>

using namespace std ; 
void print(int iRow , int iCol) {
    int i = 0 ; 
    int j = 0 ;
    char ch = '\0';
    for(i=1 ; i<= iRow ; i++){
         ch = 'a' ;
        for(j = 1 ; j<= iCol; j++){
            if(i%2 != 0) cout << ch << "\t";
            else cout << j << "\t";
            ch ++ ;

        }
        cout <<"\n";
    }
}
int main(){
    int iValue1 = 0 ;
    int iValue2 = 0 ;

    cout << "Enter number of rows :" ;
    if(!(cin >> iValue1)){
        cerr <<"invalid input" ;
        return EXIT_FAILURE ;
    }
    cout << "Enter number of columns :" ;
    if(!(cin >> iValue2)){
        cerr <<"invalid input" ;
        return EXIT_FAILURE ;
    }
    print(iValue1 , iValue2 ) ;
    return EXIT_SUCCESS ;
}