/*	Project:    Nia Pham
	Name:       YOUR NAME GOES HERE
    Partner:    PARTNER'S NAME IF ANY
    Class:      example: CSC 1810 - Section 1
*/

#include <iostream>
#include "allele.h"
#include "gene.h"
#include "chromosome.h"

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
		}
		else if (menuChoice == 2)
		{
			gene.setGeneName(gName);
			gene.setGeneTrait(gTrait);

			cout << "Name:  " << gene.GetName() << endl;
			cout << "Genetic Trait:  " << gene.GetTraitType() << endl;
			gene.FindGene();
		}
		else if (menuChoice == 3)
		{
			cout << "What file would you like to export to?" << endl;
		}
		else if (menuChoice == 4)
		{
			cout << "What file would you like to import from?" << endl;
			string outputFile;

			getline(cin, outputFile);
			string line = "";

			ifstream myfile;

			myfile.open(outputFile);
			while (getline(myfile, line))
			{
				stringstream fudge(line);
				vector<string> yah;
				yah.push_back(line);
			}
			myfile.close();
		}
		else if (menuChoice == 5)
		{
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