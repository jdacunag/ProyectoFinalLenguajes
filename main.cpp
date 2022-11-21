#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <string.h>
#include <fstream>
#include <cstdio>
#include <cstring>
using namespace std;


int main(){
  cout<<"Nicolas Peña y Juan Diego Acuña"<<endl;
  cout<<endl<<"--------------------------------"<<endl;
  cout<<endl<<"¡¡Bienvenido de nuevo usuario!!"<<endl;
  cout<<"Nota: ¡¡Usar solo estas palabras para cada oracion!!"<<endl;
  cout<<endl<<"Pronombres: Nosotros, Ellos, Yo, Juan, Maria"<<endl;
  cout<<"Verbos: Ser/Estar, Ir, Comer, Jugar, Hablar"<<endl;
  cout<<"Sustantivos: Casa, Pizza "<<endl;
  cout<<"Articulos: El, Las, La, Los"<<endl;
  cout<<"Adjetivos: Azul, Lindo/a, Feo/a, Mucho, Poco"<<endl;
  cout<<endl<<"--------------------------------"<<endl;
  cout<<endl<<"Ingrese una oracion para validar..."<<endl<<""<<endl;
  
  char palabra[100];
  int contador = 0;
  cin.getline(palabra,100,'\n');

  //dividimos la oracion
  char *ptr;
  ptr = strtok(palabra,", ");
  while(ptr != NULL){
    cout<<ptr<<endl;
    ptr = strtok(NULL, ", ");
  }
}