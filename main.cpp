/*
Programa_44
Hacer un programa que llene una tabla de 3 x 3.
Calcular la suma de cada renglon y almacenarla en un vector,
la suma de cada columna y almacenarla en otro vector.
Imprimir: los dos vectores resultantes y la tabla

Estructura for y arreglos bidimencionales
Autor: Luis Alberto García Rodríguez
N° lista 11
Fecha: 19 de marzo de 2015
*/

#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main()
{
    int matrix [3] [3], j, i, sumaf[3],sumac[3];

for (i=0;i<3;i++)
{
    sumaf [i]=0;
}

for (j=0;j<3;j++)
{
    sumac [j]=0;
}

for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
    matrix[i][j]=0;
         }
    }

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cout<<"introduce los valores de la matriz fila: "<<i<<" columna: "<<j<<"  ";
            cin>>matrix[i][j];
            sumaf[i]=sumaf[i]+matrix[i][j];
            sumac[j]=sumac[j]+matrix[i][j];
       }
    }

cout<<"\n\n";

cout<<"\n\nCreando matriz"<<"\n\n";
    Sleep(500);
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
        cout<<"\t "<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }

Sleep(5000);
cout<<"\n\n La suma de las filas es: \n\n";
    for (i=0; i<3; i++)
    {
    cout<<"\t fila:    "<<i<<"      "<<sumaf[i]<<"\n";
    }
    cout<<"\n";

cout<<"La suma de las columnas es: \n\n";

Sleep(500);
    for (i=0; i<3; i++)
    {
    cout<<"\t Columna: "<<i<<"      "<<sumac[i]<<"\n";
    }
    cout<<"\n";

cout<<"\n\n";

system ("pause");
return 0;
}
