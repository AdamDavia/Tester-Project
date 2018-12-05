#include "allele.h"
#include <iostream>

using namespace std;

Allele::Allele()
{
}
Allele::Allele(string Name, string Type, string Sequence)
{
	variantName = Name;
	variantType = Type;
	nucleotideSequence = Sequence;
}
string Allele::getName()
{
	return variantName;
}

void Allele::setName(string newName)
{
	variantName = newName;
}

string Allele::getType()
{
	return variantType;
}
void Allele::setType(string newType)
{
	variantType = newType;
}
string Allele::getNS()
{
	return nucleotideSequence;
}
void Allele::setNS(string newNS)
{
	nucleotideSequence = newNS;
}
void Allele::createAllele()
{
	cout << "Please enter the variant name." << endl;
	getline(cin, variantName);
	cin.clear();
	cin.ignore(1000, '\n');

	cout << "Please enter the variant type." << endl;
	getline(cin, variantType);
	cin.clear();
	cin.ignore(1000, '\n');
}