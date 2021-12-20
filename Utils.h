#pragma once
#include <string>
#include <vector>

using namespace std;

class Utils
{
public:

	//const static std::string WHITESPACE = " \n\r\t\f\v";

	static vector<string> split(string target, string delim);

	static string ltrim(const std::string& s);

	static string rtrim(const std::string& s);

	static string trim(const std::string& s);

	static string trimV2(const std::string& s);
};