#pragma once
#include <iostream>
#include <string>
extern std::string ErrorString;

class Data{

private:
	bool _FileExists(char FileName[6]);

public:

	void RepairCrash(char FileName[6]);
	void CheckData(char FileName[6]);

};