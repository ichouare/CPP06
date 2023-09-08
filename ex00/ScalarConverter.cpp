#include "./ScalarConverter.hpp"


ScalarConverter::ScalarConverter()
{

}

ScalarConverter::~ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter& original)
{
    *this = original;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& original)
{
    (void) original;
    return *this;
}

void ScalarConverter::convert(std::string target)
{
    int pos = 0;
    
    try 
    {
        if(target == "nan" || target == "+inf" || target == "-inf")
            throw target;
        int a = std::stoi(target);
        std::cout << "int : "<< a << std::endl;
        char d = static_cast<char>(a);
        if(std::isprint(d))
            std::cout << "char : " << "'" << d << "'" <<std::endl;
        else
            throw -1;
    }
    catch(std::exception &e)
    {
        std::cout  << "int : imposible" << std::endl;
        std::cout  << "char : imposible" << std::endl;
    }
    catch(int E)
    {
        std::cout << "char :  Non displayable" << std::endl; 
    }
    catch(std::string target)
    {
        std::cout << "char : impossible" << std::endl; 
        std::cout << "int : impossible" << std::endl; 
    }


    try 
    {
        if(target == "nan" || target == "+inf" || target == "-inf")
            throw target;
        float f = std::stof(target);
        std::cout  << "float : " << f;
        pos = target.find(".");
        if(pos == -1)
            std::cout << ".0f" << std::endl;
        else
        {
            if(target[pos +1] == '0')
                   std::cout << ".0";
            std::cout << "f\n";
        }
    }
    catch(std::exception &e)
    {
        std::cout << "float : " << "imposible" << std::endl;;
    }
    catch(std::string target)
    {
        std::cout << "float : " << target <<"f" << std::endl; 
    }
    try 
    {
        if(target == "nan" || target == "+inf" || target == "-inf")
            throw target;
        double f = std::stod(target);
        std::cout << "double : "<< f;
        pos = target.find(".");
        if(pos == -1)
            std::cout << ".0" << std::endl;
        else
        {
            if(target[pos +1] == '0')
                   std::cout << ".0";
        }
    }
    catch(std::exception &e)
    {
        std::cout << "double : imposible" << std::endl;
    }
    catch(std::string target)
    {
        std::cout << "double : " << target<< std::endl; 
    }
}


