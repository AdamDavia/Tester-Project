/*	Project:    Nia Pham
	Name:       YOUR NAME GOES HERE
    Partner:    PARTNER'S NAME IF ANY
    Class:      example: CSC 1810 - Section 1
*/

#include <iostream>
#include <sstream>
#include "allele.h"
#include "gene.h"
#include "chromosome.h"
#include <vector>

using namespace std;

void menu(int &menuChoice)
{
	cout << "1: Create chromosome" << endl;
	cout << "2: Analyze chrmosome" << endl;
	cout << "3: Output chromosome to file" << endl;
	cout << "4: Input chromosome from file" << endl;
	cout << "5: Combine chromosomes" << endl;
	cout << "6: Exit" << endl;
	cout << "Please enter your choice (1-5)" << endl;

	cin >> menuChoice;
}

int main(int argc, char *argv[])
{
	int menuChoice = 0;

	vector<chrom> Chromosomes;

	string gName;
	string gTrait;
	string nucleotideSequence;
	string vName;
	string vType;

	GeneinaBottle gene;
	chrom myChrom;
	Allele A;

	while (menuChoice != 6)
	{
		menu(menuChoice);
		if (menuChoice == 1)
		{

			string chromosome = " ";
			cout << "What is the name of the new gene?" << endl;
			cin >> gName;
			gene.setGeneName(gName);
			cout << "What is the gene trait?" << endl;
			cin >> gTrait;
			gene.setGeneTrait(gTrait);

			cout << "What is the allele A nucleotide sequence?" << endl;
			cin >> nucleotideSequence;
			A.setNS(nucleotideSequence);

			cout << "What is the allele A variant?" << endl;
			cin >> vName;
			A.setName(vName);
			cout << "what is the allele A type?" << endl;
			cin >> vType;
			A.setType(vType);
			Allele A(nucleotideSequence, vName, vType);
			gene.setAlleleA(A);

			cout << "What is the allele B nucleotide sequence?" << endl;
			cin >> nucleotideSequence;
			A.setName(vName);
			cout << "What is the allele B variant?" << endl;
			cin >> vName;
			A.setType(vType);
			cout << "What is the allele B type?" << endl;
			cin >> vType;
			A.setType(vType);

			Allele B(nucleotideSequence, vName, vType);
			gene.setAlleleB(B);

			myChrom.AddGene(gene);
			Chromosomes.push_back(myChrom);

			gene.setGeneName(gName);
			gene.setGeneTrait(gTrait);

			cout << "Name:  " << gene.GetName() << endl;
			cout << "Genetic Trait:  " << gene.GetTraitType() << endl;
			gene.FindGene();
		}
		else if (menuChoice == 2)
		{
			for (unsigned int i = 0; i < Chromosomes.size(); i++)
			{
				for (unsigned int j = 0; j < Chromosomes.at(i).GetGenes().size(); j++)
				{
					cout << Chromosomes.at(i).GetGenes().at(j).GetName() << "," << Chromosomes.at(i).GetGenes().at(j).GetTraitType() << "," << Chromosomes.at(i).GetGenes().at(j).GetAlleleA().getName() << "," << Chromosomes.at(i).GetGenes().at(j).GetAlleleA().getType() << "," << Chromosomes.at(i).GetGenes().at(j).GetAlleleA().getNS() << "," << Chromosomes.at(i).GetGenes().at(j).GetAlleleB().getName() << "," << Chromosomes.at(i).GetGenes().at(j).GetAlleleB().getType() << "," << Chromosomes.at(i).GetGenes().at(j).GetAlleleB().getNS();
				}
			}
		}
		else if (menuChoice == 3)
		{
			cout << "What file would you like to export to?" << endl;
			string outputFile;

			ofstream myfile;

			myfile.open(outputFile);

			for (unsigned int i = 0; i < Chromosomes.size(); i++)
			{
				for (unsigned int j = 0; j < Chromosomes.at(i).GetGenes().size(); j++)
				{
					myfile << Chromosomes.at(i).GetGenes().at(j).GetName() << "," << Chromosomes.at(i).GetGenes().at(j).GetTraitType() << "," << Chromosomes.at(i).GetGenes().at(j).GetAlleleA().getName() << "," << Chromosomes.at(i).GetGenes().at(j).GetAlleleA().getType() << "," << Chromosomes.at(i).GetGenes().at(j).GetAlleleA().getNS() << "," << Chromosomes.at(i).GetGenes().at(j).GetAlleleB().getName() << "," << Chromosomes.at(i).GetGenes().at(j).GetAlleleB().getType() << "," << Chromosomes.at(i).GetGenes().at(j).GetAlleleB().getNS();
				}
			}
			myfile.close();
		}
		else if (menuChoice == 4)
		{
			cout << "What file would you like to import from?" << endl;
			string outputFile;

			getline(cin, outputFile);
			string line;

			ifstream myfile;

			myfile.open(outputFile);
			while (getline(myfile, line))
			{

				stringstream ss(line);
				vector<string> row;
				string data;
				while (getline(ss, data, ','))
				{
					row.push_back(data);
				}
				string tempName = row.at(0);
				string tempTraitType = row.at(1);
				Allele tempAlleleA = Allele(row.at(2), row.at(3), row.at(4));
				Allele tempAlleleB = Allele(row.at(5), row.at(6), row.at(7));
				string tempOneType;
				string tempTwoType;

				myChrom.AddGene(GeneinaBottle(tempName, tempTraitType, tempAlleleA, tempAlleleB));
			}
			myfile.close();
		}
		else if (menuChoice == 5)
		{
			if (Chromosomes.size() > 1)
			{
				int entry1;
				int entry2;
				cout << "Please choose a chromosome." << endl;
				cin >> entry1;

				cout << "Please choose a chromosome." << endl;
				cin >> entry2;

				Chromosomes.push_back(Chromosomes.at(entry1 - 1) + Chromosomes.at(entry2 - 1));
				for (unsigned int i = 0; i < Chromosomes.size(); i++)
				{
					for (unsigned int j = 0; j < Chromosomes.at(i).GetGenes().size(); j++)
					{
						cout << Chromosomes.at(i).GetGenes().at(j).GetName() << "," << Chromosomes.at(i).GetGenes().at(j).GetTraitType() << "," << Chromosomes.at(i).GetGenes().at(j).GetAlleleA().getName() << "," << Chromosomes.at(i).GetGenes().at(j).GetAlleleA().getType() << "," << Chromosomes.at(i).GetGenes().at(j).GetAlleleA().getNS() << "," << Chromosomes.at(i).GetGenes().at(j).GetAlleleB().getName() << "," << Chromosomes.at(i).GetGenes().at(j).GetAlleleB().getType() << "," << Chromosomes.at(i).GetGenes().at(j).GetAlleleB().getNS();
					}
				}
			}
		}
		else
		{
			cout << "Peace." << endl;
			break;
		}
	}

	Allele myAllele;

	{
		char c;
		cout << "Hit enter to exit:";
		cin.get(c);
	}
	return 0;
}