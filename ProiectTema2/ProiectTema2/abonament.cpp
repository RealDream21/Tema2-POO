#include "abonament.h"

Abonament::Abonament(const std::string& nume_abonament, const float prt, const int per) : nume(nume_abonament), pret(prt), perioada(per)
{
	std::cout << "Constructor cu parametru prin referinta la abonament\n";
}

Abonament::Abonament(const std::string&& nume_abonament, const float prt, const int per) : nume(nume_abonament), pret(prt), perioada(per)
{
	std::cout << "Constructor cu move\n";
}

Abonament::Abonament(const Abonament& other): nume(other.nume), pret(other.pret), perioada(other.perioada)
{
	std::cout << "Cosntructor de copiere la Abonament\n"; 
}

Abonament::Abonament() 
{
	nume = "Neinitializat";
	pret = -1;
	perioada = -1;
	std::cout << "Constructor default\n";
}

Abonament& Abonament::operator=(const Abonament& other) 
{
	nume = other.nume;
	pret = other.pret;
	perioada = other.perioada;
	return *this;
}

Abonament_premium::Abonament_premium(const int red, const std::string& nume_abonament, const float prt, const int per): Abonament(nume_abonament, prt, per), reducere(red) 
{
	std::cout << "Cosntructor cu parametru prin referinta la abonament_premium\n";
}

Abonament_premium::Abonament_premium(const int red, const std::string&& nume_abonament, const float prt, const int per): Abonament(nume_abonament, prt, per), reducere(red) //nu ar trb sa apeleze tot move constructor de la Abonament?
{
	std::cout << "Constructor cu move la abonament_premium\n";
}

Abonament_premium::Abonament_premium(const int red, const Abonament& aboanmentInit) : reducere(red), Abonament(aboanmentInit) 
{ 
	std::cout << "Constructor aboanament_premium plecand de la abonament\n"; 
}

Abonament_premium::Abonament_premium(const Abonament_premium& other) : reducere(other.reducere), Abonament(other)
{
	std::cout << "Constructor de copiere la abonament_premium\n";
}


Abonament_premium::Abonament_premium()
{
	this->reducere = -1;
	std::cout << "Constructor default de la abonament_premium\n";
}