#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Allele
{
  private:
	string variantName;
	string variantType;
	string nucleotideSequence;

  public:
	Allele();
	Allele(string variantName, string variantType, string nucleotideSequence);

	string getName();
	void setName(string newName);

	string getType();
	void setType(string newType);

	string getNS();
	void setNS(string newNS);

	void createAllele();
};
