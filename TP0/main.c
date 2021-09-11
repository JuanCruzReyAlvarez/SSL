#include "scanner.h"
// hice que get_token,deje de ser un  simple clasificador de caracteres como usted dijo profe , y que obtenga
//el token completo y asi solo debería informar lo que logró get_token.

int main()     
             
{            
    char palabraEntera[ 100 ] ;
    int token ;
  
    token = get_token( palabraEntera ) ;
    
    while( token != FDT )
    {
        if( token == CAD )
        {
           printf("Cadena: %s\n", palabraEntera) ;
        }
        if( token == SEP )
        {
            printf("Separador: , \n") ;
        }
        token = get_token( palabraEntera ) ;
    }

    printf( "Fin Del Texto: \n" ) ;

    return 0 ;
}
