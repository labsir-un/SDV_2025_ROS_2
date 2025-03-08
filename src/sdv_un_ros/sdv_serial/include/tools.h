#include <unistd.h>
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include <inttypes.h>
#include <vector>
#include <string>
#include <algorithm>

#pragma once

using namespace std;
using std::string;
using std::vector;

namespace tools
{

    /**
     * Constrain a value between a minimum value and maximum value.
     * 
     * @param value Value to be constrained
     * @param minval Min value. Must be smaller than maxvalue
     * @param maxval Max value. Must be greater than minvalue
     */
    double constrain(double value, double minval, double maxval);

    /**
     * Return a vector where every element is a argument in received data string.
     * 
     * @param data String with arguments
     */
    vector<string> getArgs(string data);

    /**
     * Return a string without '\r' and '\n' characters.
     * 
     * @param data String to be cleaned
     * @return Cleaned string
     */
    string cleanString(string s);
}