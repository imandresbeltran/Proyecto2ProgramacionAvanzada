#include "Ejercicio1Recursivo.h"

int SumaMultiplicacion(int n1, int n2) {
	
	if (n1 == 0 || n2 == 0) return 0;
	else if (n1 != 0 && n2 != 0) {
		int multiplicacion = n1 + SumaMultiplicacion(n1, n2 - 1);
		return multiplicacion;
	}

	
}

