/*
Enter number of rows :4
Enter number of columns :4
2	4	6	8	
1	3	5	7	
2	4	6	8	
1	3	5	7		
*/
#include<iostream>
#include<cstdlib>

using namespace std ; 
void print(int iRow , int iCol) {
    int i = 0 ; 
    int j = 0 ;
    int iCount = 1 ; 
    for(i=1 ; i<= iRow ; i++){
        if(i%2 ==0){
            iCount = 1 ;
        }else iCount =2 ; 
        for(j = 1 ; j<= iCol; j++){

            cout <<iCount <<"\t"; 
            iCount +=2  ;  
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