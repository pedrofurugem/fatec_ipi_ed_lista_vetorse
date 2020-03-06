#include <stdio.h>
#include <stdio.h>
#include <conio.h>

//Escreva uma funÃ§Ã£o que recebe um caractere como parÃ¢metro e decide se se trata de
//uma vogal.
char letra(char c){
   
    if(c == 'a' || c == 'A' || c == 'e' || c == 'E' ||
       c == 'i' || c == 'I' || c == 'o' || c == 'O' ||
       c == 'u' || c == 'U')
       return 1;
    else
        return 0;
}

int main {

    char c;
Â Â Â 
Â Â Â  printf("Informe o caractere: ");
Â Â Â  scanf("%s",&c );
Â Â Â 
Â Â Â  if(letra(c)){
Â Â Â Â Â Â Â  printf("vogal \n");
}
Â Â Â  else{
       printf("NÃ£o eh uma vogal \n");
}
Â Â Â 
Â Â Â  return 0;
}