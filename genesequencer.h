#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "chromosome.h"

using namespace std;

class GeneSequencer
{
  public:
	void create();
	void analyze();
	void output();
	void input();
	void combine();

  private:
	vector<chrom> chromosomes;
};