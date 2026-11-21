/*
vedantbarne@Vedants-MacBook-Air-2 Assignment_26 % ./myexe
Symbol	Decimal	Hex	Octal
 	0	0	0
 	1	1	1
 	2	2	2
...
 	32	20	40
!	33	21	41
"	34	22	42
...
A	65	41	101
...
a	97	61	141
...
 	254	FE	376
 	255	FF	377
vedantbarne@Vedants-MacBook-Air-2 Assignment_26 %
*/

#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<cctype>

using namespace std ;

void displayASCII(){
    int i = 0 ;

    cout << "Symbol\tDecimal\tHex\tOctal\n" ;

    for(i = 0 ; i <= 255 ; i++){
        if(isprint(i)) cout << (char)i ;
        else cout << " " ;

        cout << "\t" << dec << i
             << "\t" << hex << uppercase << i
             << "\t" << oct << i << "\n" ;
    }
    cout << dec ;
}

int main(){
    displayASCII() ;

    return EXIT_SUCCESS ;
}