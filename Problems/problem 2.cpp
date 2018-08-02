#include <cstdio>
#include <cstring>
#include<math.h>
 
using namespace std; 
int main ()
{
    char hoyr [9 + 3];
     
    printf ("2-tyn toololiin systemiin toog oruul: "); scanf ("%s", hoyr);  
    int urt = strlen (hoyr);    
    int decimal = 0;
    for ( int i = 0; i < urt; i++ ) {
        int hoyrDigit = hoyr [i] - '0';
        decimal += (hoyrDigit * pow(2, urt - 1 - i));
    }
    printf ("In decimal: %d\n", decimal);
    return 0;
}
