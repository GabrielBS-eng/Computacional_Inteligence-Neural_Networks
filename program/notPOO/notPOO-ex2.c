#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define DEFAULT_WEIGHT 0 //RANDOM IF -1
#define TEST_PATTERN 1

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
    case 1001: //0 distorced 1
      array[0] = 1;/*BIAS*/
      array[1] = 0;//begin first line
      array[2] = 1;
      array[3] = 0;
      array[4] = 1;
      array[5] = 0;//end line
      array[6] = 1;//begin line
      array[7] = 0;
      array[8] = 0;
      array[9] = 0;
      array[10] = 0;//end line
      array[11] = 0;//begin line
      array[12] = 0;
      array[13] = 0;
      array[14] = 0;
      array[15] = 1;//end line
      array[16] = 1;//begin line
      array[17] = 0;
      array[18] = 0;
      array[19] = 0;
      array[20] = 0;//end line
      array[21] = 0;//begin line
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
    case 1002: //0 distorced 2
      array[0] = 1;//BIAS
      array[1] = 0;//begin first line
      array[2] = 0;
      array[3] = 1;
      array[4] = 0;
      array[5] = 0;//end line
      array[6] = 0;//begin line
      array[7] = 1;
      array[8] = 0;
      array[9] = 1;
      array[10] = 0;//end line
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
      array[21] = 0;//begin line
      array[22] = 1;
      array[23] = 0;
      array[24] = 1;
      array[25] = 0;//end line
      array[26] = 0;//begin line
      array[27] = 0;
      array[28] = 1;
      array[29] = 0;
      array[30] = 0;//end line
    break;
    case 1003: //0 distorced 3
      array[0] = 1;//BIAS
      array[1] = 0;//begin first line
      array[2] = 1;
      array[3] = 1;
      array[4] = 1;
      array[5] = 0;//end line
      array[6] = 0;//begin line
      array[7] = 0;
      array[8] = 0;
      array[9] = 0;
      array[10] = 0;//end line
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
    case 1004: //0 distorced 4
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
      array[11] = 0;//begin line
      array[12] = 0;
      array[13] = 0;
      array[14] = 0;
      array[15] = 0;//end line
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
    case 1005: //0 distorced 5
      array[0] = 1;//BIAS
      array[1] = 0;//begin first line
      array[2] = 0;
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
      array[27] = 0;
      array[28] = 1;
      array[29] = 1;
      array[30] = 0;//end line
    break;
    case 1006: //0 distorced 6
      array[0] = 1;//BIAS
      array[1] = 0;//begin first line
      array[2] = 1;
      array[3] = 0;
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
      array[21] = 0;//begin line
      array[22] = 0;
      array[23] = 0;
      array[24] = 0;
      array[25] = 1;//end line
      array[26] = 0;//begin line
      array[27] = 1;
      array[28] = 0;
      array[29] = 1;
      array[30] = 0;//end line
    break;
    case 1007: //0 distorced 7
      array[0] = 1;//BIAS
      array[1] = 1;//begin first line
      array[2] = 1;
      array[3] = 1;
      array[4] = 1;
      array[5] = 1;//end line
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
      array[26] = 1;//begin line
      array[27] = 1;
      array[28] = 1;
      array[29] = 1;
      array[30] = 1;//end line
    break;
    case 1008: //0 distorced 8
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
      array[10] = 0;//end line
      array[11] = 1;//begin line
      array[12] = 0;
      array[13] = 0;
      array[14] = 0;
      array[15] = 0;//end line
      array[16] = 1;//begin line
      array[17] = 0;
      array[18] = 0;
      array[19] = 0;
      array[20] = 0;//end line
      array[21] = 1;//begin line
      array[22] = 0;
      array[23] = 0;
      array[24] = 0;
      array[25] = 0;//end line
      array[26] = 0;//begin line
      array[27] = 1;
      array[28] = 1;
      array[29] = 1;
      array[30] = 0;//end line
    break;
    case 1009: //0 distorced 9
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
      array[27] = 0;
      array[28] = 0;
      array[29] = 0;
      array[30] = 0;//end line
    break;
    case 1010: //0 distorced 10
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
      array[11] = 0;//begin line
      array[12] = 0;
      array[13] = 0;
      array[14] = 0;
      array[15] = 0;//end line
      array[16] = 0;//begin line
      array[17] = 0;
      array[18] = 0;
      array[19] = 0;
      array[20] = 0;//end line
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

    case 1101: //1 distorced 1
      array[0] = 1;//BIAS
      array[1] = 0;//begin line
      array[2] = 0;
      array[3] = 0;
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
    case 1102: //1 distorced 2
      array[0] = 1;//BIAS
      array[1] = 0;//begin line
      array[2] = 0;
      array[3] = 0;
      array[4] = 0;
      array[5] = 0;//end line
      array[6] = 0;//begin line
      array[7] = 0;
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
    case 1103: //1 distorced 3
      array[0] = 1;//BIAS
      array[1] = 0;//begin line
      array[2] = 0;
      array[3] = 1;
      array[4] = 0;
      array[5] = 0;//end line
      array[6] = 0;//begin line
      array[7] = 0;
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
      array[26] = 0;//begin line
      array[27] = 1;
      array[28] = 1;
      array[29] = 1;
      array[30] = 0;//end line
    break;
    case 1104: //1 distorced 4
      array[0] = 1;//BIAS
      array[1] = 0;//begin line
      array[2] = 0;
      array[3] = 0;
      array[4] = 0;
      array[5] = 0;//end line
      array[6] = 0;//begin line
      array[7] = 0;
      array[8] = 1;
      array[9] = 0;
      array[10] = 0;//end line
      array[11] = 0;//begin line
      array[12] = 1;
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
      array[26] = 0;//begin line
      array[27] = 1;
      array[28] = 1;
      array[29] = 1;
      array[30] = 0;//end line
    break;
    case 1105: //1 distorced 5
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
      array[18] = 0;
      array[19] = 0;
      array[20] = 0;//end line
      array[21] = 0;//begin line
      array[22] = 0;
      array[23] = 1;
      array[24] = 0;
      array[25] = 0;//end line
      array[26] = 1;//begin line
      array[27] = 1;
      array[28] = 0;
      array[29] = 1;
      array[30] = 1;//end line
    break;
    case 1106: //1 distorced 6
      array[0] = 1;//BIAS
      array[1] = 0;//begin line
      array[2] = 0;
      array[3] = 1;
      array[4] = 0;
      array[5] = 0;//end line
      array[6] = 0;//begin line
      array[7] = 1;
      array[8] = 0;
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
      array[27] = 0;
      array[28] = 1;
      array[29] = 0;
      array[30] = 1;//end line
    break;
    case 1107: //1 distorced 7
      array[0] = 1;//BIAS
      array[1] = 0;//begin line
      array[2] = 0;
      array[3] = 1;
      array[4] = 0;
      array[5] = 0;//end line
      array[6] = 0;//begin line
      array[7] = 1;
      array[8] = 1;
      array[9] = 1;
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
    case 1108: //1 distorced 8
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
      array[11] = 1;//begin line
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
    case 1109: //1 distorced 9
      array[0] = 1;//BIAS
      array[1] = 0;//begin line
      array[2] = 0;
      array[3] = 1;
      array[4] = 0;
      array[5] = 0;//end line
      array[6] = 0;//begin line
      array[7] = 0;
      array[8] = 1;
      array[9] = 1;
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
    case 1110: //1 distorced 10
      array[0] = 1;//BIAS
      array[1] = 0;//begin line
      array[2] = 0;
      array[3] = 1;
      array[4] = 0;
      array[5] = 0;//end line
      array[6] = 0;//begin line
      array[7] = 0;
      array[8] = 0;
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
      array[26] = 0;//begin line
      array[27] = 1;
      array[28] = 1;
      array[29] = 1;
      array[30] = 0;//end line
    break;
    //
    // case : //A
    //   array[0] = 1;//BIAS
    //   array[1] = 0;//begin line
    //   array[2] = 0;
    //   array[3] = 1;
    //   array[4] = 0;
    //   array[5] = 0;//end line
    //   array[6] = 0;//begin line
    //   array[7] = 1;
    //   array[8] = 0;
    //   array[9] = 1;
    //   array[10] = 0;//end line
    //   array[11] = 1;//begin line
    //   array[12] = 0;
    //   array[13] = 0;
    //   array[14] = 0;
    //   array[15] = 1;//end line
    //   array[16] = 1;//begin line
    //   array[17] = 0;
    //   array[18] = 0;
    //   array[19] = 0;
    //   array[20] = 1;//end line
    //   array[21] = 1;//begin line
    //   array[22] = 1;
    //   array[23] = 1;
    //   array[24] = 1;
    //   array[25] = 1;//end line
    //   array[26] = 1;//begin line
    //   array[27] = 0;
    //   array[28] = 0;
    //   array[29] = 0;
    //   array[30] = 1;//end line
    // break;
    // case : //E
    //   array[0] = 1;//BIAS
    //   array[1] = 1;//begin line
    //   array[2] = 1;
    //   array[3] = 1;
    //   array[4] = 1;
    //   array[5] = 0;//end line
    //   array[6] = 1;//begin line
    //   array[7] = 0;
    //   array[8] = 0;
    //   array[9] = 0;
    //   array[10] = 0;//end line
    //   array[11] = 1;//begin line
    //   array[12] = 1;
    //   array[13] = 1;
    //   array[14] = 1;
    //   array[15] = 0;//end line
    //   array[16] = 1;//begin line
    //   array[17] = 0;
    //   array[18] = 0;
    //   array[19] = 0;
    //   array[20] = 0;//end line
    //   array[21] = 1;//begin line
    //   array[22] = 0;
    //   array[23] = 0;
    //   array[24] = 0;
    //   array[25] = 0;//end line
    //   array[26] = 1;//begin line
    //   array[27] = 1;
    //   array[28] = 1;
    //   array[29] = 1;
    //   array[30] = 0;//end line
    // break;
    // case : //T
    //   array[0] = 1;//BIAS
    //   array[1] = 1;//begin line
    //   array[2] = 1;
    //   array[3] = 1;
    //   array[4] = 1;
    //   array[5] = 1;//end line
    //   array[6] = 0;//begin line
    //   array[7] = 0;
    //   array[8] = 1;
    //   array[9] = 0;
    //   array[10] = 0;//end line
    //   array[11] = 0;//begin line
    //   array[12] = 0;
    //   array[13] = 1;
    //   array[14] = 0;
    //   array[15] = 0;//end line
    //   array[16] = 0;//begin line
    //   array[17] = 0;
    //   array[18] = 1;
    //   array[19] = 0;
    //   array[20] = 0;//end line
    //   array[21] = 0;//begin line
    //   array[22] = 0;
    //   array[23] = 1;
    //   array[24] = 0;
    //   array[25] = 0;//end line
    //   array[26] = 0;//begin line
    //   array[27] = 0;
    //   array[28] = 1;
    //   array[29] = 0;
    //   array[30] = 0;//end line
    // break;
    // case : //H
    //   array[0] = 1;//BIAS
    //   array[1] = 1;//begin line
    //   array[2] = 0;
    //   array[3] = 0;
    //   array[4] = 0;
    //   array[5] = 1;//end line
    //   array[6] = 1;//begin line
    //   array[7] = 0;
    //   array[8] = 0;
    //   array[9] = 0;
    //   array[10] = 1;//end line
    //   array[11] = 1;//begin line
    //   array[12] = 1;
    //   array[13] = 1;
    //   array[14] = 1;
    //   array[15] = 1;//end line
    //   array[16] = 1;//begin line
    //   array[17] = 0;
    //   array[18] = 0;
    //   array[19] = 0;
    //   array[20] = 1;//end line
    //   array[21] = 1;//begin line
    //   array[22] = 0;
    //   array[23] = 0;
    //   array[24] = 0;
    //   array[25] = 1;//end line
    //   array[26] = 1;//begin line
    //   array[27] = 0;
    //   array[28] = 0;
    //   array[29] = 0;
    //   array[30] = 1;//end line
    // break;
    // case : //C
    //   array[0] = 1;//BIAS
    //   array[1] = 1;//begin line
    //   array[2] = 1;
    //   array[3] = 1;
    //   array[4] = 1;
    //   array[5] = 0;//end line
    //   array[6] = 1;//begin line
    //   array[7] = 0;
    //   array[8] = 0;
    //   array[9] = 0;
    //   array[10] = 0;//end line
    //   array[11] = 1;//begin line
    //   array[12] = 0;
    //   array[13] = 0;
    //   array[14] = 0;
    //   array[15] = 0;//end line
    //   array[16] = 1;//begin line
    //   array[17] = 0;
    //   array[18] = 0;
    //   array[19] = 0;
    //   array[20] = 0;//end line
    //   array[21] = 1;//begin line
    //   array[22] = 0;
    //   array[23] = 0;
    //   array[24] = 0;
    //   array[25] = 0;//end line
    //   array[26] = 1;//begin line
    //   array[27] = 1;
    //   array[28] = 1;
    //   array[29] = 1;
    //   array[30] = 0;//end line
    // break;
    // case : //N
    //   array[0] = 1;//BIAS
    //   array[1] = 1;//begin line
    //   array[2] = 0;
    //   array[3] = 0;
    //   array[4] = 0;
    //   array[5] = 1;//end line
    //   array[6] = 1;//begin line
    //   array[7] = 1;
    //   array[8] = 0;
    //   array[9] = 0;
    //   array[10] = 1;//end line
    //   array[11] = 1;//begin line
    //   array[12] = 0;
    //   array[13] = 1;
    //   array[14] = 0;
    //   array[15] = 1;//end line
    //   array[16] = 1;//begin line
    //   array[17] = 0;
    //   array[18] = 0;
    //   array[19] = 1;
    //   array[20] = 1;//end line
    //   array[21] = 1;//begin line
    //   array[22] = 0;
    //   array[23] = 0;
    //   array[24] = 0;
    //   array[25] = 1;//end line
    //   array[26] = 1;//begin line
    //   array[27] = 0;
    //   array[28] = 0;
    //   array[29] = 0;
    //   array[30] = 1;//end line
    // break;
  	default:
  	break;
  }
}

