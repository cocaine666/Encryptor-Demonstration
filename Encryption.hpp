#pragma once
#include <iostream>
using namespace std;

std::string encrypt_character(char character)
{
	if (character == '0')
	{
		return "0x0z";
	}
	if (character == '1')
	{
		return "0x0a";
	}
	if (character == '2')
	{
		return "0x0y";
	}
	if (character == '3')
	{
		return "0x0b";
	}
	if (character == '4')
	{
		return "0x0x";
	}
	if (character == '5')
	{
		return "0x0c";
	}
	if (character == '6')
	{
		return "0x0w";
	}
	if (character == '7')
	{
		return "0x0d";
	}
	if (character == '8')
	{
		return "0x0v";
	}
	if (character == '9')
	{
		return "0x0e";
	}
	if (character == 'a')
	{
		return "Z20b";
	}
	if (character == 'A')
	{
		return "z20B";
	}
	if (character == 'b')
	{
		return "Y19c";
	}
	if (character == 'B')
	{
		return "y19C";
	}
	if (character == 'c')
	{
		return "X18d";
	}
	if (character == 'C')
	{
		return "x18D";
	}
	if (character == 'd')
	{
		return "W18e";
	}
	if (character == 'D')
	{
		return "w18E";
	}
	if (character == 'e')
	{
		return "V17f";
	}
	if (character == 'E')
	{
		return "v17F";
	}
	if (character == 'f')
	{
		return "U16g";
	}
	if (character == 'F')
	{
		return "u16G";
	}
	if (character == 'g')
	{
		return "T15h";
	}
	if (character == 'G')
	{
		return "t15H";
	}
	if (character == 'h')
	{
		return "S14i";
	}
	if (character == 'H')
	{
		return "s14I";
	}
	if (character == 'i')
	{
		return "R13j";
	}
	if (character == 'I')
	{
		return "r13J";
	}
	if (character == 'j')
	{
		return "Q12k";
	}
	if (character == 'J')
	{
		return "q12K";
	}
	if (character == 'k')
	{
		return "P11l";
	}
	if (character == 'K')
	{
		return "p11L";
	}
	if (character == 'l')
	{
		return "O10m";
	}
	if (character == 'L')
	{
		return "o10M";
	}
	if (character == 'm')
	{
		return "N90n";
	}
	if (character == 'M')
	{
		return "n90N";
	}
	if (character == 'n')
	{
		return "M80o";
	}
	if (character == 'N')
	{
		return "m80O";
	}
	if (character == 'o')
	{
		return "L70p";
	}
	if (character == 'O')
	{
		return "l70P";
	}
	if (character == 'p')
	{
		return "K60q";
	}
	if (character == 'P')
	{
		return "k60Q";
	}
	if (character == 'q')
	{
		return "J50r";
	}
	if (character == 'Q')
	{
		return "j50R";
	}
	if (character == 'r')
	{
		return "I40s";
	}
	if (character == 'R')
	{
		return "i40S";
	}
	if (character == 's')
	{
		return "H30t";
	}
	if (character == 'S')
	{
		return "h30T";
	}
	if (character == 't')
	{
		return "G20u";
	}
	if (character == 'T')
	{
		return "g20U";
	}
	if (character == 'u')
	{
		return "F10v";
	}
	if (character == 'U')
	{
		return "f10V";
	}
	if (character == 'v')
	{
		return "E09w";
	}
	if (character == 'V')
	{
		return "e09W";
	}
	if (character == 'w')
	{
		return "D08x";
	}
	if (character == 'W')
	{
		return "d08X";
	}
	if (character == 'x')
	{
		return "C07y";
	}
	if (character == 'X')
	{
		return "c07Y";
	}
	if (character == 'y')
	{
		return "B06z";
	}
	if (character == 'Y')
	{
		return "b06Z";
	}
	if (character == 'z')
	{
		return "A05a";
	}
	if (character == 'Z')
	{
		return "a05A";
	}
	if (character == '-')
	{
		return "l0Lz";
	}
}

