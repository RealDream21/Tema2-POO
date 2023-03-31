#include "persoana.h"

Persoana::Persoana(const std::string& numeInit, const std::string& cnpInit, const int idInit) : id(idInit), nume(numeInit), cnp(cnpInit) { std::cout << "Constructor persoana cu dublu referinta\n"; }

Persoana::Persoana(const std::string&& numeInit, const std::string& cnpInit, const int idInit) : id(idInit), nume(numeInit), cnp(cnpInit) { std::cout << "Constructor persoana primul cu move al doilea referinta\n "; }

Persoana::Persoana(const std::string& numeInit, const std::string&& cnpInit, const int idInit) : id(idInit), nume(numeInit), cnp(cnpInit) { std::cout << "Constructor persoana primul cu referinta al doilea cu move\n"; }

Persoana::Persoana(const std::string&& numeInit, const std::string&& cnpInit, const int idInit) : id(idInit), nume(numeInit), cnp(cnpInit) { std::cout << "Constructor persoana ambele cu move\n"; }

Persoana::Persoana(const Persoana& other) : id(other.id), nume(other.nume), cnp(other.cnp) { std::cout << "Constructor de copiere la persoana\n"; }

Persoana::Persoana()
{
	id = -1;
	nume = "Neinitializat\n";
	cnp = "Neinitializat\n";
	std::cout << "Constructor default de la persoana\n";
}

void Persoana::showInfo()const
{
	std::cout << "Persoana nu este un abonat\n";
	std::cout << "Nume: " << nume << std::endl;
	std::cout << "CNP: " << cnp << std::endl;
}


Abonat::Abonat(const std::string& nr_telefonInit, const std::string& numeInit, const std::string& cnpInit, const int idInit) : nr_telefon(nr_telefonInit), Persoana(numeInit, cnpInit, idInit) { std::cout << "Constructor de Abonat de la 0 cu referinta\n"; }

Abonat::Abonat(const std::string&& nr_telefonInit, const std::string&& numeInit, const std::string&& cnpInit, const int idInit) : nr_telefon(nr_telefonInit), Persoana(numeInit, cnpInit, idInit) { std::cout << "Constructor de Abonat plecand de la 0 cu move\n"; }

Abonat::Abonat(const std::string& nr_telefonInit, const Persoana& persoanaInit) : nr_telefon(nr_telefonInit), Persoana(persoanaInit) { std::cout << "Constructor aboant plecand de la persoana cu referinta la nr_telefon\n"; }

Abonat::Abonat(const std::string&& nr_telefonInit, const Persoana& persoanaInit) : nr_telefon(nr_telefonInit), Persoana(persoanaInit) { std::cout << "Constructor abonat plecand de la persoana cu move la nr_telefon\n"; }

Abonat::Abonat(const std::string& nr_telefonInit, const Persoana& persoanaInit, const Abonament& abonamentInit): nr_telefon(nr_telefonInit), Persoana(persoanaInit)
{
	abonament = abonamentInit;
	std::cout<< "Constructor Abonat plecand de la persoana si abonament cu referinta la nr_telefonInit\n";
}
Abonat::Abonat(const std::string&& nr_telefonInit, const Persoana& persoanaInit, const Abonament& abonamentInit): nr_telefon(nr_telefonInit), Persoana(persoanaInit)
{
	abonament = abonamentInit;
	std::cout<< "Constructor Abonat plecand de la persoana si abonament cu move la nr_telefonInit\n";
}

Abonat::Abonat() : Persoana()
{
	nr_telefon = "Neinitializat\n";
	std::cout << "Constructor default de la Abonat\n";
}

void Abonat::showInfo()const
{
	std::cout << "Persoana este un abonat\n";
	std::cout << "Numar de telefon: " << nr_telefon << std::endl;
	std::cout << "Nume: " << nume << std::endl;
	std::cout << "CNP: " << cnp << std::endl;
	std::cout << "Informatii despre abonament: \n";
	abonament.showInfo();//poate un cout << abonament;
}
