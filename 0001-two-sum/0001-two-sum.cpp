class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int, int> search;
        vector<int> indices;
        int i;

        for (i = 0; i < nums.size(); i++)
        {
                if (search.find(target-nums[i]) != search.end())
                {
                    indices.push_back(i);
                    indices.push_back(search[target-nums[i]]);
                    break;
                }     
                search[nums[i]] = i;     
        }
        return indices;
    }
};

