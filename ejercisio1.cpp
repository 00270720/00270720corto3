#include "iostream"

using namespace std;

float room (float horastrabajadas,float horasextras,float& salarioreal,
            float& htrabajadas,float& hextras,float& total,float& descuentosocial,float& descuentoafp,float& descuentorenta)

{
    //las horas se multiplican por su pago//
        htrabajadas = horastrabajadas * 1.75;
        hextras = horasextras * 2.50;
       //el total sera la multiplicacion de las horas trabajadas por las extras//
        total = htrabajadas + hextras;

           
//para sacar los descuentos tenemos que multiplicar el total por su debido porcentaje en decimales//
    descuentosocial = total * 0.04;
    descuentoafp = total * 0.0625;
    //el descuento por renta solo se aplica a salarios mayores o iguales a 500//
    if(total >= 500 ){
        descuentorenta = total * 0.10;
    }else
    {
        descuentorenta = 0;
    }
//el salario real se calcula por la resta del total y los tres tipos de descuentos//
        salarioreal = total - descuentosocial - descuentoafp - descuentorenta;

        
//retornamos los parametros//
        return horastrabajadas,horasextras,salarioreal,htrabajadas,hextras,total,descuentosocial,descuentoafp,descuentorenta;
}

int main(void)

{
    
    float horastrabajadas;
    float horasextras;
    float salarioreal;
    float htrabajadas;
    float hextras;
    float total;
    float descuentosocial;
    float descuentoafp;
    float descuentorenta;
   
    
    int F;

    while (F != 2)
    {
        cout <<("1-Digite a un trabajador para conocer su salario") <<endl;
        cout <<("2-salir") <<endl;
        cin >> F;
        cout <<endl;

                switch (F)
                {
                case 1: cout <<("Digite las horas trabajadas: ") <<endl;
                        cin >> horastrabajadas;
                        cout <<("Digite las horas extras: ") <<endl;
                        cin >> horasextras;

                        room(horastrabajadas,horasextras,salarioreal,htrabajadas,hextras,total,descuentosocial,descuentoafp,descuentorenta);

                        cout <<("El salario por horas normales a dar es: ") << htrabajadas <<endl;
                        cout <<("El salario por horas extras a dar es: ") << hextras <<endl;
                        cout <<("El salario total a dar es: ") << total <<endl;

                        cout <<("Descuento por seguro social es: ") << descuentosocial <<endl;
                        cout <<("Descuento por afp es: ") << descuentoafp <<endl;
                        cout <<("Descuento por renta es: ") << descuentorenta <<endl;
                        cout <<("El salario real con descuento es: ") << salarioreal <<endl;
                        cout <<endl;
                        break;

                        default:
                        if (F < 1 || F > 2)
                        {
                            cout <<("El numero que ingreso no se encuentra");
                            cout <<("Inserte una de las opciones");
                        }

                }

  }  
  cout <<F;
    return 0;
}