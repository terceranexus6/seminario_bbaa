# Sensor de luz paso a paso

Primero vamos a hacer una lectura sencilla para comprender el concepto de monitor antes de usarlo con un led. El sensor de luz básicamente mide la intensidad de la luz del ambiente, y devuelve un número con el que podemos hacer lógica más tarde. En el siguiente ejemplo, vamos a ver la lectura de dicha cantidad.

Para empezar, este es el esquema del circuito:

![](https://2.bp.blogspot.com/-T7ORL0NKDf4/U7-lWef2S0I/AAAAAAAADt0/nt3HOo7-F0c/s1600/FBQD4AIFVS7L2ES.LARGE.gif)

Como podemos comprobar, conectamos a pin analógico 0 una de las patillas, y a su vez conectamos una resistencia, que también nos lleve a GND. La otra patilla irá a los 5V. De esta forma, y usando el [código corresponiente](https://github.com/terceranexus6/seminario_bbaa/blob/master/codigo/sensor_luz.ino), podemos monitorizar la entrada del sensor. 
