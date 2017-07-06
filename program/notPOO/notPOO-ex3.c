#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define DEFAULT_WEIGHT 0 //RANDOM IF -1

typedef struct neuron
{
  int weight[31];
}neuron;

void setArray(int array[], int set)
{
  switch(set)
  {
  	case 0:
  		array[0] = 1;//BIAS
  		array[1] = 0;//begin first line
  		array[2] = 1;
  		array[3] = 1;
  		array[4] = 1;
  		array[5] = 0;//end line
  		array[6] = 1;//begin line
  		array[7] = 0;
  		array[8] = 0;
  		array[9] = 0;
  		array[10] = 1;//end line
  		array[11] = 1;//begin line
  		array[12] = 0;
  		array[13] = 0;
  		array[14] = 0;
  		array[15] = 1;//end line
  		array[16] = 1;//begin line
  		array[17] = 0;
  		array[18] = 0;
  		array[19] = 0;
  		array[20] = 1;//end line
  		array[21] = 1;//begin line
  		array[22] = 0;
  		array[23] = 0;
  		array[24] = 0;
  		array[25] = 1;//end line
  		array[26] = 0;//begin line
  		array[27] = 1;
  		array[28] = 1;
  		array[29] = 1;
  		array[30] = 0;//end line
  	break;

  	case 1:
  		array[0] = 1;//BIAS
  		array[1] = 0;//begin line
  		array[2] = 0;
  		array[3] = 1;
  		array[4] = 0;
  		array[5] = 0;//end line
  		array[6] = 0;//begin line
  		array[7] = 1;
  		array[8] = 1;
  		array[9] = 0;
  		array[10] = 0;//end line
  		array[11] = 0;//begin line
  		array[12] = 0;
  		array[13] = 1;
  		array[14] = 0;
  		array[15] = 0;//end line
  		array[16] = 0;//begin line
  		array[17] = 0;
  		array[18] = 1;
  		array[19] = 0;
  		array[20] = 0;//end line
  		array[21] = 0;//begin line
  		array[22] = 0;
  		array[23] = 1;
  		array[24] = 0;
  		array[25] = 0;//end line
  		array[26] = 1;//begin line
  		array[27] = 1;
  		array[28] = 1;
  		array[29] = 1;
  		array[30] = 1;//end line
  	break;

  	case 2:
  		array[0] = 1;//BIAS
  		array[1] = 0;//begin line
  		array[2] = 1;
  		array[3] = 1;
  		array[4] = 1;
  		array[5] = 0;//end line
  		array[6] = 0;//begin line
  		array[7] = 1;
  		array[8] = 0;
  		array[9] = 1;
  		array[10] = 0;//end line
  		array[11] = 0;//begin line
  		array[12] = 0;
  		array[13] = 0;
  		array[14] = 1;
  		array[15] = 0;//end line
  		array[16] = 0;//begin line
  		array[17] = 0;
  		array[18] = 1;
  		array[19] = 0;
  		array[20] = 0;//end line
  		array[21] = 0;//begin line
  		array[22] = 1;
  		array[23] = 0;
  		array[24] = 0;
  		array[25] = 0;//end line
  		array[26] = 1;//begin line
  		array[27] = 1;
  		array[28] = 1;
  		array[29] = 1;
  		array[30] = 1;//end line
  	break;

  	case 3:
			array[0] = 1;//BIAS
  		array[1] = 0;//begin line
  		array[2] = 1;
  		array[3] = 1;
  		array[4] = 1;
  		array[5] = 1;//end line
  		array[6] = 0;//begin line
  		array[7] = 0;
  		array[8] = 0;
  		array[9] = 0;
  		array[10] = 1;//end line
  		array[11] = 0;//begin line
  		array[12] = 1;
  		array[13] = 1;
  		array[14] = 1;
  		array[15] = 1;//end line
  		array[16] = 0;//begin line
  		array[17] = 0;
  		array[18] = 0;
  		array[19] = 0;
  		array[20] = 1;//end line
  		array[21] = 0;//begin line
  		array[22] = 0;
  		array[23] = 0;
  		array[24] = 0;
  		array[25] = 1;//end line
  		array[26] = 0;//begin line
  		array[27] = 1;
  		array[28] = 1;
  		array[29] = 1;
  		array[30] = 1;//end line
  	break;

  	case 4:
  		array[0] = 1;//BIAS
  		array[1] = 1;//begin line
  		array[2] = 0;
  		array[3] = 0;
  		array[4] = 1;
  		array[5] = 0;//end line
  		array[6] = 1;//begin line
  		array[7] = 0;
  		array[8] = 0;
  		array[9] = 1;
  		array[10] = 0;//end line
  		array[11] = 1;//begin line
  		array[12] = 0;
  		array[13] = 0;
  		array[14] = 1;
  		array[15] = 0;//end line
  		array[16] = 1;//begin line
  		array[17] = 1;
  		array[18] = 1;
  		array[19] = 1;
  		array[20] = 0;//end line
  		array[21] = 0;//begin line
  		array[22] = 0;
  		array[23] = 0;
  		array[24] = 1;
  		array[25] = 0;//end line
  		array[26] = 0;//begin line
  		array[27] = 0;
  		array[28] = 0;
  		array[29] = 1;
  		array[30] = 0;//end line
  	break;

  	case 5:
  		array[0] = 1;//BIAS
  		array[1] = 0;//begin line
  		array[2] = 1;
  		array[3] = 1;
  		array[4] = 1;
  		array[5] = 1;//end line
  		array[6] = 0;//begin line
  		array[7] = 1;
  		array[8] = 0;
  		array[9] = 0;
  		array[10] = 0;//end line
  		array[11] = 0;//begin line
  		array[12] = 1;
  		array[13] = 1;
  		array[14] = 1;
  		array[15] = 1;//end line
  		array[16] = 0;//begin line
  		array[17] = 0;
  		array[18] = 0;
  		array[19] = 0;
  		array[20] = 1;//end line
  		array[21] = 0;//begin line
  		array[22] = 0;
  		array[23] = 0;
  		array[24] = 0;
  		array[25] = 1;//end line
  		array[26] = 0;//begin line
  		array[27] = 1;
  		array[28] = 1;
  		array[29] = 1;
  		array[30] = 1;//end line
  	break;
  	default:
  	break;
  }
}

