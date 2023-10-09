# Actividad 2.3 
## Programación de Estructura de Datos y Algoritmos 

### Como ejecutar el programa
```
g++ -std=c++11 main.cpp LinkedList.cpp -o project && ./project
```

En su defecto, puedes usar 

```
g++ -std=c++11 main.cpp LinkedList.cpp -o a.out
```
```
./a.out
```

### Makefile 

También se puede utilizar el siguiente comando para ejecutar el código: 
```
make run 
```

Para borrar la caché (la carpeta obj) utiliza el siguiente comando 
```
make clean
```


Nota: El archivo `Node.hpp` no tiene un `.cpp` por el hecho de que es una clase template. 