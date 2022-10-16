#include <stdio.h>

int main() {
    int primero,segundo,maxprimero,maxsegundo;
    float media,max=0;
    printf("Introduce un valor (999 para terminar): ");
    scanf("%d",&primero);
    fflush(stdin);
    if (primero==999)
        return 0;
    printf("Introduce otro valor (999 para terminar): ");
    scanf("%d",&segundo);
    fflush(stdin);
    while (segundo!=999){
        media=((float)(primero+segundo))/2;
        if (media>max){
            max=media;
            maxprimero=primero;
            maxsegundo=segundo;
        }
        primero=segundo;
        printf("Introduce otro valor: ");
        scanf("%d",&segundo);
        fflush(stdin);
    }
    if (max!=0){
        printf("El valor maximo de las medias correspondientes a parejas de valores sucesivos es de: %.2f",max);
        printf("\n(Pareja: %d y %d)",maxprimero,maxsegundo);
    } else
        printf("Solo se ha introducido un valor");
    return 0;
}
