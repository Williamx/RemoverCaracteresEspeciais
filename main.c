#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <locale.h>
void removeCaracteresEspeciais(char str[50]){

  int s = 0;
  int d = 0;

  while (str[s] != '\0') {
    if (isalpha(str[s])) {
      str[d] = str[s];
      ++d;
    }
    ++s;
  }
  str[d] = '\0';

}
void naoRemoveOEspaco(char *valor, char str2[50],const char *remover, const char *substituir) {
   int i = 0, cnt = 0;
   int len1 = strlen(substituir);
   int len2 = strlen(remover);

   char novovalor[50] = {};
   i = 0;
   while (*valor) {
      if (strstr(valor, remover) == valor) {
         strcpy(&novovalor[i], substituir);
         i += len1;
         valor += len2;
      }
      else
      novovalor[i++] = *valor++;
   }
   strcpy(str2,novovalor);
   removeCaracteresEspeciais(str2);
}
void removeExtras(char *valor2, char str3[50],const char *remover2, const char *substituir2) {
   int i = 0, cnt = 0;
   int len1 = strlen(substituir2);
   int len2 = strlen(remover2);

   char novovalor2[50] = {};
   i = 0;
   while (*valor2) {
      if (strstr(valor2, remover2) == valor2) {
         strcpy(&novovalor2[i], substituir2);
         i += len1;
         valor2 += len2;
      }
      else
      novovalor2[i++] = *valor2++;
   }
   strcpy(str3,novovalor2);

}
int main()
{
     char nome1[50];
     char nome2[50];
     char nome3[50];

          
              setlocale(LC_ALL, "Portuguese");
 	            naoRemoveOEspaco(nome1,nome2," ","xqz");
	            removeExtras(nome2,nome3,"xqz"," ");
 
 }
