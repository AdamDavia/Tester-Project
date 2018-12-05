#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "gene.h"
#include "allele.h"

using namespace std;
GeneinaBottle::GeneinaBottle(){}
GeneinaBottle::GeneinaBottle(string inputName, string inputTraitType, Allele alleleA, Allele alleleB){
	name = inputName;
	traitType = inputTraitType;
	a = alleleA;
	b = alleleB;
}

void GeneinaBottle::createGene()
{
	flaredGene = " ";
	cout << "Please name your gene" << endl;
	getline(cin, name);
	cin.clear();
	cin.ignore(1000, '\n');

	cout << "Please enter your trait type." << endl;
	getline(cin, traitType);
	cin.clear();
	cin.ignore(1000, '\n');

	a.createAllele();
	b.createAllele();
};

string GeneinaBottle::GetName()
{
	return name;
};
string GeneinaBottle::GetTraitType()
{
	return traitType;
};
Allele GeneinaBottle::GetAlleleA()
{
	return a;
};
Allele GeneinaBottle::GetAlleleB()
{
	return b;
};

void GeneinaBottle::setAlleleA(Allele A)
{
	a = A;
}

void GeneinaBottle::setAlleleB(Allele B)
{
	b = B;
}

void GeneinaBottle::setGeneName(string nameToBe)
{
	this->name = nameToBe;
}

void GeneinaBottle::setGeneTrait(string typeToBe)
{
	this->traitType = typeToBe;
}

void GeneinaBottle::FindGene()
{
	if (a.getType() == "dominant")
	{
		cout << "Expressed Allele:  " << a.getName() << " - " << a.getType() << endl;
		cout << "Nucleotide Sequence:  " << a.getNS() << endl;
	}
	else
	{
		cout << "Expressed Allele:  " << b.getName() << " - " << b.getType() << endl;
		cout << "Nucleotide Sequence:  " << b.getNS() << endl;
	}
}