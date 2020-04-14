/*
Realizar un ejercicio que reuna los ejercicios realizados
y ponerlos en un menu
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int opcion;//variable opcion para ejecutar el menu

    do // el menu se va a ejecutar desde aqui hasta el while de abajo
    {
        system("cls");      // se limpia la pantalla cls significa clear ...el sistema limpia despues de cada ejecucion de algun ejercicio
        printf("\n*******************************************************\n");//decoracion
        printf("\n********* MENU DE EJERCICIOS **********\n\n");
        printf(" OPCIONES         EJERCICIOS  \n\n");
        printf("   1.             Ejercicio 1 EDAD \n");//
        printf("   2.             Ejercicio 2 IMC\n");//
        printf("   3.             Ejercicio 3 TEMPERATURA\n");//       AQUI ESTAN LAS OPCIONES DE LOS EJERCICIOS
        printf("   0.             Salir       \n");//
        printf(" Elija una opcion : \n");          // Aqui pide que se ingrese una opcion
        scanf("%d", &opcion);                      // Se lee la opcion

        switch(opcion)//el switch funciona con la opcion valida ...hay 6 opciones asi que 6 casos y el default
        {
                case 1:
                {
                    int edad;
                    char nombre[50];

                    getchar();
                    printf("\nEscriba el nombre: ");
                    gets(nombre);

                    printf("\nEscriba la edad: ");
                    scanf("%d",&edad);

                    if(edad>=18)
                        printf("\n%s es mayor de edad ",nombre);
                    else
                        printf("\n%s no es mayor de edad ",nombre);
                    printf("\n");
                    //system("pause");
                    getchar();
                    break;

                }
                case 2:
                {
                    float peso,altura,imc;
                    printf("\nEscriba su altura en metros: ");
                    scanf("%f",&altura);
                    printf("\nEscriba su peso en kilos: ");
                    scanf("%f",&peso);

                    imc = peso / pow(altura,2);


                    if(imc<18.5)
                    {
                        printf("\nEl imc es: %f y es baja",imc);
                    }

                    else if((imc>=18.5)&&(imc<=24.9))
                    {
                        printf("\nEl imc es: %f y es normal",imc);
                    }

                    else if((imc>=25)&&(imc<=29.9))
                    {
                        printf("\nEl imc es: %f y es sobrepeso",imc);
                    }

                    else if((imc>=29.9)&&(imc<=39.9))
                    {
                        printf("\nEl imc es: %f y es obesidad",imc);
                    }

                    else
                        printf("\nEl imc es: %f y es obesidad morbida",imc);
                    printf("\n");
                    //system("pause");
                    break;
                }
                case 3:
                {

                    float celsius, f;
                    float faren,centi;
                    printf("\nEscriba la temperatura en grados centigrados: ");
                    scanf("%f",&celsius);

                    f=((1.8)*celsius)+32;

                    printf("\nLa temperatura en grados Fahrenheit es : %.2f",f);

                    printf("\nEscriba la temperatura en grados farenheit: ");
                    scanf("%f",&faren);

                    centi=(faren-32)*5/9;

                    printf("\nLa temperatura en grados centigrafos es : %.2f",centi);

                   printf("\n");
                   //system("pause");
                    break;
                }
                
                default: 
                {
                    printf("\nOpcion no valida\n");
                    break;
                }

        }

    }
    while(opcion!=0);
    return 0;
}

