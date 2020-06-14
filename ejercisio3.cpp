#include "iostream"
#include "cstdlib"
#include "stdio.h"

 using namespace std;

     int room (int fecha)

{
    
    // si la fecha entre 4 es diferente o igual a cero o si es divisible entre 100 he igual a 0 //
    if (fecha % 4 != 0 || (fecha % 100 == 0 && fecha % 400 != 0 ))// o es divisible entre 400 y es diferente o igual a cero no es biciesto//
        cout <<("No es bisiesto") <<endl;
    else
    {
        cout <<("Es bisiesto") <<endl;//sino cumple lo anterior sera bisiestos//
    }
             
    return fecha;
}

 int main()
 {
     int f;
     int fecha;

    cout <<("Es o no a year Biciesto") <<endl;
    cout <<("Digite cualquier year: ") <<endl;
    cin >> fecha;
     
    f = room(fecha);

    cout <<f;


     return 0;
 }