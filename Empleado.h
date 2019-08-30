/*
 * =====================================================================================
 *
 *       Filename:  Empleado.h
 *
 *    Description:  Definición de la Clase Empleado
 *
 *        Created:  2019-08-22
 *
 *         Author:  José Rafael Jiménez Arce jrjimearce@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */
#ifndef EMPLEADOPUNTEROS_EMPLEADO_H
#define EMPLEADOPUNTEROS_EMPLEADO_H


#include <string>

const int NUMEROEMPLEADO = 100;

class Empleado {

protected:

	int id;
	std::string nombre;
	int anioExp;
	float salarioBase;
	bool suerte;


private:
	static void revisionSalario(bool*);
	float aumentarSalario(int *);

public:

	Empleado();

	Empleado(const std::string &, int &, float);

	std::string obenerReporteEmpleados();

	void setNombre(std::string );
	void setAnioExp(int );
	void setSalarioBase(float );

	int getId();
	std::string getNombre();
	int getAnioExp();
	float getSalarioBase();

};

#endif //EMPLEADOPUNTEROS_EMPLEADO_H