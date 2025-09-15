#include<stdio.h>
#include<string.h>


int main(){
    char str[] = " hello im bilal zarrik " ;

    char *strN = strtok(str , " ");
    int j = 0 ;
  while (strN != NULL)
  {
   
  strN = strtok(NULL , " ");
  j++ ;
  }
   printf("le nombre des mots est : %d " , j);
  

    

return 0;
}