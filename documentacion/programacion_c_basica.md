# Cheat sheet de programación en C

Esta es una hoja con algunas estructuras básicas de programación en C.

**Condicionales**
Si se cumple algo, realiza una acción.

Esquema:
```
if(condicion){
  accion;
} else if(condicion) {
  accion;
} else {
  accion;
}
```

Ejemplo:

```
if(x = 2){
  y = 1;
} else if(x = 3) {
  y = 2;
} else {
  y = 0;
}
```

**Bucles**

While - mientras se cumpla una condición, realiza una acción

Esquema:
```
while(condicion){
  accion;
}
```
Ejemplo:
```
while(x < 10){
  x = x + 2;
}
```

For - durante un período marcado, realiza una acción

Esquema:
```
for ( inicio; condicion; incremento ) {
   acción;
}
```
Ejemplo:

```
for ( int i = 0; i < 10; i++ ) {
   x = x + i;
}
```
