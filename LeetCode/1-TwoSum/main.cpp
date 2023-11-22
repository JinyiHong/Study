#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vRet;
        unordered_map<int, int> map;
        bool bFinish = false;

        for (int i = 0 ; i < nums.size() ; ++i)
            ++map[nums[i]];

        for (int i = 0 ; i < nums.size() ; ++i)
        {
            int iNeed = target - nums[i];
            if (map[iNeed])
            {
                if (iNeed == nums[i] && map[iNeed] == 1)
                    continue;

                for (int j = i+1 ; j < nums.size() ; ++j)
                {
                    if (iNeed == nums[j])
                    {
                        vRet.push_back(i);
                        vRet.push_back(j);
                        bFinish = true;
                        break;
                    }
                }
            }

            if (bFinish) break;
        }
        return vRet;
    }
};

int main()
{
    cout << "Hello World!" << endl;

    vector<int> iInput;

    iInput.push_back(3);
    iInput.push_back(2);
    iInput.push_back(4);

    Solution sol;

    sol.twoSum(iInput, 6);

    return 0;
}
