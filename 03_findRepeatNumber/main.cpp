#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int findRepeatNumber(vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    int size = nums.size();
    if(size >=2 && size<=100000)
    {
        for(int i=1; i<size; i++)
        {
            if(nums.at(i-1) == nums.at(i))
            {
                return nums.at(i);
            }
        }
    }

    return -1;
}

int findRepeatNumber1(vector<int>& nums) {
    unordered_map<int,int> m;
    int size = nums.size();
    if(size >=2 && size<=100000)
    {
        for(int i=0; i<size; i++)
        {
            if(m.find(nums.at(i)) != m.end())
            {
                return nums.at(i);
            }

            m[nums[i]] = i;
        }
    }

    return -1;
}

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
