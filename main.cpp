#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main() {
  double horasTrabalhadas;
	
  Engenheiro primeiroEngenheiro;
  primeiroEngenheiro.nomeEmpregado = "Joao Snow";
  primeiroEngenheiro.salarioHora = 35;
  primeiroEngenheiro.numerosProjetos = 3; 
  horasTrabalhadas=9.5;	
	
  std::cout << "Nome: " << primeiroEngenheiro.nomeEmpregado<< std::endl;
  std::cout << "Salario Mes: " << primeiroEngenheiro.pagamentoMes(horasTrabalhadas) << std::endl;
  std::cout << "Projetos: " << primeiroEngenheiro.numerosProjetos << std::endl;
  std::cout << std::endl;
  
  Engenheiro segundoEngenheiro;
  segundoEngenheiro.nomeEmpregado = "Daniela Targaryen";
  segundoEngenheiro.salarioHora = 30;
  segundoEngenheiro.numerosProjetos = 1; 
  horasTrabalhadas=8;	
	
  std::cout << "Nome: " << segundoEngenheiro.nomeEmpregado<< std::endl;
  std::cout << "Salario Mes: " << segundoEngenheiro.pagamentoMes(horasTrabalhadas) << std::endl;
  std::cout << "Projetos: " << segundoEngenheiro.numerosProjetos << std::endl;  
  std::cout << std::endl;
  
  Engenheiro terceiroEngenheiro;
  terceiroEngenheiro.nomeEmpregado = "Bruno Stark";
  terceiroEngenheiro.salarioHora = 30;
  terceiroEngenheiro.numerosProjetos = 2; 
  horasTrabalhadas=8;
	
  std::cout << "Nome: " << terceiroEngenheiro.nomeEmpregado << std::endl;
  std::cout << "Salario Mes: " << terceiroEngenheiro.pagamentoMes(horasTrabalhadas) << std::endl;
  std::cout << "Projetos: " << terceiroEngenheiro.numerosProjetos << std::endl;  
  std::cout << std::endl;
  
  
  Vendedor primeiroVendedor;
  primeiroVendedor.nomeEmpregado = "Tonho Lannister";
  primeiroVendedor.salarioHora = 20;
  primeiroVendedor.quotaMensalVendas = 5000;
  horasTrabalhadas=6;
	
  std::cout << "Nome: " << primeiroVendedor.nomeEmpregado << std::endl;
  std::cout << "Salario Mes: " << primeiroVendedor.pagamentoMes(horasTrabalhadas) << std::endl;  
  std::cout << "Quota vendas: " << primeiroVendedor.quotaTotalAnual() << std::endl;
  std::cout << std::endl;
  
  Vendedor segundoVendedor;
  segundoVendedor.nomeEmpregado= "Jose Mormont";
  segundoVendedor.salarioHora = 25;
  segundoVendedor.quotaMensalVendas = 3000;
  horasTrabalhadas=8;
  
  std::cout << "Nome: " << segundoVendedor.nomeEmpregado << std::endl;
  std::cout << "Salario Mes: " << segundoVendedor.pagamentoMes(horasTrabalhadas) << std::endl;  
  std::cout << "Quota vendas: " << segundoVendedor.quotaTotalAnual() << std::endl; 
  std::cout << std::endl;  
	
  Vendedor terceiroVendedor;
  terceiroVendedor.nomeEmpregado = "Sonia Stark";
  terceiroVendedor.salarioHora = 30;
  terceiroVendedor.quotaMensalVendas = 4000;
  horasTrabalhadas=8;
  
  std::cout << "Nome: " << terceiroVendedor.nomeEmpregado<< std::endl;
  std::cout << "Salario Mes: " << terceiroVendedor.pagamentoMes(horasTrabalhadas) << std::endl;  
  std::cout << "Quota vendas: " << terceiroVendedor.quotaTotalAnual() << std::endl;  
  
  return 0;	
}
