//
// Created by theflilux on 10/09/22.
//

#include<iostream>
using namespace std;

string signoZodiacal(int day, const string& month){
    if(month == "Enero"){
        if(day<21) return "Capricornio";
        else	  return "Acuario";
    } else if(month == "Febrero"){
        if(day<21) return "Acuario";
        else	  return "Piscis";
    } else if(month == "Marzo"){
        if(day<21) return "Piscis";
        else	  return "Aries";
    } else if(month == "Abril"){
        if(day<21) return "Aries";
        else	  return "Tauro";
    } else if(month == "Mayo"){
        if(day<22) return "Tauro";
        else	  return "Geminis";
    } else if(month == "Junio"){
        if(day<22) return "Geminis";
        else	  return "Cancer";
    } else if(month == "Julio"){
        if(day<23) return "Cancer";
        else	  return "Leo";
    } else if(month == "Agosto"){
        if(day<23) return "Leo";
        else	  return "Virgo";
    } else if(month == "Septiembre"){
        if(day<24) return "Virgo";
        else	  return "Libra";
    } else if(month == "Octubre"){
        if(day<25) return "Libra";
        else	  return "Escorpio";
    } else if(month == "Noviembre"){
        if(day<23) return "Escorpio";
        else	  return "Sagitario";
    } else if(month == "Diciembre"){
        if(day<22) return "Sagitario";
        else	  return "Capricornio";
    }

    return "Fecha invalida";
}

int main(){
    int day;
    string month;
    cout << "Dia en que nacio: ";
    cin >> day;
    cout << "Nombre del mes en que nacio: ";
    cin >> month;
    cout << "Su signo es: " << signoZodiacal(day, month);
}