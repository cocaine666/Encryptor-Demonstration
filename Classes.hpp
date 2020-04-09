#pragma once
#include <iostream>

class Data
{
private:


public:
	char public_character_read_segment1[64];
	char public_character_read_segment2[64];
	char public_character_read_segment3[64];
	char public_character_read_segment4[64];
	char public_character_read_segment5[64];
	char public_character_read_segment6[64];
	char public_character_read_segment7[64];
	char public_character_read_segment8[64];
	char public_character_read_segment9[64];
	char public_character_read_segment10[64];
	char public_character_read_segment11[64];
	char public_character_read_segment12[64];
	char public_character_read_segment13[64];
	char public_character_read_segment14[64];
	char public_character_read_segment15[64];
	char public_character_read_segment16[64];
	char public_character_read_segment17[64];
	char public_character_read_segment18[64];
	char public_character_read_segment19[64];
	char public_character_read_segment20[64];
	char public_character_read_segment21[64];
	char public_character_read_segment22[64];
	char public_character_read_segment23[64];
	char public_character_read_segment24[64];
	char public_character_read_segment25[64];
	char public_character_read_segment26[64];
	char public_character_read_segment27[64];
	char public_character_read_segment28[64];
	char public_character_read_segment29[64];
	char public_character_read_segment30[64];
	char public_character_read_segment31[64];
	char public_character_read_segment32[64];
	char public_character_read_segment33[64];
	char public_character_read_segment34[64];
	char public_character_read_segment35[64];
	char public_character_read_segment36[64];
	char public_character_read_segment37[64];
	char public_character_read_segment38[64];
	char public_character_read_segment39[64];
	char public_character_read_segment40[64];
	char public_character_read_segment41[64];
	char public_character_read_segment42[64];
	char public_character_read_segment43[64];
	char public_character_read_segment44[64];
	char public_character_read_segment45[64];
	char public_character_read_segment46[64];
	char public_character_read_segment47[64];
	char public_character_read_segment48[64];
	char public_character_read_segment49[64];
	char public_character_read_segment50[64];
	char public_character_read_segment51[64];
	char public_character_read_segment52[64];
	char public_character_read_segment53[64];
	char public_character_read_segment54[64];
	char public_character_read_segment55[64];
	char public_character_read_segment56[64];
	char public_character_read_segment57[64];
	char public_character_read_segment58[64];
	char public_character_read_segment59[64];
	char public_character_read_segment60[64];
	char public_character_read_segment61[64];
	char public_character_read_segment62[64];
	char public_character_read_segment63[64];
	char public_character_read_segment64[64];

	char load_segment1(char a, int b, int segment);
	char load_segment2(char a, int b, int segment);
	char load_segment3(char a, int b, int segment);
	char load_segment4(char a, int b, int segment);

  
};

char Data::load_segment1(char a, int b, int segment)
{
	char returning_value;

	switch (segment) {
	case 1:
		public_character_read_segment1[b] = a;
		returning_value = public_character_read_segment1[b];
	case 2:
		public_character_read_segment2[b] = a;
		returning_value = public_character_read_segment2[b];
	case 3:
		public_character_read_segment3[b] = a;
		returning_value = public_character_read_segment3[b];
	case 4:
		public_character_read_segment4[b] = a;
		returning_value = public_character_read_segment4[b];
	case 5:
		public_character_read_segment5[b] = a;
		returning_value = public_character_read_segment5[b];
	case 6:
		public_character_read_segment6[b] = a;
		returning_value = public_character_read_segment6[b];
	case 7:
		public_character_read_segment7[b] = a;
		returning_value = public_character_read_segment7[b];
	case 8:
		public_character_read_segment8[b] = a;
		returning_value = public_character_read_segment8[b];
	case 9:
		public_character_read_segment9[b] = a;
		returning_value = public_character_read_segment9[b];
	case 10:
		public_character_read_segment10[b] = a;
		returning_value = public_character_read_segment10[b];
	case 11:
		public_character_read_segment11[b] = a;
		returning_value = public_character_read_segment11[b];
	case 12:
		public_character_read_segment12[b] = a;
		returning_value = public_character_read_segment12[b];
	case 13:
		public_character_read_segment13[b] = a;
		returning_value = public_character_read_segment13[b];
	case 14:
		public_character_read_segment14[b] = a;
		returning_value = public_character_read_segment14[b];
	case 15:
		public_character_read_segment15[b] = a;
		returning_value = public_character_read_segment15[b];
	case 16:
		public_character_read_segment16[b] = a;
		returning_value = public_character_read_segment16[b];

	}
	
	return returning_value;
}

char Data::load_segment2(char a, int b, int segment)
{
	public_character_read_segment2[b] = a;	
	return public_character_read_segment2[b];
    //todo
}

char Data::load_segment3(char a, int b, int segment)
{
	public_character_read_segment3[b] = a;
	return public_character_read_segment3[b];
	//todo
}

char Data::load_segment4(char a, int b, int segment)
{
	public_character_read_segment4[b] = a;
	return public_character_read_segment4[b];
	//todo
}



