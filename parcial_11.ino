// C++ 
// Parcial 1 info 2
// shiftOut(data,clock,bitOrder,value)

// Definición de pines para el 74HC595
const int latchPin = 3;  // Pin ST_CP del 74HC595
const int clockPin = 4; // Pin SH_CP del 74HC595
const int dataPin = 2;  // Pin DS del 74HC595

//Prototipo de funciones
void verificacion();
void imagen();
void publik();


// Matriz de patrones para representar caracteres
/*byte patterns[] = {
  B00000000,
  B00011000,
  B00100100,
  B01000010,
  B10000001,
  B01000010,
  B00100100,
  B00011000
};
*/
void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  Serial.begin(9600);  //inicial conexion con el "serial monitor".
  Serial.println("hola");
   
//reservando espacio de memoria para la matriz    
/* int **pt=new int *[8];
  for(int i=0; i<8; i++){
    pt[i]= new int[8];
  }
  	for(int j=0; j<8; j++){
      for(int k=0; k<8; k++){
       	pt[j][k]=0; 
      }
   }   
  */
  //Inicio de Programa.
  int opcion;
  bool band = true;
  
  Serial.println("\n Bienvenido al Programa\n");
  
  //Menu
  while(band){
  
  Serial.println("\n------Menu-----\n");
  Serial.println("\nIngrese su opcion Preferida: \n"); 
  Serial.println("1. Verificar funcionamiento de los LEDs. \n");
  Serial.println("2. Ingresar un patron a tu gusto. \n"); 
  Serial.println("3. Ingresar un patron ya definido. \n"); 
  Serial.println("4. Definir tiempos\n");
  Serial.println("5. Salir del programa. \n"); 
   
  
  Serial.println("Ingresa una opcion: "); 
  
  while(Serial.available()==0){}
  opcion=Serial.parseInt();
  
  switch(opcion){
  	
    case 1:
    	Serial.println("Verificar funcionamiento de la matriz");
    	//verificacion();
    	//delay(500);
    	break;
    
    case 2:
    	Serial.println("Ingrese el patron de LEDs que desea ver");
   		break;
    
    case 3:
    	Serial.println("Ingrese el patron definido que desea ver");
    	break;
    
    case 4: 
    	Serial.println("Ingrese al siguiente menu");
    //void publik (); <- Por definir.
      	break;
    
    case 5:
    	Serial.println("SALIR...");
    	Serial.println("Saliendo del programa.");
    	band = false; // Cambiar la condición para salir del bucle.
    	break;
    
  	default:
    	Serial.println("Opcion invalida...");
		break;
    

  }
  }  
}
  

void loop() {
  /*	for (int i = 0; i < 8; i++) {
    	digitalWrite(latchPin, LOW);
    	shiftOut(dataPin, clockPin, LSBFIRST, patterns[i]);
    	digitalWrite(latchPin, HIGH);
    	delay(200); // Espera 1 segundo para mostrar cada patrón
      	  }
          */
}  

//Definicion de las funciones:
  //void verificacion(){

	   //}
  

  
//liberando espacio de memoria para la matriz  
// for (int i = 0; i < 8; i++) {
//   delete[] pt[i];
//}  
//liberando el arreglo  
//delete [] pt;

 

