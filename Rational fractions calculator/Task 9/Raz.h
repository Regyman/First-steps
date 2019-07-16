#pragma once

class Raz
{
private:

	int chisl;
	unsigned int znam;

	
public:

	

	int Equal(Raz i, Raz i2);

	Raz sum(Raz i, Raz i2);

	Raz razn(Raz i, Raz i2);
	
    Raz comp(Raz i, Raz i2);

	Raz dev(Raz i, Raz i2);

	int getZnam();
	
	int getChisl();

	void setChisl(int chisl);

	void setZnam(int znam);

	Raz(int chisl=0, int znam=0);
};

