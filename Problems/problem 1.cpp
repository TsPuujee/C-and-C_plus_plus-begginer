#include <stdio.h>
using namespace std;
int main ()
{
    int a[5],haih,t=0;
      for ( int i = 0; i < 5; i++ ) 
	  {
          printf ("a[%d]: ", i);
          scanf ("%d", &a[i]);
      }
    printf ("Haih toogoo oruul: ");  scanf ("%d", &haih);
    for ( int i = 0; i < 5; i++ ) {
        if (a[i] == haih) {
            t=1;
            break;
        }
    }
     
    if (t==1)
        printf ("Tany haisan %d-n deerhi 5-n toond baina.\n", haih);
    else
        printf("Tany haisan %d-n too deerhi 5-n toond baihgui.\n", haih);
 
    return 0;
}
