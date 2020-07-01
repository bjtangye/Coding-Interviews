#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

vector<int> reversePrint(ListNode* head) {
    vector<int> v;
    while(head)
    {
        v.push_back(head->val);
        head = head->next;
    }

    std::reverse(v.begin(), v.end());

    return v;
}

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
