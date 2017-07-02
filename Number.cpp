#include <iostream>
#include "Number.hpp"

Number::Number(set)
{
	switch(set)
	{
		case 0:
			array[0] = true;//BIAS
			array[1] = false;//begin first line
			array[2] = true;
			array[3] = true;
			array[4] = true;
			array[5] = false;//end line
			array[6] = true;//begin line
			array[7] = false;
			array[8] = false;
			array[9] = false;
			array[10] = true;//end line
			array[11] = true;//begin line
			array[12] = false;
			array[13] = false;
			array[14] = false;
			array[15] = true;//end line
			array[16] = true;//begin line
			array[17] = false;
			array[18] = false;
			array[19] = false;
			array[20] = true;//end line
			array[21] = true;//begin line
			array[22] = false;
			array[23] = false;
			array[24] = false;
			array[25] = true;//end line
			array[26] = false;//begin line
			array[27] = true;
			array[28] = true;
			array[29] = true;
			array[30] = false;//end line
		break;

		case 1:
			array[0] = true;//BIAS
			array[1] = false;//begin line
			array[2] = false;
			array[3] = true;
			array[4] = false;
			array[5] = false;//end line
			array[6] = false;//begin line
			array[7] = true;
			array[8] = true;
			array[9] = false;
			array[10] = false;//end line
			array[11] = false;//begin line
			array[12] = false;
			array[13] = true;
			array[14] = false;
			array[15] = false;//end line
			array[16] = false;//begin line
			array[17] = false;
			array[18] = true;
			array[19] = false;
			array[20] = false;//end line
			array[21] = false;//begin line
			array[22] = false;
			array[23] = true;
			array[24] = false;
			array[25] = false;//end line
			array[26] = true;//begin line
			array[27] = true;
			array[28] = true;
			array[29] = true;
			array[30] = true;//end line
		break;

		case 2:
			array[0] = true;//BIAS
			array[1] = false;//begin line
			array[2] = true;
			array[3] = true;
			array[4] = true;
			array[5] = false;//end line
			array[6] = false;//begin line
			array[7] = true;
			array[8] = false;
			array[9] = true;
			array[10] = false;//end line
			array[11] = false;//begin line
			array[12] = false;
			array[13] = false;
			array[14] = true;
			array[15] = false;//end line
			array[16] = false;//begin line
			array[17] = false;
			array[18] = true;
			array[19] = false;
			array[20] = false;//end line
			array[21] = false;//begin line
			array[22] = true;
			array[23] = false;
			array[24] = false;
			array[25] = false;//end line
			array[26] = true;//begin line
			array[27] = true;
			array[28] = true;
			array[29] = true;
			array[30] = true;//end line
		break;

		case 3:
			array[0] = true;//BIAS
			array[1] = false;//begin line
			array[2] = true;
			array[3] = true;
			array[4] = true;
			array[5] = true;//end line
			array[6] = false;//begin line
			array[7] = false;
			array[8] = false;
			array[9] = false;
			array[10] = true;//end line
			array[11] = false;//begin line
			array[12] = true;
			array[13] = true;
			array[14] = true;
			array[15] = true;//end line
			array[16] = false;//begin line
			array[17] = false;
			array[18] = false;
			array[19] = false;
			array[20] = true;//end line
			array[21] = false;//begin line
			array[22] = false;
			array[23] = false;
			array[24] = false;
			array[25] = true;//end line
			array[26] = false;//begin line
			array[27] = true;
			array[28] = true;
			array[29] = true;
			array[30] = true;//end line
		break;

		case 4:
			array[0] = true;//BIAS
			array[1] = true;//begin line
			array[2] = false;
			array[3] = false;
			array[4] = true;
			array[5] = false;//end line
			array[6] = true;//begin line
			array[7] = false;
			array[8] = false;
			array[9] = true;
			array[10] = false;//end line
			array[11] = true;//begin line
			array[12] = false;
			array[13] = false;
			array[14] = true;
			array[15] = false;//end line
			array[16] = true;//begin line
			array[17] = true;
			array[18] = true;
			array[19] = true;
			array[20] = false;//end line
			array[21] = false;//begin line
			array[22] = false;
			array[23] = false;
			array[24] = true;
			array[25] = false;//end line
			array[26] = false;//begin line
			array[27] = false;
			array[28] = false;
			array[29] = true;
			array[30] = false;//end line
		break;

		case 5:
			array[0] = true;//BIAS
			array[1] = false;//begin line
			array[2] = true;
			array[3] = true;
			array[4] = true;
			array[5] = true;//end line
			array[6] = false;//begin line
			array[7] = true;
			array[8] = false;
			array[9] = false;
			array[10] = false;//end line
			array[11] = false;//begin line
			array[12] = true;
			array[13] = true;
			array[14] = true;
			array[15] = true;//end line
			array[16] = false;//begin line
			array[17] = false;
			array[18] = false;
			array[19] = false;
			array[20] = true;//end line
			array[21] = false;//begin line
			array[22] = false;
			array[23] = false;
			array[24] = false;
			array[25] = true;//end line
			array[26] = false;//begin line
			array[27] = true;
			array[28] = true;
			array[29] = true;
			array[30] = true;//end line
		break;
		default:
		break;
	}
}

Number::setArray(array[])
{
	for(short i; i<31; i++) this.array[i] = array[i];
}

Number::getArray()
{
	return array;
}

Number::setWeight()
{
	for(short i; i<31; i++) this.weight[i] = weight[i];
}

Number::getWeight()
{
	return weight;
}
