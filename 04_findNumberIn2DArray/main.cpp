#include <iostream>
#include <vector>

using namespace std;

//[
//  [1,   4,  7, 11, 15],
//  [2,   5,  8, 12, 19],
//  [3,   6,  9, 16, 22],
//  [10, 13, 14, 17, 24],
//  [18, 21, 23, 26, 30]
//]

bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
    if(matrix.empty())
    {
        return false;
    }

    int nEndPos = matrix.at(0).size()-1;
    int nNextEndPos = -1;
    for(int i=0; i<matrix.size(); i++){
        if(-1 != nNextEndPos)
        {
            nEndPos = nNextEndPos;
        }
        vector<int> v = matrix.at(i);
        for(int j=0; j<=nEndPos; j++){
            if(j==0 && target < v.at(j)){
                break;
            }
            else if(j>0 && target < v.at(j)){
                nNextEndPos = j-1;
                continue;
            }
            else if(target == v.at(j)){
                return true;
            }
        }
    }

    return false;
}

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
