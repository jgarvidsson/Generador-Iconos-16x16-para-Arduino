# Generador-Iconos-16x16-para-Arduino
## Datos del Proyecto
- **Descripción:** Generador de Iconos 16x16 pixels que transfiere la imagen a código C++ para poder ser usado por Arduino.
- **Codificación:** WHN_016.
- **Lenguaje:** VBA en EXCEL.

Este proyecto está montado en EXCEL usando el lenguaje de programación BVA y fue encargado para poder crear pequeños Iconos (16x16 pixeles) para proyectos IoT en Arduino usando pantalas OLED.

## Cómo usarlo
El generador (archivo EXCEL) está dividio en tres partes (hojas):
- 1) **Generador de Iconos**.
- 2) **Decodificador de código binario (0b o B)**.
- 3) **Iconos predefinidos**.


### Generador de Iconos
El generador de iconos posee dos ventanas de 16x16 pixels, la primera, a la izquierda, representa la pizarra donde se dibujará el Icono, y la segundo, a la derecha, como quedará el icono.

![Generador de Iconos 16x16 pixels](https://github.com/jgarvidsson/Generador-Iconos-16x16-para-Arduino/blob/img/1_GeneradorIconos.png?raw=true)

#### Controles de la ventana:
- **Borrar**: Remueve el icono editado.
- **Invertir**: Invierte la codificación binaria para mostrar la imagen invertida.
- **Nombre del Icono**: Da el nombre del Icono que aparecerá en el código.
- **Copiar para Arduino**: Copia en el portapapeles el codigo binario del Icono para ser pegado en cualquier proyeto.
- **Guardar en Archivo**: Guarda el archivo en .txt. Si se activa 'como Proyecto Arduino', guardará un proyecto .ino para probar el Icono creado/editado.
- **como Proyecto Arduino**: Activado genera el código C++ para probar el Icono.
