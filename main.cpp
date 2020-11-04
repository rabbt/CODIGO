#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


using namespace std;

//REGISTRO
string Rnombre,Rapellido,Rcorreo,Rusuario,Rconstrasena;
char Respacio[1]; 


//PAGINAS
int registro();
int inicio();
int info();                                                        
int main2();                                                       
int cambio();


//booleno
bool bul=true;

// PAGINA PRINCIPAL -----------------------------------------------------------------------------------------------------------------------

int main()
{
    int eleccion=0;

 do
 {
     
 printf("\n\t\t\t-----------------");
 printf("AMAZON.COM.MX");
 printf("-----------------\n");

 printf("\n\t\t\tDesea registrase [1] o desea iniciar sesi%cn [2] ?:  ", 162);
 cin>>eleccion;

 if (eleccion>2)
 { 
    printf("\n\t\t\t[ Ingrese un n%cmero valido... ]\n\n\t\t\t", 163);
    system("pause");
    system("cls");
 }
 else if(eleccion==1)
 {
     return registro();
      
 }

 else if(eleccion==2)
 {
     return inicio();
      
 }

 
     
 } while (eleccion>2);
 
   



system("pause");
return 0;
}

//PAGINAS SEPARADAS --------------------------------------------------------------------------------------------------------

//INTERFAZ DENTRO DE "REGISTRO" ---------------------------------------------------------------------------------------------

int registro()
{
  int Releccion=0;
     
  system("cls"); 

 printf("\n\t\t\t-----------------");
 printf("Menu de registro");
 printf("-----------------\n");

 printf(" ");
 cin.getline(Respacio,1,'\n');

 printf("\n\t\t\tEscriba su nombre: ");
 cin>>Rnombre;

 printf("\n\t\t\tEscriba su apellido: ");
 cin>>Rapellido;

 printf("\n\t\t\tEscriba su correo: ");
 cin>>Rcorreo;

 printf("\n\t\t\tEscriba su usuario: ");
 cin>>Rusuario;

 printf("\n\t\t\tEscriba su contrase%ca: ", 164);
 cin>>Rconstrasena;

 //INTERFAZ DENTRO DE "REGISTRO" ---------------------------------------------------------------------------------------------

do{
 system("cls");

 printf("\n\t\t\t-----------------");
 printf("Datos de usuario");
 printf("-----------------\n");

 cout<<"\n\t\t\tUsuario: "<<Rusuario;
 cout<<"\n\t\t\tCorreo: "<<Rcorreo<<endl;


 printf("\n\t\t\tRevise que todos los datos sean correctos");
 printf("\n\t\t\tCorrejir datos [1] salir del men%c [2]: ", 163);
 cin>>Releccion;

 if (Releccion>2)
 {
    printf("\n\t\t\t[ Ingrese un numero valido... ]\n\n\t\t\t");
 }

 else if (Releccion==1)
 {
    return registro();
     
 }

 else if (Releccion==2)
 {
    system("cls");
    return main();
     
 }
 
 
}while (Releccion>2);


 

system("pause");

}

//INTERFAZ DENTRO DE "INICIO" -------------------------------------------------------------------------------------------------------------------------

int inicio()
{

 string Iusuario,Iconstrasena;

do
{
 system("cls");
 printf("\n\t\t\t-----------------");
 printf("Inicio de sesion");
 printf("-----------------\n");

 printf("\n\t\t\tIngrese su usuario: ");
 cin>>Iusuario;

 printf("\n\t\t\tIngrese su contrase%ca: ", 164);
 cin>>Iconstrasena;

 if((Iusuario==Rusuario)&&(Iconstrasena==Rconstrasena))
 {
    printf("\n\t\t\t-----------------");
    printf("BIENVENIDO");
    printf("-----------------\n\n\n\t\t\t");
    system("pause");
    return main2();
    
 }

 else
 {
    printf("\n\t\t\t[Ingrese credenciales validas por favor...]\n\n\t\t\t");
    system("pause");
    system("cls");
    return inicio();
 }
 




} while ((Iusuario!=Rusuario)&&(Iconstrasena!=Rconstrasena));

 
}



int main2()
{
    int eleccion=0;

 do
 {
   system("cls");
 printf("\n\t\t\t\t-----------------");
 printf("AMAZON.COM.MX");
 printf("-----------------\n");

 printf("\n\t\t\t\tInfomacion del usuario [1]");
 printf("\n\t\t\t\tCambiar contrase%ca [2]", 164);
 printf("\n\t\t\t\tCerrar sesion [3]"); 
 printf("\n\t\t\t\tCerrar apliaci%cn [4]                            ",162);
 cin>>eleccion;

/*
switch (eleccion)
{
 case 1:
  return info();
 break;

 case 2:
  return cambio();
 break;

 case 3:
 system("cls");
    return main();
 break;

 case 4:
  return 0;

 default:
    printf("\n\t\t\t[ Ingrese un numero valido... ]\n\n\t\t\t");
    system("pause");
    system("cls");

}
*/

 if (eleccion>4)
 { 
    printf("\n\t\t\t[ Ingrese un numero valido... ]\n\n\t\t\t");
    system("pause");
    system("cls");
 }
 else if(eleccion==1)
 {
     return info();
      
 }

 else if(eleccion==2)
 {
     return cambio();
      
 }

 else if(eleccion==3)
 {
    system("cls");
    return main();
 }

 else if(eleccion==4)
 {
     return 0;
      
 }
 
     
 } while (eleccion>4);
 
   



system("pause");
return 0;
}

int info()
{
  int i2eleccion;
 do{
 
 printf("\n\t\t\t-----------------");
 printf("Datos de usuario");
 printf("-----------------\n");

 cout<<"\n\t\t\tUsuario: "<<Rusuario;
 cout<<"\n\t\t\tCorreo: "<<Rcorreo<<endl;


 printf("\n\t\t\tRevise que todos los datos sean correctos");
 printf("\n\t\t\tCorrejir datos [1] salir del men%c [2]: ", 163);
 cin>>i2eleccion;

 if (i2eleccion>2)
 {
    printf("\n\t\t\t[ Ingrese un numero valido... ]\n\n\t\t\t");
 }

 else if (i2eleccion==1)
 {
    return registro();
     
 }

 else if (i2eleccion==2)
 {
    system("cls");
    return main2();
     
 }
 
 
 }while (i2eleccion>2);  
 }
 


int cambio()
{
   int ReleccionC;
do
{
 system("cls");

 printf("\n\t\t\t-----------------");
 printf("Cambio de contrase%ca", 164);
 printf("-----------------\n");

 cout<<"\n\t\t\tActual: "<<Rconstrasena;
 cout<<"\n\t\t\tNueva: ";cin>>Rconstrasena;

 printf("\n\t\t\t-----------------");
 printf("Cambio de contrase%ca: ", 164);
 printf("-----------------\n");

 printf("Nueva contrase%ca: ", 164);
 cout<<Rconstrasena;


 printf("\n\t\t\tRevise que todos los datos sean correctos");
 printf("\n\t\t\tCorrejir datos [1] salir del men%c [2]: ", 163);
 cin>>ReleccionC;

 if (ReleccionC>2)
 {
    printf("\n\t\t\t[ Ingrese un numero valido... ]\n\n\t\t\t");
 }

 else if (ReleccionC==1)
 {
    return cambio();
     
 }

 else if (ReleccionC==2)
 {
    system("cls");
    return main2();
     
 }
 
 
}while (ReleccionC>2);

}


