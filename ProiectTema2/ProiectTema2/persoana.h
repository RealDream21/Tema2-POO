#pragma once
#include "abonament.h"

class Persoana
{
	int id; //se poate schimba in const daca nu am cin
	std::string nume;
	std::string cnp;
public:
	Persoana(const std::string&nume, const std::string&cnp, const int id);
	Persoana(const std::string&&nume, const std::string&cnp, const int id);
	Persoana(const std::string&nume, const std::string&&cnp, const int id);
	Persoana(const std::string&&nume, const std::string&&cnp, const int id);
	Persoana(const Persoana& persoana);
	Persoana();
	void showInfo();
};

class Abonat : public Persoana
{
	//trebuie adaugat pt abonament deci e gresit ce am facut aici
	std::string nr_telefon;
	Abonament abonament; //s-ar putea sa fie nevoie de pointer in cazul de abonament premium
public:
	Abonat(const std::string&nr_telefon, const std::string&nume, const std::string&cnp, const int id);
	Abonat(const std::string&&nr_telefon, const std::string&&nume, const std::string&&cnp, const int id);
	Abonat(const std::string&nr_telefon, const Persoana&persoana);
	Abonat(const std::string&&nr_telefon, const Persoana&persoana);
	Abonat(const std::string&nr_telefon, const Persoana&persoana, const Abonament&abonament);
	Abonat(const std::string&&nr_telefon, const Persoana&persoana, const Abonament&abonament);
	Abonat();
	void showInfo();
};

