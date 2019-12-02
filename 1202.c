#include<stdio.h>
int main(void)
{
    int hen, cock, chilken;

    for(cock = 0; cock <= 100; cock++)
      for(hen = 0; hen <= 100; hen++)
        for(chilken = 0; chilken <= 100; chilken++)
          if(hen + cock + chilken == 100 && 5 * cock + 3 * hen + 1.0/3 * chilken == 100)
           printf("cock = %d, hen = %d, chilken = %d\n", cock, hen, chilken);

           return 0;

}