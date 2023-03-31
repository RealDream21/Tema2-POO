#pragma once
#include <string>
#include <iostream>

//functie de afisare tipul de abonament adica virtual intre abonament si abonament_premium

class Abonament
{
protected:
	std::string nume;
	float pret;
	int perioada;
public:
	Abonament(const std::string&nume, const float pret, const int perioada);
	Abonament(const std::string&&nume, const float pret, const int perioada);
	Abonament(const Abonament&abonament);
	Abonament();
	Abonament& operator=(const Abonament&abonament);
	friend std::ostream& operator<<(std::ostream&os, const Abonament&abonament);
	friend std::ostream& operator<<(std::ostream&os, Abonament* abonament_ptr);
	virtual void showInfo()const;
};


class Abonament_premium : public Abonament
{
	int reducere;
public:
	Abonament_premium(const int reducere, const std::string&nume, const float pret, const int perioada);
	Abonament_premium(const int reducere, const std::string&&nume, const float pret, const int perioada);
	Abonament_premium(const int reducere, const Abonament&abonament);
	Abonament_premium(const Abonament_premium&abonament_premium);
	Abonament_premium();
	friend std::ostream& operator<<(std::ostream& os, const Abonament_premium& abonament_premium);
	friend std::ostream& operator<<(std::ostream& os, const Abonament_premium* abonament_premium_ptr);

	void showInfo()const override;
};
