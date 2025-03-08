#include <tools.h>
#include <algorithm>
#include <sstream>
#include <vector>
#include <string>

double tools::constrain(double value, double minval, double maxval)
{
    double r = value;
    if (value > maxval)
        r = maxval;
    if (value < minval)
        r = minval;
    return r;
}

std::vector<std::string> tools::getArgs(std::string data)
{
    std::stringstream ss(data);
    std::string d;
    std::vector<std::string> vdata;

    while (ss >> d)
        vdata.push_back(d);

    return vdata;
}

std::string tools::cleanString(std::string s)
{
    s.erase(std::remove(s.begin(), s.end(), '\r'), s.end());
    s.erase(std::remove(s.begin(), s.end(), '\n'), s.end());

    return s;
}