std::string decrypt_character(string character)
{
	if (character == "0x0z")
	{
		return "0";
	}
	if (character == "0x0a")
	{
		return "1";
	}
	if (character == "0x0y")
	{
		return "2";
	}
	if (character == "0x0b")
	{
		return "3";
	}
	if (character == "0x0x")
	{
		return "4";
	}
	if (character == "0x0c")
	{
		return "5";
	}
	if (character == "0x0w")
	{
		return "6";
	}
	if (character == "0x0d")
	{
		return "7";
	}
	if (character == "0x0v")
	{
		return "8";
	}
	if (character == "0x0e")
	{
		return "9";
	}
	if (character == "Z20b")
	{
		return "a";
	}
	if (character == "z20B")
	{
		return "A";
	}
	if (character == "Y19c")
	{
		return "b";
	}
	if (character == "y19C")
	{
		return "B";
	}
	if (character == "X18d")
	{
		return "c";
	}
	if (character == "x18D")
	{
		return "C";
	}
	if (character == "W18e")
	{
		return "d";
	}
	if (character == "w18E")
	{
		return "D";
	}
	if (character == "V17f")
	{
		return "e";
	}
	if (character == "v17F")
	{
		return "E";
	}
	if (character == "U16g")
	{
		return "f";
	}
	if (character == "u16G")
	{
		return "F";
	}
	if (character == "T15h")
	{
		return "g";
	}
	if (character == "t15H")
	{
		return "G";
	}
	if (character == "S14i")
	{
		return "h";
	}
	if (character == "s14I")
	{
		return "H";
	}
	if (character == "R13j")
	{
		return "i";
	}
	if (character == "r13J")
	{
		return "I";
	}
	if (character == "Q12k")
	{
		return "j";
	}
	if (character == "q12K")
	{
		return "J";
	}
	if (character == "P11l")
	{
		return "k";
	}
	if (character == "p11L")
	{
		return "K";
	}
	if (character == "O10m")
	{
		return "l";
	}
	if (character == "o10M")
	{
		return "L";
	}
	if (character == "N90n")
	{
		return "m";
	}
	if (character == "n90N")
	{
		return "M";
	}
	if (character == "M80o")
	{
		return "n";
	}
	if (character == "m80O")
	{
		return "N";
	}
	if (character == "L70p")
	{
		return "o";
	}
	if (character == "l70P")
	{
		return "O";
	}
	if (character == "K60q")
	{
		return "p";
	}
	if (character == "k60Q")
	{
		return "P";
	}
	if (character == "J50r")
	{
		return "q";
	}
	if (character == "j50R")
	{
		return "Q";
	}
	if (character == "I40s")
	{
		return "r";
	}
	if (character == "i40S")
	{
		return "R";
	}
	if (character == "H30t")
	{
		return "s";
	}
	if (character == "h30T")
	{
		return "s";
	}
	if (character == "G20u")
	{
		return "t";
	}
	if (character == "g20U")
	{
		return "T";
	}
	if (character == "F10v")
	{
		return "u";
	}
	if (character == "f10V")
	{
		return "U";
	}
	if (character == "E09w")
	{
		return "v";
	}
	if (character == "e09W")
	{
		return "V";
	}
	if (character == "D08x")
	{
		return "w";
	}
	if (character == "d08X")
	{
		return "W";
	}
	if (character == "C07y")
	{
		return "x";
	}
	if (character == "c07Y")
	{
		return "X";
	}
	if (character == "B06z")
	{
		return "y";
	}
	if (character == "b06Z")
	{
		return "Y";
	}
	if (character == "A05a")
	{
		return "z";
	}
	if (character == "a05A")
	{
		return "Z";
	}
	if (character == "l0Lz")
	{
		return "-";
	}
}