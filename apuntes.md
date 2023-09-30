## archivos

### crear un archivo:

la funcion **fopen** recibe 2 parametros:

1. el nombre del archivo en disco que quiero abrir.
   en linux no es tan necesario especificar la extension, y va entre comillas dobles.
2. este parametro de uno o dos caracteres, especifica el tipo de operaciones que quiero hacer con el archivo.  
   algunas de las opciones para el segundo parametro son:  
   r) solo lectura: cursor al principio  
   r+) lectura y escritura: cursor al principio  
   w)crea un nuevo archivo o resetea a vacío el existente: cursor al principio  
   w+)igual a w pero permite leer  
   a) agrega escritura al final del archivo o crea uno nuevo si no existe, cursor al final.  
   a+)agrega escritura al final y permite leer.en ubuntu el cursor va al principio, en mac, android y BSD al final  
   rb) leer binario  
   wb) escribir binario  
   fopen devuelve un descriptor al archivo,

```C
FILE *myFile = fopen("datos.bin", "rb");
if (myFile == NULL)
{
printf("\n================\ncannot open file\n================\n");
return 1;
}
printf("\n=============\nsuccess fopen\n=============\n");

/* aqui usaremos fread y fwrite, manejaremos los datos obtenido y demas.
luego es necesario cerrar el archivo que hemos abierto */

printf("\n=============\nclosing file\n=============\n");

int closeStatus = fclose(myFile);

closeStatus != 0 ? printf("error closing file (%i)\n=============\n", closeStatus) : printf("success closing file (%i)\n=============\n", closeStatus);

```

para cerrar el archivo usamos la funcion **fclose** que recibe simplemente el descriptor del archivo abierto e intenta cerrarlo, si devuelve cero, se cerro correctamente.  
es necesario cerrarlo para que otros programas puedan acceder al archivo

### leer el contenido del archivo

para comezar usaremos **fgetc**, que recibe el descriptor del archivo abierto, y devuelve un entero que representa el ASCII del caracter que esta leyendo el _cursor_.
el cual por ejemplo podriamos castear a char para imprimirlo por pantalla:

```C
int charLeido = fgetc(myFile);
printf("he leido el caracter %c\n",(char)charLeido);
```

para evitar errores como por ejemplo intentar leer estando al final del archivo,  
podemos aprovechar el caracter EOF _end of file_ y la funcion **feof**, la
cual recibe el descriptor del archivo abierto y devuelve false o cero si el caracter actual es _distinto de EOF_ y en caso de que sea EOF, devuelve true, o no-cero.  
para el mismo objetivo podriamos usar un simple

```C
if(charLeido!=EOF){}
```

#### manipulacion del cursor:

hay dos funciones principales que nos permiten saber donde esta el cursor y moverlo a donde querramos:
la primera es **ftell()** que recibe el descriptor al archivo abierto y devuelve un long, este long es un numero entero que representa la posicion del cursor en el archivo. qu ese puede imprimir con el placeholder %ld.  
devuelve -1 si hay algun error.

la otra funcion que usaremos es **fseek** que recibe el descriptor,un numero entero positivo o negativo que indica la cantidad de pasos y la direccion que quiero que el cursor se mueva, y el tercer parametro indica desde donde se va a mover el cursor:

-SEEK_SET:desde el inicio del documento  
-SEEK_END:desde el final del documento  
-SEEK_CUR:desde la posicion actual del cursor.

de modo que por ejemplo, para mover hacia la izquierda cinco veces el cursor desde donde se encuentre en el momento, usaríamos:

```C
fseek(myFile,-5,SEEK_CUR);
```

CALCULAR EL TAMAÑO TOTAL DEL DOCUMENTO:  
puedo abrir el archivo en modo lectura,  
llamar a fseek y mover mi cursor al final del documento,  
con ftell puedo saber el largo total del documento en bytes, ya que la cantidad total de caracteres es la cantidad de bytes,  
Al final podria usar de nuevo fseek para llevar mi cursor al inicio del documento, o usar la funcion **rewind(myFile)** que hace exactamente eso... o puedo continuar con cualquier otra tarea que quiera.

otra opcion para leer el archivo, es la funcion **fgets()**  
si fgetc permite guardar en un buffer el valor de un caracter, fgets permite hacerlo con el contenido de un string.  
Recibe 3 parametros:

1. un puntero a el buffer en el cual quiero guardar cada string, lo mas lógico seria definir el buffer como un string (char buffer[50] por ejemplo) y al ser un array ya es un puntero, de modo que al pasarlo como argumento seria solo el nombre y ya.  
   2)la cantidad maxima de caracteres que quiero que lea o que guarde en el buffer, aqui conviene poner el la misma cantidad con la que se definio el buffer (50, en nuestro ejemplo).
2. el descriptor del archivo.

si fgets logra su objetivo, devuelve un puntero que apunta ala direccion de memoria del buffer (es decir devuelve el miismo buffer) y si tiene algun error devuelve NULL.  
a demás, fgets detiene su lectura cuando:

-llega al numero de caracteres definido en el param 2  
-llega a un salto de linea  
-llega a un EOF
