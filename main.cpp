/*	Project:    Nia Pham
	Name:       YOUR NAME GOES HERE
    Partner:    PARTNER'S NAME IF ANY
    Class:      example: CSC 1810 - Section 1
*/

#include <iostream>
#include "allele.h"
#include "gene.h"
#include "chromosome.h"
#include "genesequencer.h"

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
	string chromosome = " ";

	string gName;
	string gTrait;
	string nucleotideSequence;
	string vName;
	string vType;

	GeneinaBottle gene;
	chrom myChrom;

	while (menuChoice != 6)
	{
		menu(menuChoice);
		if (menuChoice == 1)
		{
			Allele a(nucleotideSequence, vName, vType);

			cout << "What is the name of the new gene?" << endl;
			cin >> gName;
			cout << "What is the gene trait?" << endl;
			cin >> gTrait;
			cout << "What is the allele A nucleotide sequence?" << endl;
			cin >> nucleotideSequence;
			cout << "What is the allele A variant?" << endl;
			cin >> vName;
			cout << "what is the allele A type?" << endl;
			cin >> vType;

			Allele A(nucleotideSequence, vName, vType);
			gene.setAlleleA(a);

			cout << "What is the allele B nucleotide sequence?" << endl;
			cin >> nucleotideSequence;
			cout << "What is the allele B variant?" << endl;
			cin >> vName;
			cout << "What is the allele B type?" << endl;
			cin >> vType;

			Allele B(nucleotideSequence, vName, vType);
			gene.setAlleleB(b);

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
			cout << "What file would you like to import from?" << endl;
		}
		else if (menuChoice == 4)
		{
			cout << "What file would you like to export to?" << endl;
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