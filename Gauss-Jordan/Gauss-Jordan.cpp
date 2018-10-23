// Gauss-Jordan.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "conio.h"
#include "math.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;


void main() {
	int tamano = 0;
	double valor;
	double aux;
	
	//matriz[tamano][tamano]
	cout << "Cuantas incognitas seran?  ";
	cin >> tamano;
	cout << endl;

	string ecuacion;
	vector < vector<double>>matriz(tamano, vector<double>(tamano));
	vector < vector<double>>matrizAux(tamano, vector<double>(tamano));
	vector<double>resultadosAux(tamano, 0);
	vector<double>resultados(tamano, 0);
	vector<double>resMatriz(tamano);
	vector<double>resMatrizAux(tamano);

	cout << "Introduzca los valores para las variables Xi: " << endl;
	for (int i = 0; i < tamano; i++)
	{
		for (int j = 0; j < tamano; j++)
		{
			cout << "X[" << i << "][" << j << "] ";
			cin >> matriz[i][j];
		}
	}


	for (int i = 0, x = tamano; i < tamano; i++)
	{
		ecuacion = "";
		x = tamano;
		cout << "Escriba los resultados para la " << i << " ecuacion ";
		for (int j = 0; j < tamano; j++)
		{
			ecuacion += to_string(matriz[i][j]);
			ecuacion += "X" + to_string(x) + " + ";
			x--;
		}
		cout << ecuacion << " = ";
		cin >> resMatriz[i];

	}

	cout << "\nLa matriz quedo de la siguiente forma:\n";
	for (int i = 0; i < tamano; i++)
	{
		cout << "|";
		for (int j = 0; j < tamano; j++)
		{
			cout << setw(tamano) << setfill(' ') << matriz[i][j] << " ";
		}
		cout << "| = " << resMatriz[i] << endl;
	}

	//Division de Xnn para que se haga 1
	matrizAux = matriz;
	resMatrizAux = resMatriz;

	double Xnn = 0;
	double XnnAux = 0;
	int rep = 0;

	for (int k = 0; k < tamano; k++)
	{
		//Division para 1's
		for (int i = rep; i < tamano; i++)
		{
			Xnn = matriz[i][i];
			for (int j = 0; j < tamano; j++)
			{
				matrizAux[i][j] = matrizAux[i][j] / Xnn;
				resMatrizAux[i] = resMatrizAux[i] / Xnn;
			}
			rep++;
			break;
		}

		//Operacion para 0's
		for (int j = 0; j < tamano-1; j++)
		{
			//Fila actual * el elejido de la columna + el actual de la columna
			
		}
	}


	cout << "\nLos valores de las incognitas son:\n";
	for (int i = 0; i < tamano; i++)
	{
		cout << "X" << i << " " << resultados[i] << endl;
	}
	_getch();
}
