#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int iRet = 0;
        int iTmp = 0;
        string strTmp;
        unordered_map<char, int> map;

        if (s.length() == 0) return 0;
        if (s.length() == 1) return 1;

        // Need to Point start Idx and Last Idx to caculate Length
        for (int i = 0 ; i < s.length() ; ++i)
        {

        }

        return iRet;
    }
};

int main()
{
    cout << "Hello World!" << endl;

    Solution sol;

    sol.lengthOfLongestSubstring(string("bbbbb"));

    return 0;
}
