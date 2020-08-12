# Robota

## Requisitos
* Un microcontrolador Arduino UNO
* [Arduino IDE](https://www.arduino.cc/en/Main/Software)
* 2 servos

## Uso

### Windows
Para usar el código primero hay que descargar el repositorio desde [aquí](https://github.com/Julortiz/robota/archive/master.zip).

Después hay que extraer el archivo comprimido de manera que los archivos *robolib.h*, *robolib.ino* y *robota.ino* queden dentro de una carpeta llamada "robota". Esta carpeta puede estar en cualquier parte del ordenador. Por ejemplo que quede de esta manera:

    C://Users/Julortiz/Documents/Arduino/robota/robota.ino
    C://Users/Julortiz/Documents/Arduino/robota/robolib.ino
    C://Users/Julortiz/Documents/Arduino/robota/robolib.h
    

Para abrir los archivos primero necesitamos el programa Arduino IDE el cual se puede descargar gratis desde https://www.arduino.cc/en/Main/Software. Para descargarlo bajamos hasta donde pone:
> Download the Arduino IDE

Y para descargar la versión de **Windows** pulsamos en:
> Windows Installer, for Windows 7 and up

Abrimos el archivo que acabamos de descargar y tan solo tenemos que seguir los pasos de instalación.

Una vez hecho esto podemos abrir el archivo *robota.ino* el cual se abrirá en el Arduino IDE con los otros dos archivos (*robolib.ino* y *robolib.h*).

El programa necesita una librería para controlar los servos y la cual tenemos que instalar. Una vez abierto el programa pulsamos en "Tools
" y después en "Library Manager" y aquí buscamos la librería "[Servo](https://www.arduino.cc/reference/en/libraries/servo/)". La que tenemos que instalar esta hecha por Michael Margolis y Arduino. Tras seleccionar la versión más nueva (en el momento que estoy escribiendo es la 1.1.6) le damos a instalar.

Después de hacer todo esto ya podemos subir el programa al arduino, para esto simplemente lo tenemos que conectar al ordenador con el cable y pulsar el botón de enviar (el botón circular con el icono de una flecha). En el caso de que no detecte el Arduino pulsamos en "Tool", luego le damos a "Port" y seleccionamos el Arduino.

Es recomendable mirar la sección de [**configuración**](##configuración) ya que es posible que haya que configurar el programa dependiendo de como estén puestos los servos.

### Linux

Para usar el código primero hay que descargar el repositorio. El repositorio se puede clonar desde el terminal con

    git clone https://github.com/Julortiz/robota.git
 

Para abrir los archivos primero necesitamos el programa Arduino IDE el cual se puede descargar gratis desde el gestor de paquetes de tu distribución.

En sistemas basados en **Debian**:

    sudo apt install arduino
    
En **Arch Linux**:

    sudo pacman -S arduino
    
En *Linux* es necesario añadir su usuario al grupo dialout
 para poder subir el programa al arduino. Podemos hacer esto poniendo esto en la consola:

    sudo usermod -aG dialout $(whoami)

Una vez hecho esto podemos abrir el archivo robota.ino el cual se abrirá en el Arduino IDE con los otros dos archivos (robolib.ino y robolib.h).

El programa necesita una librería para controlar los servos y la cual tenemos que instalar. Una vez abierto el programa pulsamos en "Tools
" y después en "Library Manager" y aquí buscamos la librería "[Servo](https://www.arduino.cc/reference/en/libraries/servo/)". La que tenemos que instalar esta hecha por Michael Margolis y Arduino. Tras seleccionar la versión más nueva (en el momento que estoy escribiendo es la 1.1.6) le damos a instalar.

Después de hacer todo esto ya podemos subir el programa al arduino, para esto simplemente lo tenemos que conectar al ordenador con el cable y pulsar el botón de enviar (el botón circular con el icono de una flecha). En el caso de que no detecte el Arduino pulsamos en "Tool", luego le damos a "Port" y seleccionamos el Arduino.

Es recomendable mirar la sección de [configuración](##configuración) ya que es posible que haya que configurar el programa dependiendo de como estén puestos los servos.

## Configuración
Es posible que los valores de vuestros servos sean distintos a los usados por nosotros o que los servos estén conectados a otra entrada, en estos casos habría que hacer unos cambios. Hacer estos cambios es sencillo y no requiere ningún conocimiento de programación.

### Cambiar los valores del servo
En nuestro caso los valores son 0 para hacer que el motor retroceda, 90 para que se pare y 180 para que acelere. Hay que tener en cuenta que para que el robot se mueva hacia adelante uno de los motores tiene que estar a 180 y el otro a 0 ya que uno de los dos esta alreves
.
Para cambiar estos valores entramos desde el Arduino IDE al archivo robolib.ino en la parte de arriba modificamos estos valores con los de los servos:

    aurrera_balioa = 180
    atzera_balioa = 0
    gelditu_balioa = 90
    

### Cambiar los pines
El motor izquierdo debería estar conectado al séptimo pin y el derecho al octavo pin pero en el caso de que no sea así habría que cambiarlo. Para ello abrimos el archivo robolib.ino desde el Arduino IDE y modificamos los valores de la zona de configuración.

    pin_ezkerreko_motorra = 7
    pin_eskubiko_motorra = 8
