#include "Empleado.h"
/*
 * =====================================================================================
 *
 *       Filename:  Empleado.cpp
 *
 *    Description:  Implementación de la Clase Empleado
 *
 *        Created:  2019-08-22
 *
 *         Author:  José Rafael Jiménez Arce jrjimearce@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include<stdlib.h>
#include<time.h>
#include "Empleado.h"

Empleado::Empleado()
{
	id = rand() % NUMEROEMPLEADO;
}



Empleado::Empleado(const std::string &nomb, int &aExperiencia, float salarioB) {

	nombre = nomb; 
	anioExp = aExperiencia;  
	salarioBase = salarioB;
	id = rand() % NUMEROEMPLEADO;
}


void Empleado::revisionSalario(bool *suerte)
{

	int num = rand()%3;

	if (num == 0)
	{
		*suerte = true;
	}
	else
	{
		*suerte = false;
	}
}

float Empleado::aumentarSalario(int *aExp)
{
	float salario = getSalarioBase();
	float aumento1 = 1.02;
	float aumento2 = 1.05;
	float nuevoSalario = 0;

	if (*aExp > 0 && *aExp < 3)
	{
		for (int contador = 0; contador < *aExp; contador++) {

			nuevoSalario = salario * aumento1;
			salario = nuevoSalario;
		}

	}
	else
		if (*aExp >= 3)
		{
			for (int contador = 0; contador < *aExp; contador++) {

				nuevoSalario = salario* aumento2;
				salario = nuevoSalario;
			}
		
		}
		else
		{
			nuevoSalario = salario;
		}
			return nuevoSalario;

}




std::string Empleado::obenerReporteEmpleados()
{
	std::string reporte = "";
	std::string revision = "";
	bool *lucky = &suerte ;
	revisionSalario(lucky);


	if (*lucky == true)
	{
		revision = "Si";
	}
	else
	{
		revision =  "No";
	}
	

	reporte = reporte + "Empleado # [" + std::to_string(getId()) + "]\n\tNombre [" + getNombre() + "]\n\t"
		+ "Años de experiencia [" + std::to_string(getAnioExp()) + "]\n\tSalario inicial [" + std::to_string(getSalarioBase())
		+ "]\n\tSalario acumulado [" + std::to_string(aumentarSalario(&anioExp)) + "]\n\tNecesita revision ["+revision+"]\n\t";

	

	return reporte;
}




void Empleado::setNombre(std::string nombres)
{
	nombre = nombres;
}


void Empleado::setAnioExp(int aEXP)
{
	anioExp = aEXP;
}

void Empleado::setSalarioBase(float salarioBa)
{
	salarioBase = salarioBa;
}

int Empleado::getId()
{
	return id;
}

std::string Empleado::getNombre()
{
	return nombre;
}


int Empleado::getAnioExp()
{
	return anioExp;
}


float Empleado::getSalarioBase()
{
	return salarioBase;
}


