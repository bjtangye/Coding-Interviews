#include <iostream>
#include <string>
using namespace std;

string replaceSpace(string s) {

    if(s.size() == 0)
    {
        return s;
    }

    int i=0;
    if(s[i] == ' ')
    {
        s = "%20" + s.substr(1);
        i=3;
    }

    for(; i<s.size(); i++)
    {
        if(s[i] == ' ')
        {
            if(i+1 == s.size())
            {
                s = s.substr(0,i) + "%20";
            }
            else
            {
                s = s.substr(0,i) + "%20" + s.substr(i+1);
                i +=2;
            }

        }
    }


    return s;
}

int main()
{
    cout << replaceSpace("We are happy.") << endl;
    return 0;
}
