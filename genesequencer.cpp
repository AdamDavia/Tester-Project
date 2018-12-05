/*#include "genesequencer.h"
#include <fstream>
void GeneSequencer::combine()
{
}
void GeneSequencer::create()
{
	chrom newChrom;
	newChrom.create();
	chromosomes.push_back(newChrom);
};
void GeneSequencer::analyze()
{
	for (unsigned int i = 0; i < chromosomes.size(); i++)
	{
		chromosomes.at(i).analyze();
	}
};
void GeneSequencer::input()
{
	chrom newChrom;
	newChrom.input();
	chromosomes.push_back(newChrom);
};
void GeneSequencer::output()
{
	cout << "Please enter the file name" << endl;
	ofstream file;
	string fileName;
	getline(cin, fileName);
	cin.clear();
	cin.ignore(1000, '\n');

	file.open(fileName, ios::app);

	for (unsigned int i = 0; i < chromosomes.size(); i++)
	{
		for (unsigned int j = 0; j < chromosomes.at(i).GetGenes().size(); j++)
		{

			file << chromosomes.at(i).GetGenes().at(i).GetName() << "," << chromosomes.at(i).GetGenes().at(i).GetTraitType() << "," << chromosomes.at(i).GetGenes().at(i).GetAlleleA().getName() << "," << chromosomes.at(i).GetGenes().at(i).GetAlleleA().getType() << "," << chromosomes.at(i).GetGenes().at(i).GetAlleleA().getNS() << "," << chromosomes.at(i).GetGenes().at(i).GetAlleleB().getName() << "," << chromosomes.at(i).GetGenes().at(i).GetAlleleB().getType() << "," << chromosomes.at(i).GetGenes().at(i).GetAlleleB().getNS();
		}
	}
};*/