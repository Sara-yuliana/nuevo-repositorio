#include <iostream>


using namespace std;

int main (){


    int dia;
    int mes;
    int edad;
    string horoscopo;
    string zignozodiacal;

    cout<<"Bienvenido al horoscopo 100% real no fake de Madan Sara y Madan Angelica"<<endl;
    cout<<"Proporciona los datos que se te piden para saber si los astros se alinearon hoy para ti"<<endl;

    cout<<"Introdusca su singno zodiacal"<<endl;
    cin>>zignozodiacal;

    cout<<"Introdusca el dia en que nacio"<<endl;
    cin>>dia;

    cout<<"introdusca el mes en que nacio"<<endl;
    cin>>mes;

    cout<<"Introdusca su edad"<<endl;
    cin>>edad;


    cout<<zignozodiacal<<" tu fortuna es"<<endl;

 switch(dia){
 case 1: cout<<"En la noche"<<endl;
 break;
 case 2: cout<<"Al salir del trabajo"<<endl;
 break;
 case 3: cout<<"Mientras almuerzas"<<endl;
 break;
 case 4: cout<<"En los pasillos de Dicis"<<endl;
 break;
 case 5: cout<<"Mientras haces ejercicio"<<endl;
 break;
 case 6: cout<<"Antes de ir a dormir"<<endl;
 break;
 case 7: cout<<"En tu trabajo"<<endl;
 break;
 case 8: cout<<"Cuando estes en el baño"<<endl;
 break;
 case 9: cout<<"En tu casa"<<endl;
 break;
 case 10: cout<<"En la calle"<<endl;
 break;
 case 11: cout<<"En la caferetia de la escuela"<<endl;
 break;
 case 12: cout<<"Al salir del trabajo"<<endl;
 break;
 case 13: cout<<"En tu Kardex"<<endl;
 break;
 case 14: cout<<"En el camion de DICIS"<<endl;
 break;
 case 15: cout<<"En la sala de computo"<<endl;
 break;
 case 16: cout<<"En el salon 307"<<endl;
 break;
 case 17: cout<<"Por las escaleras"<<endl;
 break;
 case 18: cout<<"A un lado de la biblioteca"<<endl;
 break;
 case 19: cout<<"En el estacionamiento"<<endl;
 break;
 case 20: cout<<"Por las canchas"<<endl;
 break;
 case 21: cout<<"En Fimee"<<endl;
 break;
 case 22: cout<<"Al salir del trabajo"<<endl;
 break;
 case 23: cout<<"Mientras estudias"<<endl;
 break;
 case 24: cout<<"En la casa de tu mamá"<<endl;
 break;
 case 25: cout<<"En la central"<<endl;
 break;
 case 26: cout<<"Cuando vayas a la tienda"<<endl;
 break;
 case 27: cout<<"En via alta"<<endl;
 break;
 case 28: cout<<"EN el templo de San agustin"<<endl;
 break;
 case 29: cout<<"En la refi"<<endl;
 break;
 case 30: cout<<"En la plazoleta"<<endl;
 break;
 case 31: cout<<"En las salitas de DICIS"<<endl;
 break;
}
switch(mes){
case 1: cout<<"te encontraras"<<endl;
break;
case 2: cout<<"perderas"<<endl;
break;
case 3: cout<<"abrazaras"<<endl;
break;
case 4: cout<<"saludaras"<<endl;
break;
case 5: cout<<"te golpearan"<<endl;
break;
case 6: cout<<"te asaltaran"<<endl;
break;
case 7: cout<<"empujaras"<<endl;
break;
case 8: cout<<"salvaras a"<<endl;
break;
case 9: cout<<"quemaras"<<endl;
break;
case 10: cout<<"lloraras"<<endl;
break;
case 11: cout<<"se morira"<<endl;
break;
case 12: cout<<"cumpliras"<<endl;
break;
}
 switch(edad){
 case 18 : cout<<"con un cholo"<<endl;
 break;
 case 19: cout<<" a tu perro"<<endl;
 break;
 case 20 : cout<<"con dinero"<<endl;
 break;
 case 21 : cout<<"al amor de tu vida"<<endl;
 break;
 case 22 : cout<<"con el rector "<<endl;
 break;
 case 23 : cout<<"tu ex"<<endl;
 break;
 case 24 : cout<<"con doña pelos"<<endl;
 break;
 case 25 : cout<<"el amigo"<<endl;
 break;
 case 26 : cout<<"el conserje"<<endl;
 break;
 case 27 : cout<<"a tu bro"<<endl;
 break;
 case 28 : cout<<"con tu cuñada"<<endl;
 break;
 case 29 : cout<<"a tu jefe"<<endl;
 break;
 case 30 : cout<<"con tu compañero"<<endl;
 break;
 case 31 : cout<<"tu novio"<<endl;
 break;
 case 32 : cout<<"con tus amigos"<<endl;
 break;
 case 33 : cout<<"tu novio"<<endl;
 break;
case 34 : cout<<"con la secretaria"<<endl;
 break;
 case 35 : cout<<" con el rector"<<endl;
 break;
 case 36 : cout<<"con tu alumno"<<endl;
 break;
 case 37 : cout<<"con el profesor Armando Crespo"<<endl;
 break;
 case 38 : cout<<"con el rector del campus"<<endl;
 break;
 case 39 : cout<<"con el director de departamento victor hugo"<<endl;
 break;
 case 40 : cout<<" con la doctora margarita"<<endl;
 break;
 case 47 : cout<<" con su familia"<<endl;
 break;

 }


 cout<<"Gracias por participar, si los astros no te vieron con gracia hoy, mañana vuelve a salir el sol"<<endl;

 cout<<"Tu numero de la suerte es: "<<endl;
 cout<<dia<<mes<<edad<<endl;



}



