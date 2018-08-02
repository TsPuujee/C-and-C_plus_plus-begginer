#include <stdio.h>
#include <stdlib.h>
int main()
{
          int array[20], i;
          printf("massiw-d hadgalsan 20 hunii jin\n");
          for(i = 0; i < 20; i++)
          {
                  array[i] = (rand() % 50)+50;
                  printf("%d=%d\t",i+1, array[i]);
       }
    return 0;
}

