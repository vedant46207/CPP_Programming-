/*
Enter marks 85
Grade B%

vedantbarne@Vedants-MacBook-Air-2 Assignment_5 % ./myexe
Enter marks 35
Fail%

vedantbarne@Vedants-MacBook-Air-2 Assignment_5 % ./myexe
Enter marks 105
Invalid Marks %
*/

#include<iostream>
#include<cstdlib>

using namespace std ; 

char displayGrade(float fMarks){

    char cRet = '\0' ; 
    if( fMarks >= 90.0f ) cRet = 'A' ; 
    else if( fMarks >= 75.0f ) cRet = 'B' ; 
    else if( fMarks >= 60.0f ) cRet = 'C' ; 
    else if( fMarks >= 40.0f ) cRet = 'D' ; 
    else cRet = 'F' ; 
    return cRet ;
}
int main(){
    float fMarks = 0.0f ; 
    char cRet = '\0' ; 

    cout << "Enter marks " ;
    if(!(cin >> fMarks )) {
        cerr<< "Invalid input " ;
        return EXIT_FAILURE ; 

    }

    if( (fMarks < 0.0f) || (fMarks > 100.0f) ) {
        cerr<< "Invalid Marks " ;
        return EXIT_FAILURE ; 

    }

    cRet = displayGrade(fMarks) ;
    if(cRet == 'F' ) cout << "Fail" ;
    else cout << "Grade " << cRet ;
    

    return EXIT_SUCCESS ; 

}