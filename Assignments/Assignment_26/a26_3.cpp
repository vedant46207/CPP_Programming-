/*
vedantbarne@Vedants-MacBook-Air-2 Assignment_26 % ./myexe
Enter the character : Q
Q	R	S	T	U	V	W	X	Y	Z	
vedantbarne@Vedants-MacBook-Air-2 Assignment_26 % ./myexe
Enter the character : m
m	l	k	j	i	h	g	f	e	d	c	b	a	
vedantbarne@Vedants-MacBook-Air-2 Assignment_26 % ./myexe
Enter the character : 8
vedantbarne@Vedants-MacBook-Air-2 Assignment_26 %
*/

#include<iostream>
#include<cstdlib>
#include<string>

using namespace std ;

void displayRange(char cValue){
    char cCh = '\0' ;

    if(cValue >= 'A' && cValue <= 'Z'){
        for(cCh = cValue ; cCh <= 'Z' ; cCh++){
            cout << cCh << "\t" ;
        }
    }
    else if(cValue >= 'a' && cValue <= 'z'){
        for(cCh = cValue ; cCh >= 'a' ; cCh--){
            cout << cCh << "\t" ;
        }
    }
    else return ;

    cout << "\n" ;
}

int main(){
    string sInput = "" ;
    char cValue = '\0' ;

    cout << "Enter the character : " ;
    getline(cin, sInput) ;

    if(sInput.length() != 1){
        cerr << "Invalid input\n" ;
        return EXIT_FAILURE ;
    }
    cValue = sInput[0] ;

    displayRange(cValue) ;

    return EXIT_SUCCESS ;
}