#include "Utils.h"

vector<string> Utils::split(string target, string delim)
{
	vector<string> v;

	size_t pos{ 0 };
	string token;

	while ((pos = target.find(delim)) != std::string::npos) {
		//token = trim(target.substr(0, pos));
		//token = trim(token);
		v.push_back(trim(target.substr(0, pos)));
		target.erase(0, pos + delim.length());
	}
	//target = trim(target);
	v.push_back(trim(target));

	return v;
}

string Utils::ltrim(const std::string& s)
{
	std::string WHITESPACE = " \n\r\t\f\v";
	size_t start = s.find_first_not_of(WHITESPACE);
	return (start == std::string::npos) ? "" : s.substr(start);
}

string Utils::rtrim(const std::string& s)
{
	std::string WHITESPACE = " \n\r\t\f\v";
	size_t end = s.find_last_not_of(WHITESPACE);
	return (end == std::string::npos) ? "" : s.substr(0, end + 1);
}

string Utils::trim(const std::string& s)
{
	return rtrim(ltrim(s));
}

string Utils::trimV2(const std::string& s)
{
	auto start = s.begin();
	while (start != s.end() && std::isspace(*start)) {
		start++;
	}

	auto end = s.end();
	do {
		end--;
	} while (std::distance(start, end) > 0 && std::isspace(*end));

	return std::string(start, end + 1);
}