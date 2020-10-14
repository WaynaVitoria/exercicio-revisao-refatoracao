#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {
  private:
    double quotaMensalVendas; 
  public:	
    double quotaTotalAnual() {
    	 const double meses= 12;
    	 double pagamentoTotal= quotaMensalVendas * meses;	    
    	 return pagamentoTotal;
    }	
};

