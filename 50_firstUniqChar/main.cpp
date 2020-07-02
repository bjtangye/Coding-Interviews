#include <iostream>
#include <unordered_map>

using namespace std;

char firstUniqChar(string s) {

    unordered_map<char,int> m;
    for(int i=0; i<s.size(); i++)
    {
        if(m.find(s[i]) != m.end())
        {
            m[s[i]]++;
        }
        else
        {
            m[s[i]] = 0;
        }
    }

    for(int i=0; i<s.size(); i++)
    {
        if(m[s[i]] == 0)
        {
            return s[i];
        }
    }

    return ' ';
}

int main()
{
    char s = firstUniqChar("aadadaad");
    cout <<':' << s << endl;
    return 0;
}
