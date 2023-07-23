class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map <int, bool> check;
        int i;
        
        for (i = 0; i < nums.size(); i++)
        {
            if (check[nums[i]])
                return true;
            check[nums[i]] = true;
        }
        return false;
    }
};