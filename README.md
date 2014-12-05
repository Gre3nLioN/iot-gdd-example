=================
Rega.me 
=================
##### Internet of Things Workshop - Google Developer Dev Fest - 
##### Buenos Aires 6 Diciembre 2014.

Rega.me es un ejemplo que demuestra como debe ser la arquitectura de proyectos para Internet Of Things.

Vamos a combinar Arduino + NodeJs + Angular.Js para tener un sistema base para hacer sistemas que mezclen informacion del mundo real, la guarden y procesen y finalmente las muestre en un frontend.

En este caso, la idea es crear un sistema que pueda genere que una planta de interior o exterior transforme su ambiente a un estado optimo segun sus necesidades.

Al final del workshop vas a tener en tu maquina el ejemplo y el software andando para que puedas seguir en tu casa si obtenes los materiales de electronica necesarios.

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
* [Arduino] - Version 1.6 llamada Arduino 2


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

* Para esta version, el dispositivo tiene que estar conectado en la misma red que el server. Para esto, tenes que configurar 2 valores que luego usaras en el servidor: 
* serverIp 
* deviceId

### Estructura de carpetas

* /arduino - Contiene todos los archivos de ejemplo de arduino

* /server - Contiene todos los archivos del servidor y el frontend.


### Arduino - /arduino



### Node.Js - /server

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


# Como funciona?

### Sensores a Server
* Arduino utiliza 2 endpoints para comunicar informacion

### Server a FrontEnd

* NodeJs utiliza 2 mensajes de web sockets para informar a la visualizacion que tiene que actualizar.


###

Que queda por hacer?
=======

* Construir persistencia con Mongo.DB
* Utlizar una api de prediccion de clima
* Armar formulas para distintos tipos de plantas
* Agregar las formulas de calor
* Agregar un server central en Heroku? Google Cloud Platform? para compartir todas las estadisticas

Ayudanos a armarlo!



Authors
=======
* [Iván Fardjoume] de [Patagonia Tec]
* [Martín Rabaglia] de [R/GA] / [Hackthon Makers]
* [Ivan Roumec] de [R/GA]
* [Belen Curcio] de [R/GA]
* [Lourdes Montano] de [R/GA]
* [Santiago Marin] de [R/GA]
* [Federico Gonzalez] de [R/GA]
* [Sergio Serrano] de [R/GA]

Este codigo esta basado en los siguientes repositorios.

* https://github.com/IotBue/nestRemix
* https://github.com/lucasrudi/data-journalism
* https://github.com/tinchoforever/sensor-journalism-kit-hhba

License
=======
Free to use and specially free to teach!
**Enjoy, learn and collaborate!**

[Angular.Js]: http://angularjs.org
[D3]: http://d3js.org/
[Socket.io]: http://socket.io/
[R/GA]: http://www.rga.com
[Iván Fardjoume]: http://patagoniatecnology.com 
[Patagonia Tec]: http://patagoniatecnology.com
[Martín Rabaglia]: http://martinrabaglia.com.ar
[Ivan Roumec]: http://twitter.com/gre3nlion
[Belen Curcio]: http://twitter.com/okbel
[Lourdes Montano]: http://twitter.com/loumontano
[Santiago Marin]: http://twitter.com/loumontano
[Sergio Serrano]: http://twitter.com/loumontano
[Federico Gonzalez]: http://twitter.com/loumontano
[Node.js]: http://nodejs.org
[Express]: http://expressjs.com
[Arduino]: http://arduino.cc
