#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  private:
    double salarioHora;  
    double quotaMensalVendas;  
  public:	
    double pagamentoMes(double horasTrabalhadas) {
    	double horasTotais = horasTrabalhadas;
	double pagamentoTotal;
	const double horasRegulamentadas=8;  
	//Cálculo de hora extra (+50% se horasTrabalhadas > 8)
        if (horasTrabalhadas > horasRegulamentadas) {
        	double horasExtras = horasTrabalhadas - horasRegulamentadas;
        	horasTotais= horasTotais+(horasExtras / 2);
        }
	pagamentoTotal= horasTotais * salarioHora;    
	return pagamentoTotal;
    }
};

#endif
