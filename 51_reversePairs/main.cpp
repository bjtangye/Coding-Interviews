#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int reversePairs(vector<int>& nums) {
    int count = 0;

    auto cmp = [&](int i, int j){
        if(i > j) {
            count++;
            return true;
        }else {
            return false;
        }
    };

    if(!nums.empty()) {
        for(int i=0; i<nums.size()-1; i++) {
            vector<int> tmp(nums.begin()+i+1, nums.end());
            std::sort(tmp.begin(),tmp.end(), cmp);
//            for(int j=0; j<tmp.size(); j++) {
//                if(nums[i] > tmp[j]) {
//                    count++;
//                }else {
//                    break;
//                }
//            }
        }
    }
    return count;
}

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
