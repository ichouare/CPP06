#ifndef SCALARCONVERTER_H
#define SCALARCONVERTER_H

#include <iostream>
#include <string>
#include <iomanip>
class ScalarConverter {
    private:
    ScalarConverter();
    ~ScalarConverter();
    ScalarConverter(const ScalarConverter& original);
    ScalarConverter& operator=(const ScalarConverter& original);
    public:
    static void convert(std::string target);
};

#endif 