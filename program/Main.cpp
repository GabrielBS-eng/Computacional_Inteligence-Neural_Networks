#include <iostream>
#include "Number.hpp"

#define DEFAULT_WEIGHT 0

int main()
{
  Number Dayana = new Number(0);

  int weight[31];
  bool array[31];
  int i;

  for(short i==0; i<31; i++) //first weight values
  {
    weight[i] = DEFAULT_WEIGHT;
  }
  Dayana.setWeight(weight);
  weight = Dayana.getWeight()
  array = Dayana.getArray();

  printf("\n");
  for(i=0; i<31; i++) printf("%d ",array[i]);
  printf("\n");

  return 0;
}
