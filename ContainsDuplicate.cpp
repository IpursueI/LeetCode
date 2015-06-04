#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            set<int> s;
            for(auto it = nums.begin(); it != nums.end(); ++it) {
                auto re = s.find(*it);
                if(re == s.end()) {
                    s.insert(*it);
                }
                else {
                    return true;
                }
            }    
            return false;
        }
};

int main() {
    Solution tmp;
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    cout<<tmp.containsDuplicate(v)<<endl;
    return 0;
}
