#include <iostream>
#include "Empleado.h"

int main() {
	Empleado empleado[4];

	empleado[0].setNombre("Mike");
	empleado[0].setAnioExp(2);
	empleado[0].setSalarioBase(1200000);

	empleado[1].setNombre("Sebastian");
	empleado[1].setAnioExp(3);
	empleado[1].setSalarioBase(1600000);

	empleado[2].setNombre("Carolina");
	empleado[2].setAnioExp(8);
	empleado[2].setSalarioBase(1800000);

	empleado[3].setNombre("Emma");
	empleado[3].setAnioExp(1);
	empleado[3].setSalarioBase(800000);

	for (int cont = 0; cont < 4; cont++)
	{
		std::cout << empleado[cont].obenerReporteEmpleados() << std::endl;
	}
	return 0;
}