#include "Math.h"
#include <iostream>

int main()
{
	math numar;
	std::cout << "add(int,int) " << numar.Add(6, 7) << endl;
	std::cout << "add(int,int,int) " << numar.Add(1, 2, 5) << endl;
	std::cout << "add(float, float) " << numar.Add(7.5, 7.1) << endl;
	std::cout << "3*float " << numar.Add(3.5, 4.2, 5.1) << endl;
	std::cout << "mul 2*int " << numar.Mul(6, 7) << endl;
	std::cout << "mul 3*int " << numar.Mul(3, 4, 5) << endl;
	std::cout << "mul 2*double " << numar.Mul(6, 7, 4.2) << endl;
	std::cout << "mul 3*double " << numar.Mul(3.5, 4.2, 5.1) << endl;
	std::cout << "add ?* int " << numar.Add(5, 1, 2, 3, 4, 5) << endl;
	std::cout << "add 2*char " << numar.Add("Buna ", "ziua!") << endl;


}