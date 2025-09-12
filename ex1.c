#include<stdio.h>
#include<string.h>
#include<ctype.h>

void M( char t[50]){
    int i = 0;
    for ( i = 0; t[i] != '\0' ; i++)
    {
      t[i] = tolower(t[i]);
    }
}

int main(){
    char x[50] =  "Bonjour Le Monde" ;
M(x);
printf("les caracteres en min :%s " , x);

return 0 ;
}