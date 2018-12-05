#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "chromosome.h"
#include "gene.h"
#include "allele.h"

using namespace std;

void chrom::AddGene(GeneinaBottle g)
{
	this->genes.push_back(g);
}

void chrom::create(){

};
void chrom::analyze(){

};
void chrom::output()
{

	cout << "What file would you like to import from?" << endl;
	string outputFile;
	getline(cin, outputFile);

	ofstream myfile;

	myfile.open(outputFile);

	for (unsigned i = 0; i < genes.size(); i++)
	{
		//Data needs to be stored.
		//myfile >> chromosomes.at(i);
	}
	myfile.close();
};
void chrom::input()
{

	cout << "What file would you like to export to?" << endl;
	string inputFile;
	getline(cin, inputFile);
};
void chrom::combine(){

};
chrom chrom::operator+(chrom c)
{
	chrom newChrom;
	if (this->genes.size() < c.genes.size())
	{
		for (unsigned int i = 0; i < this->genes.size(); i++)
		{
			string newAlleleAName;
			string newAlleleAType;
			string newAlleleANS;
			string newAlleleBName;
			string newAlleleBType;
			string newAlleleBNS;
			string newName;
			string newTraitType;
			if (this->genes.at(i).GetAlleleA().getType() == "dominant")
			{
				newAlleleAName = this->genes.at(i).GetAlleleA().getName();
				newAlleleAType = this->genes.at(i).GetAlleleA().getType();
				newAlleleANS = this->genes.at(i).GetAlleleA().getNS();
			}
			else
			{
				newAlleleAName = c.genes.at(i).GetAlleleA().getName();
				newAlleleAType = c.genes.at(i).GetAlleleA().getType();
				newAlleleANS = c.genes.at(i).GetAlleleA().getNS();
			}
			if (this->genes.at(i).GetAlleleB().getType() == "dominant")
			{
				newAlleleAName = this->genes.at(i).GetAlleleB().getName();
				newAlleleAType = this->genes.at(i).GetAlleleB().getType();
				newAlleleANS = this->genes.at(i).GetAlleleB().getNS();
			}
			else
			{
				newAlleleBName = c.genes.at(i).GetAlleleB().getName();
				newAlleleBType = c.genes.at(i).GetAlleleB().getType();
				newAlleleBNS = c.genes.at(i).GetAlleleB().getNS();
			}
			newName = genes.at(i).GetName();
			newTraitType = genes.at(i).GetTraitType();
			newChrom.genes.push_back(GeneinaBottle(newName, newTraitType, Allele(newAlleleAName, newAlleleAType, newAlleleANS), Allele(newAlleleBName, newAlleleBType, newAlleleBNS)));
		}
		return newChrom;
	}
	else
	{
		for (unsigned int i = 0; i < c.genes.size(); i++)
		{
			string newAlleleAName;
			string newAlleleAType;
			string newAlleleANS;
			string newAlleleBName;
			string newAlleleBType;
			string newAlleleBNS;
			string newName;
			string newTraitType;
			if (this->genes.at(i).GetAlleleA().getType() == "dominant")
			{
				newAlleleAName = this->genes.at(i).GetAlleleA().getName();
				newAlleleAType = this->genes.at(i).GetAlleleA().getType();
				newAlleleANS = this->genes.at(i).GetAlleleA().getNS();
			}
			else
			{
				newAlleleAName = c.genes.at(i).GetAlleleA().getName();
				newAlleleAType = c.genes.at(i).GetAlleleA().getType();
				newAlleleANS = c.genes.at(i).GetAlleleA().getNS();
			}
			if (this->genes.at(i).GetAlleleB().getType() == "dominant")
			{
				newAlleleAName = this->genes.at(i).GetAlleleB().getName();
				newAlleleAType = this->genes.at(i).GetAlleleB().getType();
				newAlleleANS = this->genes.at(i).GetAlleleB().getNS();
			}
			else
			{
				newAlleleBName = c.genes.at(i).GetAlleleB().getName();
				newAlleleBType = c.genes.at(i).GetAlleleB().getType();
				newAlleleBNS = c.genes.at(i).GetAlleleB().getNS();
			}
			newName = genes.at(i).GetName();
			newTraitType = genes.at(i).GetTraitType();
			newChrom.genes.push_back(GeneinaBottle(newName, newTraitType, Allele(newAlleleAName, newAlleleAType, newAlleleANS), Allele(newAlleleBName, newAlleleBType, newAlleleBNS)));
		}
		return newChrom;
	}
}