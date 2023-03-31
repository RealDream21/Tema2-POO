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

std::ostream& operator<<(std::ostream& os, const Abonament& abonament)
{
	os << "Abonamentul este de tip STANDARD\n";
	os << "Numele abonamentului: " << abonament.nume << std::endl;
	os << "Pretul abonamentului: " << abonament.pret << std::endl;
	os << "Perioada abonamentului: " << abonament.perioada << std::endl;
	return os;
}
std::ostream& operator<<(std::ostream& os, Abonament* abonament)
{
	if (dynamic_cast<Abonament_premium*>(abonament) == nullptr) {
		os << "Abonamentul este de tip STANDARD\n";
		os << "Numele abonamentului: " << abonament->nume << std::endl;
		os << "Pretul abonamentului: " << abonament->pret << std::endl;
		os << "Perioada abonamentului: " << abonament->perioada << std::endl;
	}
	else {
		os << dynamic_cast<Abonament_premium*>(abonament);
	}
	return os;
}

void Abonament::showInfo() const
{
	std::cout << "Abonamentul este de tip STANDARD\n";
	std::cout << "Denumirea abonamentului: " << nume << std::endl;
	std::cout << "Pretul abonamentului: " << pret << std::endl;
	std::cout << "Perioada abonamentului(luni): " << perioada << std::endl;
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

std::ostream& operator<<(std::ostream& os, const Abonament_premium& abonament_premium)
{
	os << "Abonamentul este de tip PREMIUM\n";
	os << "Denumriea abonamentului: " << abonament_premium.nume << std::endl;
	os << "Pretul abonamentului: " << abonament_premium.pret << std::endl;
	os << "Perioada abonamentului: " << abonament_premium.perioada << std::endl;
	os << "Reducerea specifica abonamentului premium: " << abonament_premium.reducere << std::endl;
	return os;
}
std::ostream& operator<<(std::ostream& os, const Abonament_premium* abonament_premium)
{
	os << "Abonamentul este de tip PREMIUM\n";
	os << "Denumriea abonamentului: " << abonament_premium->nume << std::endl;
	os << "Pretul abonamentului: " << abonament_premium->pret << std::endl;
	os << "Perioada abonamentului: " << abonament_premium->perioada << std::endl;
	os << "Reducerea specifica abonamentului premium: " << abonament_premium->reducere << std::endl;
	return os;
}

void Abonament_premium::showInfo() const
{
	std::cout << "Abonamentul este de tip PREMIUM\n";
	std::cout << "Denumirea abonamentului: " << nume << std::endl;
	std::cout << "Pretul abonamentului: " << pret << std::endl;
	std::cout << "Perioada abonamentului(luni): " << perioada << std::endl;
}
