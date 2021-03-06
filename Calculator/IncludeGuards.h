#ifndef H_HEADER
#define H_HEADER
#include <string>

double Sum(double, double);

double Diff(double, double);

double Multi(double, double);

double Div(double, double);

double Root(double);

double Expon(double);

std::string Clear();

std::string Delete(std::string);

std::string parse(std::string);

double bracklf(std::string&, int, int&);

double brackri(std::string&, int, int&);

double getfirnum(std::string, int, int&);

int replace(std::string&, int, int, double);

double getsecnum(std::string, int, int&);

std::string check(std::string);

#endif 