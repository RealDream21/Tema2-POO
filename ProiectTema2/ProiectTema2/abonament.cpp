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
	if (abonament == nullptr) {
		os << "Nu exista abonamentul\n";
		return os;
	}
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

std::istream& operator>>(std::istream& is, Abonament& abonament)
{
	std::cout << "Abonamentul este de tip standard\n";
	std::cout << "Dati numele abonamentului: \n";
	//is.get();
	is >> abonament.nume;
	std::cout << "Dati pretul abonamentului: \n";
	//is.get();
	is >> abonament.pret;
	std::cout << "Dati perioada abonamentului: \n";
	//is.get();
	is >> abonament.perioada;
	return is;
}

std::istream& operator>>(std::istream& is, Abonament* abonament)
{
	if (abonament == nullptr) {
		std::cout << "Abonamentul nu exista\n";
		return is;
	}
	if (dynamic_cast<Abonament_premium*>(abonament) == nullptr) {
		is >> *abonament;
	}
	else {
		is >> *dynamic_cast<Abonament_premium*>(abonament);
	}
	return is;
}

void Abonament::showInfo() const
{
	std::cout << "Abonamentul este de tip STANDARD\n";
	std::cout << "Denumirea abonamentului: " << nume << std::endl;
	std::cout << "Pretul abonamentului: " << pret << std::endl;
	std::cout << "Perioada abonamentului(luni): " << perioada << std::endl;
}

void Abonament::setInfo()
{
	std::cout << "Dati informatiile pentru abonamentul standard:\n";
	std::cout << "Numele: \n";
	std::cin >> this->nume;
	std::cout << "Pret: \n";
	std::cin >> this->pret;
	std::cout << "Perioada: \n";
	std::cin >> this->perioada;
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

Abonament_premium::Abonament_premium(const Abonament& other) : Abonament(other)
{
	this->reducere = -1;
	std::cout << "Constructor de copiere la abonament_premium cu abonament\n";
}

Abonament_premium::Abonament_premium()
{
	this->reducere = -1;
	std::cout << "Constructor default de la abonament_premium\n";
}

Abonament_premium& Abonament_premium::operator=(const Abonament_premium& other)
{
	reducere = other.reducere;
	nume = other.nume;
	pret = other.pret;
	perioada = other.perioada;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Abonament_premium& abonament_premium)
{
	os << "Abonamentul este de tip PREMIUM\n";
	os << "Denumriea abonamentului: " << abonament_premium.nume << std::endl;
	os << "Pretul abonamentului: " << abonament_premium.pret << std::endl;
	os << "Perioada abonamentului(luni): " << abonament_premium.perioada << std::endl;
	os << "Reducerea specifica abonamentului premium: " << abonament_premium.reducere << std::endl;
	return os;
}
std::ostream& operator<<(std::ostream& os, const Abonament_premium* abonament_premium)
{
	//os << (*abonament_premium); ??? se poate si asa ???
	os << "Abonamentul este de tip PREMIUM\n";
	os << "Denumriea abonamentului: " << abonament_premium->nume << std::endl;
	os << "Pretul abonamentului: " << abonament_premium->pret << std::endl;
	os << "Perioada abonamentului(luni): " << abonament_premium->perioada << std::endl;
	os << "Reducerea specifica abonamentului premium: " << abonament_premium->reducere << std::endl;
	return os;
}

std::istream& operator>>(std::istream& is, Abonament_premium& abonament_premium)
{

	std::cout << "Abonamentul este de tip premium\n";
	is >> dynamic_cast<Abonament&>(abonament_premium);
	std::cout << "Dati reducerea:\n";
	is >> abonament_premium.reducere;
	return is;
}

std::istream& operator>>(std::istream& is, Abonament_premium* abonament_premium)
{
	//std::cout << "Abonamentul este de tip premium\n";
	is >> *abonament_premium;
	//std::cout << "Dati reducerea:\n";
	//is >> abonament_premium->reducere;
	return is;
}

void Abonament_premium::showInfo() const
{
	std::cout << "Abonamentul este de tip PREMIUM\n";
	std::cout << "Denumirea abonamentului: " << nume << std::endl;
	std::cout << "Pretul abonamentului: " << pret << std::endl;
	std::cout << "Perioada abonamentului(luni): " << perioada << std::endl;
	std::cout << "Reducerea specifica abonamentului premium: " << reducere << std::endl;
}

void Abonament_premium::setInfo()
{
	std::cout << "Dati informatiile pentru abonamentul premium:\n";
	std::cout << "Numele abonamentului: \n";
	std::cin >> this->nume;
	std::cout << "Pretul abonamentului: \n";
	std::cin >> this->pret;
	std::cout << "Perioada abonamentului(luni): \n";
	std::cin >> this->perioada;
	std::cout << "Reducere: \n";
	std::cin >> this->reducere;
	return;
}