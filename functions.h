#pragma once
#include <string>

using namespace std;

inline int Count(const string& s)
{
    int count = 0;

    for (size_t i = 0; i + 2 < s.length(); i++)
    {
        if (s[i] == '+' && s[i + 2] == '-')
            count++;
    }

    return count;
}

inline string Replace(const string& s)
{
    string result;

    for (size_t i = 0; i < s.length(); i++)
    {
        if (i + 2 < s.length() &&
            s[i] == '+' && s[i + 2] == '-')
        {
            result += "****";
            i += 2;
        }
        else
        {
            result += s[i];
        }
    }

    return result;
}