void setNeuronWeights(struct neuron *n, int set)
{
  srand(1);
  if(set==-1)
  {
    printf("valor pra setar: %d\n", set);
    int i;
    for(i=0;i<31;i++)
    {
      n->weight[i] = (1-(rand()%3));
      printf("%d ",n->weight[i]);
    }
  }
  else
  {
    printf("valor pra setar: %d\n", set);
    int i;
    for(i=0;i<31;i++)
    {
      n->weight[i] = set;
      printf("%d ",n->weight[i]);
    }
  }
}

void printNeuron(struct neuron *n)
{
  int i;
  printf("\nNeuron Weights: \n");
  printf("Bias: %d\n\t",n->weight[0]);
  for(i=1;i<31;i++)
  {
    printf("%d ",n->weight[i]);
    if(i==5||i==10||i==15||i==20||i==25||i==30) printf("\n\t");
  }
  printf("\n");
}

int main()
{
  int i,j,k,nr;
  int array[31];
  int result=0;
  int error;
  int count=0;

  struct neuron n[6];
  struct neuron *p[6];
  p[0] = &n[0];
  p[1] = &n[1];
  p[2] = &n[2];
  p[3] = &n[3];
  p[4] = &n[4];
  p[5] = &n[5];

  setNeuronWeights(p[0], DEFAULT_WEIGHT);
  printNeuron(p[0]);
  setNeuronWeights(p[1], DEFAULT_WEIGHT);
  printNeuron(p[1]);
  setNeuronWeights(p[2], DEFAULT_WEIGHT);
  printNeuron(p[2]);
  setNeuronWeights(p[3], DEFAULT_WEIGHT);
  printNeuron(p[3]);
  setNeuronWeights(p[4], DEFAULT_WEIGHT);
  printNeuron(p[4]);
  setNeuronWeights(p[5], DEFAULT_WEIGHT);
  printNeuron(p[5]);

  do
  {
    error = 0;
    for(i=0;i<6;i++)
    {
      setArray(array, i);

      for(nr=0;nr<6;nr++)
      {
        for(j=0;j<31;j++) result += n[nr].weight[j]*array[j];

        if(result >= 1) result = 1;
        else result = 0;

        if(nr==i)
        {
          if(result < 1)
          {
            error++;
            for(k=0; k<31; k++) n[nr].weight[k] = n[nr].weight[k] + array[k];
          }
        }
        else
        {
          if(result > 0)
          {
            error++;
            for(k=0; k<31; k++) n[nr].weight[k] = n[nr].weight[k] - array[k];
          }
        }
        count++;
      }
    }
  }while(error!=0);


  printf("\n %d TIMES",count);
  printNeuron(p[0]);
  printNeuron(p[1]);
  printNeuron(p[2]);
  printNeuron(p[3]);
  printNeuron(p[4]);
  printNeuron(p[5]);

  return 0;
}
