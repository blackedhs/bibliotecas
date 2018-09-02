#include <stdio_ext.h>
#include <stdlib.h>
#include<time.h>

int utn_verificarNumeroEntero(int *pEntero,char* texto,char* textoError){
    int aux;
    printf(texto);
    while(scanf("%d",&aux)==0){
        __fpurge(stdin);
        printf(textoError);
        }
    *pEntero=aux;
    return 0;
}

int utn_verificarNumeroFloat(float *pFloat,char* texto,char* textoError){
    float aux;
    printf(texto);
    while(scanf("%f",&aux)==0){
        __fpurge(stdin);
        printf(textoError);
        }
    *pFloat=aux;
    return 0;
}

int utn_verificarNumeroChar(char *pChar,char* texto,char* textoError){
    char aux;
    printf(texto);
    while(scanf("%c",&aux)==0){
        __fpurge(stdin);
        printf(textoError);
        }
    *pChar=aux;
    return 0;
}
int utn_cargaNumeroAleatoriosEnArrays(int* pArray[],int len,int min, int max){
    int i;
    len=len-1;
    srand(time(NULL));
    for (i=0;i<len;i++){
        pArray[i]= min+1 + rand() % (max+1-min);
    }
    return 0;
}
int utn_mostrarArray(int array[],int desde,int hasta){
    int i;
    for(i=desde;i<=hasta;i++){
        printf("\nPosicion[%d]  :%d",i,array[i]);
    }
    return 0;
}
