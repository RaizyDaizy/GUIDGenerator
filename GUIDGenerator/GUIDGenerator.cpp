#include <Windows.h>
#include <fstream>
#include <iostream>
#include <crossguid/guid.hpp>
int main() {
	auto newguid = xg::newGuid();
	if (!newguid.isValid()) 
	{
		std::cout << "This GUID Is Validated Successfull..." << std::endl;
	}
	else 
	{
		std::cout << "Generating New GUID..." << std::endl;
		Sleep(1200);
	}
	std::cout << "You're New GUID: " << newguid << std::endl;
	Sleep(5000);
	return 0;
}