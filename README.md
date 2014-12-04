=================
Rega.me 
=================
Internet of Things Workshop - Google Developer Day - Buenos Aires 2014.

Rega.me es un ejemplo que demuestra como debe ser la arquitectura de proyectos para Internet Of Things.

La idea es crear un sistema que pueda genere que una planta de interior o exterior transforme su ambiente a un estado optimo segun sus necesidades.

<img src="https://raw.githubusercontent.com/Gre3nLioN/iot-gdd/master/server/public/images/front.jpg">


### Version
0.1.0.0


Requerimientos
==============

### Materiales

##Electronica
* Arduino Mega o superior
* Shield Arduino Ethernet R2 o R3
* Sensor DHT11
* Sensor Humidity

### Que software tenes que instalar?


Antes de empezar, asegurate tener los siguientes programas instalados.
Es importante que lo hagas para poder hacer el workshop lo mejor posible
* [Node.js]
* [Arduino]


Otro software que utilizamos se instalara ejecutando
```bash
$ npm install
```
en la carpeta raiz.
* [Express]
* [Angular.js]
* [D3]
* [Socket.io]

Setup
=========


### Arduino


* Desde la IDE de Arduino carga el programa  de rega.me que esta en /arduino/

* Si no tenes las librerias, podes agregarlas desde la carpeta /arduino/libraries de este repositorio.

* Para esta version, el dispositivo tiene que estar conectado en la misma red que el server. Para esto, tenes que configurar 2 valores: IP del servidor y DeviceId que luego usaras en el servidor.


### Node.Js

### Como empezar?

* Instala todas las librerias. Utilizando el comando

```bash
$ npm install
```
 en la carpeta principal del repositorio.  


* Inicia el servidor nodejs utilizando el comando 'node app.js'.

```bash
$  node app.js
```

* Abri tu navegador en 'http://localhost:3000' y navega los distintos ejemplos.


### Como funciona?

### Sensores a Server

# Arduino utiliza 2 endpoints para comunicar informacion


###



Este codigo esta basado en los siguientes repositorios.

https://github.com/IotBue/nestRemix
https://github.com/lucasrudi/data-journalism
https://github.com/tinchoforever/sensor-journalism-kit-hhba

Authors
=======
* [Martín Rabaglia] de [R/GA] / [Hackthon Makers]
* [Ivan Roumec] de [R/GA]
* [Belen Curcio]
* [Lourdes Montano]
* [Santiago Marin]
* [Federico Gonzalez]
* [Sergio Serrano]


License
=======

Free to use and specially free to teach!

**Enjoy, learn and collaborate!**

[AngularJS]: http://angularjs.org
[R/GA]: http://www.rga.com
[Iván Fardjoume]: http://patagoniatecnology.com 
[Patagonia Tec]: http://patagoniatecnology.com
[Martín Rabaglia]: http://twitter.com/sr_humo
[IoTBue]: http://www.meetup.com/IoT-Buenos-Aires/
[Node.js]: http://nodejs.org
[Express]: http://expressjs.com
[Arduino]: http://arduino.cc
