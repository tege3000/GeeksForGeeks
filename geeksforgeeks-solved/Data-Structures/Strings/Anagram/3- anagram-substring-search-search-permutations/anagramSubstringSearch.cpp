/*
 * Topic: Check whether two strings are anagram of each other
 *
 * Description: Write a function to check whether two given
 * strings are anagram of each other or not. An anagram of a
 * string is another string that contains the same characters,
 * only the order of characters can be different. For example,
 * “abcd” and “dabc” are an anagram of each other.
 */
#include <iostream>
#include <unordered_map>
#include <set>

using namespace std;

bool areAnagram(string s1, string s2)
{
    unordered_map<char, int> mp;

    for (int i = 0; i < s1.size(); i++)
    {
        mp[s1[i]]++;
    }

    set<char> distinct;
    for (int i = 0; i < s2.size(); i++)
    {
        distinct.insert(s2[i]);
    }

    for (auto i : distinct)
    {
        if (count(s2.begin(), s2.end(), i) != mp[i])
        {
            return false;
        }
    }

    return true;
}

void anagramSubstringSearch(string txt, string pat)
{
    for (int i = 0; i <= txt.size() - pat.size(); i++)
    {
        if (areAnagram(txt.substr(i, pat.size()), pat))
        {
            cout << "Found at Index " << i << "\n";
        }
    }
}

int main()
{
    string txt = "BACDGABCDA";
    string pat = "ABCD";

    anagramSubstringSearch(txt, pat);
    cout << "\n";
    string txt2 = "AAABABAA";
    string pat2 = "AABA";

    anagramSubstringSearch(txt2, pat2);

    return 0;
}
