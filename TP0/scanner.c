#include "scanner.h"

int get_token( char* palabraEntera )
{
    memset( palabraEntera, 0, sizeof( palabraEntera )) ;

    int cont = 0 ;

    char caract = getchar() ;

    if (caract == ',')
    {
        return SEP;
    }
    if( caract == EOF )
    { 
        return FDT ;
    }
    if( isspace( caract ) == 0 )
    {
        while( ( isspace(caract) == 0 ) && ( caract != ',' )  && ( caract != EOF ) )
        {
            palabraEntera[cont] = caract ;
            cont += 1 ;
            caract = getchar() ;
        }
        ungetc(caract, stdin) ;
        return CAD ; 
    }

    return -1 ;
}


