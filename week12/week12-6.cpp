///week12-6.cpp
//leetcode 1920,build array from permutation
//for°j°é,§â°}¦Cans[1]=num[nums[i]]
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int N = nums.size();
        vector<int>ans(N);
        for(int i=0;i<N;i++){
            ans[i]=nums[nums[i]];
        }
        return ans;
    }
};
