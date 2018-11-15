# Electrónica básica en arduino

Para poder actuar con el arduino y conectar correctamente los componentes, debemos conocer la electrónica básica que hace que funcione. Arduino está compuesto por un placa con una serie de pins en los que podemos conectar el resto de componentes. Para ello, podemos ayudarnos de un protoboard, que nos permite diseñar con más comodidad y sin necesidad de soldar algunos de nuestros proyectos.

Nuestro arduino debe ser como este:

![](https://www.sketchappsources.com/resources/source-image/arduino-board-ramongilabert.jpg)

En el encontramos pines analógicos y digitales numerados, que conectaremos a nuestros componentes a través de los cables. El botón rojo es de reseteo. A parte encontraremos también GND (tierra, 0 Voltios) y 5V.

Para que el circuito funcione correctamente debe estar cerrado, es decir que haya una ruta desde la fuente de energía hasta la toma de tierra. Puedes imaginar la corriente como agua que cae por una cuesta, desde un Voltaje (n V) hasta tierra (0 V), en medio puede haber resistencia eléctrica para regular la electricidad dependiendo de los componentes, por ejemplo para un led. La corriente siempre buscará la ruta de menos resistencia para pasar, igual que el agua de un río.

![](https://raw.githubusercontent.com/terceranexus6/seminario_bbaa/master/images/cutre.png)
![](https://raw.githubusercontent.com/terceranexus6/seminario_bbaa/master/images/corriente.png)

Una protoboard nos permite conectar nuestros componentes con cierto orden, pero hay que seguir una serie de normas.

![](http://www.clker.com/cliparts/x/z/X/s/N/Q/small-circuit-solderless-breadboard-hi.png)

Las filas de + y - son buses de potencia, y deberán conectarse con 5V y GND respectivamente. Los cinco agujeros de cada línea horizontal de las columnas del centro, a su vez, están conectadas por bandas metálicas. La línea central rompe la conexión entre ambas columnas.

Hagamos un ejemplo, conectemos un led al arduino. Para ello imitaremos este esquema:

![](https://evothings.com/doc/examples/images/arduino-led-tcp-sketch.png)

Como podemos ver, el circuito se compone de un led, una resustencia y el arduino. El Led tiene dos patas, una más larga que la otra. La pata larga debe asociarse a + (5V) y la corta a tierra (GND). Para regular la corriente, usaremos una resistencia, cuando mayor sea la resistencia, menos intenso será el brillo. la patilla larga debe ir conectada a la resistencia y esta a su vez a la entrada de energía, en este caso al pin digital 2. Si queremos ver como parpadea, cargaremos el [programa](https://github.com/terceranexus6/seminario_bbaa/codigo/encender_led.ino) a la placa con ayuda del cable.
