#include <iostream>
#include <string>
#include <vector>
#include "gene.h"

#pragma once

using namespace std;

class chrom
{
  public:
	void AddGene(GeneinaBottle g);
	vector<GeneinaBottle> GetGenes();
	chrom operator+(chrom c);

  private:
	vector<GeneinaBottle> genes;
};
