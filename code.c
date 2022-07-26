#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void findCode(){
    int tab[4]={492,522,312,456};
   int i=0,j=0 ,code;
   printf("saisir votre code secret: \n");
   scanf("%d", &code);

   while (j< 3)
   {
        for(i=3;i>=0;i--){
            if(tab[i]==code){
                    printf("le code saisi est correct");
                    return ;
            }
       }
        printf("voici le jjj %d \n", j);

      if(j==0)
      { 
        printf("code incorrect veuillez resaisir");
        scanf("%d", &code);
      }
      else if(j==1)
      { 
        printf("code incorrect il vous reste qu'une seule tentative");
        scanf("%d", &code);
      }
      else
      {
        printf("code bloqué");
        return ;
      }
        j++;

   }
}


int main() 
{
   
    char buffer[80];
    int tab[4]={492,522,312,456};
    int i=0,j=0 ,code;
    printf( "Entrer votre code svp: \n" );
    scanf( "%s[^\n]", buffer );

  
    bool isCorrect = true;

    while (j< 3)
   {
     bool isCorrect = true;
        size_t length = strlen( buffer );
        for( int i=0; i<length; i++ ) {
            if ( ! isdigit( buffer[i] ) ) {
                isCorrect = false;
            }
        }

        if ( isCorrect ){
            code = atoi(buffer);
            for(i=3;i>=0;i--){
                if(tab[i]==code){
                        printf("le code saisi est correct: \n");
                        return 0;
                }
            }

            if(j==0){ 
                    printf("code incorrect veuillez resaisir: \n");
                    scanf("%s", buffer);
            }else if(j==1){ 
                    printf("code incorrect il vous reste qu'une seule tentative: \n");
                    scanf("%s", buffer);
            }else{
                    printf("code bloqué");
                    return 0 ;
            }

        } else {

                if(j==0)
                { 
                    printf("code saisi incorrect...\n");
                    printf("Veiilez saisir un entier: \n");
                    scanf("%s", buffer);
                }
                else if(j==1)
                { 
                    printf("Veiilez saisir un entier: \n");
                    printf("code incorrect il vous reste qu'une seule tentative \n");
                    scanf("%s", buffer);
                }
                else
                {
                    printf("fin des tentatives");
                    return 0 ;
                }

            }
    j++;
   }



   
    return 0;

}
