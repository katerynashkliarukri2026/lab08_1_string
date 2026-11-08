#pragma once
#include <string>

using namespace std;

inline int Count(const string& s)
{
    int count = 0;

    for (size_t i = 0; i + 2 < s.length(); i++)
    {
        if (s.compare(i, 3, "OGO") == 0 ||
            s.compare(i, 3, "AGA") == 0)
        {
            count++;
            i += 2;
        }
    }

    return count;
}

inline string Replace(const string& s)
{
    string result;

    for (size_t i = 0; i < s.length(); i++)
    {
        if (i + 2 < s.length() &&
            (s.compare(i, 3, "OGO") == 0 ||
                s.compare(i, 3, "AGA") == 0))
        {
            result += "**";
            i += 2;
        }
        else
        {
            result += s[i];
        }
    }

    return result;
}