# Generador Iconos 16x16 para Arduino
## Datos del Proyecto
- **Descripción:** Generador de Iconos 16x16 pixels que transfiere la imagen a código C++ para poder ser usado por Arduino.
- **Codificación:** WHN_016 (número de catalogo personal).
- **Lenguaje:** VBA en EXCEL.
- **Testado en**: Ver detalles al final de este documento.

Este proyecto está montado en EXCEL usando el lenguaje de programación BVA y fue encargado para poder crear pequeños Iconos (16x16 pixeles) para proyectos IoT en Arduino usando pantalas OLED.

La herramienta la puedes descargar desde la rama Tool de este repositorio o pulsando aquí [Generador de Iconos 16x16](https://github.com/jgarvidsson/Generador-Iconos-16x16-para-Arduino/blob/Tool/Iconos%2016x16.xlsm)

## Cómo usarlo
El generador (archivo EXCEL) está dividio en tres partes (hojas):
- 1) **Generador de Iconos**.
- 2) **Decodificador de código binario (0b o B)**.
- 3) **Iconos predefinidos**.


### Generador de Iconos
El Generador de Iconos posee dos ventanas de 16x16 pixels, la primera, a la izquierda, representa la pizarra donde se dibujará el Icono, y la segundo, a la derecha, como quedará el icono.

![Generador de Iconos 16x16 pixels](https://github.com/jgarvidsson/Generador-Iconos-16x16-para-Arduino/blob/img/1_GeneradorIconos.png?raw=true)

#### Controles de la ventana:
- **Borrar**: Remueve el icono editado.
- **Invertir**: Invierte la codificación binaria para mostrar la imagen invertida.
- **Nombre del Icono**: Da el nombre del Icono que aparecerá en el código.
- **Copiar para Arduino**: Copia en el portapapeles el codigo binario del Icono para ser pegado en cualquier proyeto.
- **Guardar en Archivo**: Guarda el archivo en .txt. Si se activa 'como Proyecto Arduino', guardará un proyecto .ino para probar el Icono creado/editado.
- **como Proyecto Arduino**: Activado genera el código C++ para probar el Icono.

### Decodificador de código binario
El Decodificador de código toma la muestra insertada en la caja de texto y si corresponde a la codificación binaria la muestra en la pantalla de visualizadión (situada a la izquierda).

![Ventana del Decodificador de código binario](https://github.com/jgarvidsson/Generador-Iconos-16x16-para-Arduino/blob/img/2_DecodificadorBinario.png?raw=true)

#### Controles de la ventana:
- **Copiar el Texto Binario Completo**: Ventana donde se pega el código del Icono en binario.
- **Editar Icono**: Transfiere el Icono desde la pantalla de Visualización a la ventana del *Generador de Iconos* para editarse.
- **Inicia con 0b**: Filtra el código binario que contenga la cabecera de cada cadena de bites 0b.
- **Inicia con B**: Filtra el código binario que contenga la cabecera de cada cadena de bites B.
- **Borrar Binario**:

### Icono predefinidos
Contiene una lista predefinida de Iconos 16x16 pixels. Fuente: https://engsta.net/iot-icon-set-for-i2c-oled-displays/.

Permite seleccionar un Icono predefinido de la lista y copiar, guardar o editar el mismo para usar en proyectos Arduino.

![Ventana de Lista predefinida de Iconos 16x16 pixels](https://github.com/jgarvidsson/Generador-Iconos-16x16-para-Arduino/blob/img/3_ListaPredefinida.png?raw=true)

#### Controles de la ventana:
- **Copiar Código**: Copia en el portapapeles el codigo binario del Icono para ser pegado en cualquier proyeto.
- **Guardar en Archivo**: Guarda el archivo en .txt. Si se activa 'como Proyecto Arduino', guardará un proyecto .ino para probar el Icono creado/editado.
- **como Proyecto Arduino**: Activado genera el código C++ para probar el Icono.
- **Editar Icono**: Transfiere el Icono desde la pantalla de Visualización a la ventana del *Generador de Iconos* para editarse.
- **Cargar Lista**: Recarga la lista de Iconos predifinidas (por defecto la lista está vacía).

## Testado en las siguientes tarjetas:
- **WeMos D1**: Necesita cargar la librería de tarjetas: http://arduino.esp8266.com/stable/package_esp8266com_index.json y seleccionar WeMos D1 R1.
- **WeMos D1 R32**: Necesita cargar la librería de tarjetas: http://resource.heltec.cn/download/package_heltec_esp32_index.json y seleccionar WiFi Kit32.
