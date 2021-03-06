#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

/*
数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。
你可以假设数组是非空的，并且给定的数组总是存在多数元素。

示例 1:

输入: [1, 2, 3, 2, 2, 2, 5, 4, 2]
输出: 2


限制：

1 <= 数组长度 <= 50000

 */

int majorityElement1(vector<int>& nums) {
   unordered_map<int, int> m;
   int halfsize = nums.size() / 2;

   for(int i : nums)
   {
       if(m.find(i) != m.end())
       {
           m[i]++;
       }
       else
       {
           m[i] = 1;
       }
   }

   for(auto i : m)
   {
       if(i.second > halfsize)
       {
           return i.first;
       }
   }

   return -1;
}

//摩尔投票法，直接计算数字出现的次数
int majorityElement(vector<int>& nums) {
    int res = 0;
    int count = 0;
    for(int i : nums)
    {
        if(res == i)
        {
            count++;
        }
        else
        {
            count--;
        }

        if(count < 0)
        {
            res = i;
        }
    }

    return res;
}

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
