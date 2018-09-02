/**
verifica la entrada de un numero entero.
@parametros
pEntrada: puntero a la variable int
texto: puntero a texto a mostras para ingresar el dato
textoError: puntero a texto para mostrar error en la validacion
*/
int utn_verificarNumeroEntero(int *pEntero,char* texto,char* textoError);
/**
verifica la entrada de un numero float.
@parametros
pEntrada: puntero a la variable float
texto: puntero a texto a mostras para ingresar el dato
textoError: puntero a texto para mostrar error en la validacion
*/
int utn_verificarNumeroFloat(float *pEntero,char* texto,char* textoError);
/**
verifica la entrada de un numero Char.
@parametros
pEntrada: puntero a la variable Char
texto: puntero a texto a mostras para ingresar el dato
textoError: puntero a texto para mostrar error en la validacion
*/
int utn_verificarNumeroChar(char *pChar,char* texto,char* textoError);
/**
Carga numeros aleatorios en un array desde un min a un max
@parametros
pArray:puntero al array a cargar
len:tamaño del array
min:numero minimo
max:numero max
*/
int utn_cargaNumeroAleatoriosEnArrays(int* pArray[],int len,int min, int max);
/**
Muestra los numeros cargados de un array desde un subindice hasta otro
array: array a mostrar
desde: subindice inicial
hasta: subindice final
*/
int utn_mostrarArray(int array[],int desde,int hasta);
