class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int ,int>m;
        for (int i=0;i<nums.size();i++){
           if (m.find(nums[i])!=m.end())
            m[nums[i]] ++;
            else
            m.insert({nums[i],1});
           
        }
        for (auto x:m){
            if(x.second>1){
                return true;
            }
        }
        return false;
    }
};