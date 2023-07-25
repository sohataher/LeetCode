class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer;
        int i, prefix = 1, postfix = 1;
        
        for (i = 0; i < nums.size(); i++)
        {
            answer.push_back(prefix);;
            prefix *= nums[i];
        }
        for (i -= 1; i >= 0; i--)
        {
            answer.at(i) = answer.at(i) * postfix;
            postfix *= nums[i];
        }
        return answer;   
    }
};