void setNeuronWeights(struct neuron *n, int set)
{
  srand(1);
  if(set==-1)
  {
    printf("Random: ");
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

void printArray(int array[])
{
  int i;
  printf("Pattern: \n");
  // printf("BIAS: %d\n",array[0]);
  for(i=1;i<31;i++)
  {
    if(array[i]==0) printf("  ");
    else printf("%d ",array[i]);
    if(i==5||i==10||i==15||i==20||i==25) printf("\n");
  }
}

int testNeuron(struct neuron *n, int array[])
{
  int i, result=0;
  for(i=0;i<31;i++)
  {
    result += n->weight[i]*array[i];
  }
  if(result >= 1) result = 1;
  else result = 0;
  return result;
}

int main()
{
  int i,j,k,nr;
  int array[31];
  int result=0;
  int error;
  int count=0;
  int classific[2], out;

  struct neuron n[2];
  struct neuron *p[2];
  p[0] = &n[0];
  p[1] = &n[1];

  setNeuronWeights(p[0], DEFAULT_WEIGHT);
  // printNeuron(p[0]);
  setNeuronWeights(p[1], DEFAULT_WEIGHT);
  // printNeuron(p[1]);
  do
  {
    error = 0;
    for(i=0;i<2;i++) //each pattern
    {
      setArray(array, i);
      for(nr=0;nr<2;nr++) //each neuron
      {
        result = 0;
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

  printf("Testing Neuron: \n");
  for(i=0; i<11; i++)
  {
    if(i==0) setArray(array, TEST_PATTERN);
    if(TEST_PATTERN == 0) setArray(array, 1000+i);
    if(TEST_PATTERN == 1) setArray(array, 1100+i);
    printArray(array);
    classific[0] = testNeuron(p[0], array);
    classific[1] = testNeuron(p[1], array);
    printf("\t1st Neuron: %d",classific[0]);
    printf("\t2nd Neuron: %d\t",classific[1]);
    if(classific[0]==1 && classific[1]==0) out = 0;
    else if(classific[0]==0 && classific[1]==1) out = 1;
    else out=-1;
    if(out==-1) printf("In: %d, Out: Not Recognized\n", TEST_PATTERN);
    else printf("In: %d, Out: %d\n", TEST_PATTERN, out);
  }

  return 0;
}
