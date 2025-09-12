#include<stdio.h>
#include<string.h>
 
void y(char* t){
    int i , z = 0;
    char d[7] ={'.' , ',', ';' , '!' ,'?'  ,  ':'};

    for ( i = 0;t[i] != '\0'; i++)
    {
     if(t[i] != d[z])
     d[z] = t[i] ;

   z++ ;
    }

}
int main() {
    char x[100] ;

    printf("veuillez entrer votre text :");
    fgets(x , sizeof(x) , stdin);
    y(x);
    printf("votre text est : %s" , x);
}