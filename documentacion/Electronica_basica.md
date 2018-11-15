# Electrónica básica en arduino

Para poder actuar con el arduino y conectar correctamente los componentes, debemos conocer la electrónica básica que hace que funcione. Arduino está compuesto por un placa con una serie de pins en los que podemos conectar el resto de componentes. Para ello, podemos ayudarnos de un protoboard, que nos permite diseñar con más comodidad y sin necesidad de soldar algunos de nuestros proyectos.

Nuestro arduino debe ser como este:

![](https://www.sketchappsources.com/resources/source-image/arduino-board-ramongilabert.jpg)

En el encontramos pines analógicos y digitales numerados, que conectaremos a nuestros componentes a través de los cables. El botón rojo es de reseteo. A parte encontraremos también GND (tierra, 0 Voltios) y 5V.

Para que el circuito funcione correctamente debe estar cerrado, es decir que haya una ruta desde la fuente de energía hasta la toma de tierra. Puedes imaginar la corriente como agua que cae por una cuesta, desde un Voltaje (n V) hasta tierra (0 V), en medio puede haber resistencia eléctrica para regular la electricidad dependiendo de los componentes, por ejemplo para un led. La corriente siempre buscará la ruta de menos resistencia para pasar, igual que el agua de un río.

![](https://raw.githubusercontent.com/terceranexus6/seminario_bbaa/master/images/cutre.png)
![](https://raw.githubusercontent.com/terceranexus6/seminario_bbaa/master/images/corriente.png)
