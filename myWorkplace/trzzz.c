#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
//#include <math.h>

int main () {
   char str[80] = "This lol lol";
   char str2[80];
   const char s[2] = " ";
   char *token;
   char *token2;
   /* get the first token */
   token =strtok(str, s);
 

    printf( "%s\n", str2 );
   
   /* walk through other tokens 
   while( token != NULL ) {
     printf( " %s\n", token );
    
      token2 = strtok(NULL, s);
      printf( " %s\n", token2 );
   }
   */
   return(0);
}
