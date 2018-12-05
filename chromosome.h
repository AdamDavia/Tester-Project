#include <iostream>
#include <string>
#include <vector>
#include "gene.h"
#pragma once

using namespace std;

class chrom
{
  public:
	void create();
	void analyze();
	void output();
	void input();
	void combine();
	void AddGene(GeneinaBottle);
	vector<GeneinaBottle> GetGenes();
	chrom operator+(chrom c);

  private:
	vector<GeneinaBottle> genes;
};
