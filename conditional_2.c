#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if(tk >= 100) {
        printf("Gril khabo");
    } else if (tk >= 70){
        printf("Bargur khabo");
    } else if(tk >= 40){
        printf("Ice-criem khabo");
    } else{
        printf("kiso ai khabo na");
    }
    return 0;
}