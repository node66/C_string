#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//перезаписывает строку с префиксом "Hello, "
void hello( char *str);

int main() {

    char* str = strdup("World!");
    hello(str);
    printf("%s\n",str);
    free(str);
    system("pause");
    return 0;
}

void hello( char *str) {
    realloc(str,sizeof(char) * strlen("Hello, World!"));
    char *buff = (char*)malloc( sizeof(char) * strlen("World!"));
    memmove(buff,str,  sizeof(char) * strlen("World!"));
    memmove(str,"Hello, ",  sizeof(char) * strlen("Hello, "));
    strcat(str,buff);
    free(buff);
}