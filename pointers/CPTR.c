/**************************************************************************/
/*                      POINTERS AND  CHARACTERS                          */
/**************************************************************************/
#include<stdio.h>        
main()
{
    char *name;
    int lenght;
    char *cptr = name = "ANAS"  ;

    //name = "ANAS";  // Not working when assign name in next statement.

    while (*cptr != '\0')       // \0 = null in string
    {
        printf("%c is stored at the addr %u\n",*cptr,cptr);
        cptr++;
    }
    lenght = cptr - name;
    printf("\nThe lenght of string = %d",lenght);
}