#pragma once
#include "abonament.h"

class Persoana
{
protected:
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
	virtual ~Persoana() = default;
	virtual void showInfo()const;
};

class Abonat : public Persoana
{
	//eventual trebuie rescrise toate functiile de constructor cu shared_ptr dar pentru ptr normal 
	std::string nr_telefon;
	std::shared_ptr<Abonament> abonament; //s-ar putea sa fie nevoie de pointer in cazul de abonament premium
public:
	Abonat(const std::string&nr_telefon, const std::string&nume, const std::string&cnp, const int id);
	Abonat(const std::string&&nr_telefon, const std::string&&nume, const std::string&&cnp, const int id);
	Abonat(const std::string&&nr_telefon, const std::string&&nume, const std::string&&cnp, const int id, std::shared_ptr<Abonament>& abonament); //<----- trebuie rescrisa pentru Abonament* abonament;
	Abonat(const std::string&nr_telefon, const Persoana&persoana);
	Abonat(const std::string&&nr_telefon, const Persoana&persoana);
	Abonat(const std::string&nr_telefon, const Persoana&persoana, std::shared_ptr<Abonament>&abonament); //<----- trebuie rescrisa pentru Abonament* abonament;
	Abonat(const std::string&&nr_telefon, const Persoana&persoana, std::shared_ptr<Abonament>&abonament); //<----- trebuie rescrisa pentru Abonament* abonament;
	Abonat(const Abonat&abonat); // de scris
	Abonat();
	void showInfo()const override;
};

