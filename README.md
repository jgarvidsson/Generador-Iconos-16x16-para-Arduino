# Generador-Iconos-16x16-para-Arduino
## Datos del Proyecto
- Descripción: Generador de Iconos 16x16 pixels que transfiere la imagen a código C++ para poder ser usado por Arduino.
- Codificación: WHN_016.
- Lenguaje: VBA en EXCEL.

Este proyecto está montado en EXCEL usando el lenguaje de programación BVA y fue encargado para poder crear pequeños Iconos (16x16 pixeles) para proyectos IoT en Arduino usando pantalas OLED.

## Cómo usarlo
El generador (archivo EXCEL) está dividio en tres partes (hojas):
- 1) Generador de Iconos.
- 2) Decodificador de código binario (0b o B).
- 3) Iconos predefinidos


### Generador de Iconos
El generador de iconos posee dos ventanas de 16x16 pixels, la primera, a la izquierda, representa la pizarra donde se dibujará el Icono, y la segundo, a la derecha, como quedará el icono

## Changes
Pull Request:
   (September 2019) 
   * Changed #defines for BLACK, WHITE and INVERSE into a class Adafruit_SSD1306 scoped enum to eliminate compiler errors in code that used either those words or defined other values to them. This means that there is a required code change, from (e.g.) WHITE to Adafruit_SSD1306::WHITE:
     * <code> display.drawPixel(10, 10, WHITE);</code>    // to
     * <code>display.drawPixel(10, 10, Adafruit_SSD1306::WHITE);</code>
   * new #defines for SSD1306_BLACK, SSD1306_WHITE and SSD1306_INVERSE that match existing #define naming scheme and won't conflict with common color names
   * old #defines for BLACK, WHITE and INVERSE kept for backwards compat (opt-out with #define NO_ADAFRUIT_SSD1306_COLOR_COMPATIBILITY)

Version 1.2 (November 2018) introduces some significant changes:

  Pick one up today in the adafruit shop!
  ------> http://www.adafruit.com/category/63_98

These displays use SPI to communicate, 2 to 5 pins are required to interface.
These displays use I2C or SPI to communicate, 2 to 5 pins are required to interface.
