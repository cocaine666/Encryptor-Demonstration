// Encryptor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma comment(linker, "/STACK:2000000")
#pragma comment(linker, "/HEAP:2000000")
#include <ctype.h> 
#include <stdio.h> 
#include <iostream>
#include <Windows.h>
#include <cstring>
#include <string.h> 
#include "Encryption.hpp"
#include "Classes.hpp"
#include <conio.h>
#include <fstream>
#include <sstream>
#define  _SILENCE_EXPERIMENTAL_FILESYSTEM_DEPRECATION_WARNING
using namespace std;

string convertToString(char* a, int size)
{
	int i;
	string s = "";
	for (i = 0; i < size; i++) {
		s = s + a[i];
	}
	return s;
}
char inputD[1000000];
char inputE[1000];
int main(void)                                                                                                                                                                                   
{
	std::string selection;

	char inputD[1000000];
	inputD[0] = '\0';
	int check;
	//char inputD[1000000];
	std::string exportE;
	std::string test;
	cout << test.max_size(); // max available memory for storing strings/chars
	std::cout << "Alpha build\n";
	std::cout << "Do you wish to encrypt or decrypt desired line of information?\n";
	std::cout << "Type [E] for encryption and [D] for decryption: ";
	std::cin >> selection;

	if (selection == "E")
	{


		Data input;
		std::string encrypt;
		std::string encrypt2;
		std::string encrypt3;
		std::string encrypt4;
	

		
		
		int counter = 0;
		std::cout << "Please type in your desired information for encryption(max. size is 64 characters.):\n";
		std::cin >> inputE;
		
		int n;
		int segment = 0;
		for (counter; counter < strlen(inputE); counter++)
		{
			char loaded_from_class_char = '\0';
			
			char character = inputE[counter];
			 loaded_from_class_char = character;
			 if (counter < 64)
			 {
				 segment = 1;
				 char loaded_from_class_char = input.load_segment1(character, counter, segment);
			 }
			  
			 if (counter < 128)
			 {
				 segment = 2;
				 char loaded_from_class_char = input.load_segment2(character, counter, segment);
			 }
			 if (counter < 192)
			 {
				 segment = 3;
				 char loaded_from_class_char = input.load_segment3(character, counter, segment);
			 }

			 if (counter < 256)
			 {
				 segment = 4;
				 char loaded_from_class_char = input.load_segment4(character, counter, segment);
			 }

			encrypt = encrypt + encrypt_character(loaded_from_class_char);
			
			


		}

		input.public_character_read_segment1[0] = '\0';
		input.public_character_read_segment2[0] = '\0';
		input.public_character_read_segment3[0] = '\0';
		input.public_character_read_segment4[0] = '\0';

		cout << "----------" << endl;
		cout << encrypt << endl;
		cout << "----------" << endl;
		inputE[0] = '\0';
		counter = 0;
		for (counter; counter < encrypt.length(); counter++)
		{
			char loaded_from_class_char = '\0';

			char character = encrypt[counter];
			loaded_from_class_char = character;
			if (counter < 64)
			{
				segment = 1;
				char loaded_from_class_char = input.load_segment1(character, counter,segment);
			}
			if (counter < 128)
			{
				segment = 2;
				char loaded_from_class_char = input.load_segment2(character, counter, segment);
			}

			if (counter < 192)
			{
			    segment = 3;
				char loaded_from_class_char = input.load_segment3(character, counter, segment);
			}


		    if (counter < 256)
			{
				segment = 4;
				char loaded_from_class_char = input.load_segment4(character, counter, segment);
			}

			encrypt2 = encrypt2 + encrypt_character(loaded_from_class_char);
			



		}
		cout << "----------" << endl;
		cout << encrypt2 << endl;
		cout << "----------" << endl;

		Sleep(5000);

	}
	
	if (selection == "D")
	{
		//
		int num_characters = 0;
		int i = 0;
		char c;
		inputD[0] = '\0';
		
		
		std::ifstream inFile;
		inFile.open("C:\\encrypt.txt"); 

		std::stringstream strStream;
		strStream << inFile.rdbuf();
		std::string str = strStream.str(); 
		for (i; i < str.length(); i++)
		{
			inputD[i] = str[i];

		}
		std::cout << str << "\n";
		
		
		std::string decrypt;
		std::string decrypt2;
		std::string decrypt3;
		std::string decrypt4;

		char character2[4];
		char final[4];
		int counter = 0;
		int counter2 = 0;
		std::string s_a;
		bool done = false;
		
		

		for (counter = 0; counter < strlen(inputD); counter++)
		{
			char character = inputD[counter];
			character2[counter2] = character;

			if (counter2 == 3)
			{
				final[0] = character2[0];
				final[1] = character2[1];
				final[2] = character2[2];
				final[3] = character2[3];
				int a_size = sizeof(final) / sizeof(char);
				s_a = convertToString(final, a_size);
				decrypt = decrypt + decrypt_character(s_a);
				//cout << decrypt;
				counter2 = 0;
				character2[0] = '\0';
				final[0] = '\0';
				done = true;
			}
			if (counter2 == 0 && done)
			{
				done = false;
				counter2--;
			}
			counter2++;	

		}
		cout << "----------" << endl;
		cout << decrypt << endl;
		cout << "----------" << endl;
		std::string s_a1;
		counter2 = 0;
		done = false;
		for (counter = 0; counter < decrypt.length(); counter++)
		{
			char character;
			character = decrypt[counter];
			character2[counter2] = character;

			if (counter2 == 3)
			{
				final[0] = character2[0];
				final[1] = character2[1];
				final[2] = character2[2];
				final[3] = character2[3];
				int a_size = sizeof(final) / sizeof(char);
				s_a1 = convertToString(final, a_size);
				decrypt2 = decrypt2 + decrypt_character(s_a1);
				//cout << decrypt;
				counter2 = 0;
				character2[0] = '\0';
				final[0] = '\0';
				done = true;
			}
			if (counter2 == 0 && done)
			{
				done = false;
				counter2--;
			}
			counter2++;

		}
		counter2 = 0;
		cout << decrypt2;

		// multi-layer encrypting

		/*for (counter = 0; counter < decrypt2.length(); counter++)
		{
			char character = decrypt2[counter];
			character2[counter2] = character;

			if (counter2 == 3)
			{
				final[0] = character2[0];
				final[1] = character2[1];
				final[2] = character2[2];
				final[3] = character2[3];
				int a_size = sizeof(final) / sizeof(char);
				s_a1 = convertToString(final, a_size);
				decrypt3 = decrypt3 + decrypt_character(s_a1);
				//cout << decrypt;
				counter2 = 0;
				character2[0] = '\0';
				final[0] = '\0';
				done = true;
			}
			if (counter2 == 0 && done)
			{
				done = false;
				counter2--;
			}
			counter2++;

		}
		counter2 = 0;
		for (counter = 0; counter < decrypt3.length(); counter++)
		{
			char character = decrypt3[counter];
			character2[counter2] = character;

			if (counter2 == 3)
			{
				final[0] = character2[0];
				final[1] = character2[1];
				final[2] = character2[2];
				final[3] = character2[3];
				int a_size = sizeof(final) / sizeof(char);
				s_a1 = convertToString(final, a_size);
				decrypt4 = decrypt4 + decrypt_character(s_a1);
				//cout << decrypt;
				counter2 = 0;
				character2[0] = '\0';
				final[0] = '\0';
				done = true;
			}
			if (counter2 == 0 && done)
			{
				done = false;
				counter2--;
			}
			counter2++;

		}
		cout << "----------" << endl;
		cout << decrypt4 << endl;
		cout << "----------" << endl;*/
	

	}

	std::cin >> check;
	return 0;

};




