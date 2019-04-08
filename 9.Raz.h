#pragma once

class Raz
{
private:

	int chisl;
	unsigned int znam;

	
public:

	void show();

	int Equal(Raz i, Raz i2);

	Raz sum(Raz i, Raz i2);

	Raz razn(Raz i, Raz i2);
	
    Raz comp(Raz i, Raz i2);

	Raz dev(Raz i, Raz i2);

	int getZnam();
	
	int getChisl();

	void setChisl(int chisl);

	void setZnam(int znam);

	Raz();
	
	~Raz();

	Raz(int chisl, int znam);
};
