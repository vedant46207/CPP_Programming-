/*
Enter number of rows :3
Enter number of columns :5
5	4	3	2	1	
5	4	3	2	1	
5	4	3	2	1	
*/
#include<iostream>
#include<cstdlib>

using namespace std ;

void print(int iRow , int iCol){
    int i =0 ;
    int j = 0 ;
    for(i =1 ; i<= iRow; i++){
        for(j=iCol ; j >=1; j--){
            cout<<j<<"\t";
        }
        cout<<"\n";
    }
}
int main(){
    int iValue1 = 0 ;
    int iValue2 = 0 ; 
    
    cout <<"Enter number of rows :" ;
    if(!(cin >> iValue1)){
        cerr <<"Invalid input";
        return EXIT_FAILURE ;
    }
    cout <<"Enter number of columns :" ;
    if(!(cin >> iValue2)){
        cerr <<"Invalid input";
        return EXIT_FAILURE ;
    }
    print(iValue1, iValue2) ;
    return EXIT_SUCCESS ;
}