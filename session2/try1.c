#include <stdio.h>
int main(int argc, char **argv)
{
    char str[] = "Hello World";

    int length = 0;

    while(str[length]!= '\0'){
        length++;
    }

    int i;
    for(i = length - 1; i>=0; i--){
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}