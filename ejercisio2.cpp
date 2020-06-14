#include "iostream"
#include "time.h"
#include "stdlib.h"

using namespace std;



float room( float numero, float dato, float contador = 2)

{ 
srand(time(NULL)); //*Generar un numero aleatorio*//
dato = 1 + rand()%(100);//formula para que la computadora genere el numero aleatorio//

do
{

    if(numero > dato){  //si el numero es mayor al numero aleatorio que la computadora dio, le pedira al ususario ingrar un numero menor//
        cout <<("\nDigite un numero menor\n"); cin >> numero;
        cout <<("Numero de intento: ") <<contador <<endl;
    }
    if(numero < dato){ //si el numero es menor al numero aleatorio que la computadora dio, le pedira al ususario ingrar un numero mayor//
        cout <<("\nDigite un numero mayor\n"); cin >> numero;
        cout <<("Numero de intento: ") <<contador <<endl;
    }    
    contador++; //el contador ira aumentando los intentos//


    if(contador > 5){  //si el contador es mayor a 5 el bucle parara y le dira al usuario que sus intentos terminaron//
        cout <<("Ha realizado el maximo de intentos, lo sentimos...") <<endl;
    break;

    }
    
} while (numero != dato);
    if (numero == dato) //si el numero que el usuario digite le atina al numero producido por la computadora le dira que lo adivino//
    {
         cout <<("\nFelicidades adivinaste el numero\n");
    }
      
    
    return numero,dato,contador = 2;

}

int main()
{
        float f;
        float numero;
        float dato;
        float contador = 2;

        cout <<("Numero Magico!") <<endl;
        cout <<("Digite un numero: ") <<endl;
        cin >> numero;
        
        
        f = room(numero, dato, contador = 2);

        cout <<f;
   return 0;   
}
