#include "string/reverse.h"
#include <algorithm>

std::string reverse(const std::string& input)
{
    std::string result = input;
    std::reverse(result.begin(),result.end());
    return result; 

}
