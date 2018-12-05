#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include "allele.h"

using namespace std;

class GeneinaBottle
{
  public:
	GeneinaBottle();
	GeneinaBottle(string name, string traitType, Allele alleleA, Allele alleleB);
	void createGene();
	string flaredGene;
	string GetName();
	string GetTraitType();
	Allele GetAlleleA();
	Allele GetAlleleB();
	void GetGenes();
	void setAlleleA(Allele A);
	void setAlleleB(Allele B);
	void setGeneName(string);
	void setGeneTrait(string);

	void FindGene();

  private:
	string name;
	string traitType;
	Allele a;
	Allele b;
};