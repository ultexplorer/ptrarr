#include <stdio.h>
#define WORDSIZE 5
#define STRSIZE  3


int main()
{
    char str[][WORDSIZE]={
        "abcd",
        "efgh",
        "ijkl"
    };

    char (*p)[WORDSIZE]=str;
    int i, j;

    for (i=0; i<STRSIZE; ++i)
    {
        for(j=0; j<WORDSIZE; ++j){
            printf("%c", (*p)[j]);
        }
        printf(" ");
        p++;
    }
    printf("\n");
    
    
    return 0;
}