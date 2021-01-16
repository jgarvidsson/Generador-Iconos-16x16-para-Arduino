/****************************************************************************************
*       Ejemplo de Uso de Impresi�n de un Icono 16x16 en pantalla OLED de 128x64
*            Este proyecto se ha generado con el Generador de Iconos 16x16
*      Dise�ado por J.G.Arvidsson para White Noise Solution para proyectos r�pidos
*               en diseno y generacion de iconos para dispositivos IoT.
*
* Mas informacion en https://github.com/jgarvidsson/Generador-Iconos-16x16-para-Arduino
*                            www.whitenoisesolutions.com
*                               jgarvidsson@gmail.com
*                                    @jgarvidsson
****************************************************************************************/

//  Incluimos las librer�as
    #include <Wire.h>
    #include <Adafruit_GFX.h>       // https://github.com/adafruit/Adafruit-GFX-Library
    #include <Adafruit_SSD1306.h>   // https://github.com/adafruit/Adafruit_SSD1306

// Definimos variables estaticas
    #define SCREEN_WIDTH 128 // OLED display ancho, in pixels
    #define SCREEN_HEIGHT 64 // OLED display alto, in pixels
    #define OLED_RESET    -1 // Reset pin # (or -1 if sharing Arduino reset pin)

//  Declaracion de un SSD1306 display conectado al puerto I2C (SDA, SCL pins)
    Adafruit_SSD1306 display = Adafruit_SSD1306(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire);

//  Codigo del Icono

const unsigned char Cara[] PROGMEM  = {
   0b00111110, 0b00111110, //   #####   ##### 
   0b01000000, 0b00000001, //  #             #
   0b00011000, 0b00001100, //    ##       ##  
   0b00101100, 0b00011010, //   # ##     ## # 
   0b00101100, 0b10011010, //   # ##  #  ## # 
   0b00011001, 0b00001100, //    ##  #    ##  
   0b00000010, 0b00000000, //       #         
   0b00000010, 0b01000000, //       #  #      
   0b00000001, 0b10000000, //        ##       
   0b00100000, 0b00000010, //   #           # 
   0b00010000, 0b00000100, //    #         #  
   0b00001111, 0b11111000, //     #########   
   0b00000010, 0b10100000, //       # # #     
   0b00000010, 0b10100000, //       # # #     
   0b00000010, 0b10100000, //       # # #     
   0b00000001, 0b11000000, //        ###      
};

void MostrarIconoCentrado(){
    int x = SCREEN_WIDTH;   // Ancho de pantalla
    int y = 16;             // Altura donde ser� visualizada
    int ancho = 16;         // Ancho del Icono (depender� del usuario). Por Defecto 16
    int alto  = 16;         // Alto  del Icono (depender� del usuario). Por Defecto 16
    int color = 1;          // Define el color (1=Blanco / 0=Negro)

    display.clearDisplay();                                                               // Limpiamos el buffer
    display.drawBitmap(((x - ancho) / 2), ((y - alto) / 2), Cara, ancho, alto, color);    // Localizamos el Icono en pantalla
    display.display();                                                                    // Mostramos el Icono
}

void setup() {
    display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // Address 0x3C for 128x32
}

void loop() {
  MostrarIconoCentrado;
}
