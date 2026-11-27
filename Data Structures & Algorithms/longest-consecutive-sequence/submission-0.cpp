class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> numSet;
        int longest = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(numSet.count(nums[i])) continue;
            numSet.insert(nums[i]);
        }
        for(auto it:numSet)
        {
            if(numSet.count(it-1)) continue;
            else
            {
                int i = 0;
                while(numSet.count(it+i))
                {
                    i++;
                }
                if(longest < i)
                {
                    longest = i;
                }
            }
        }
        return longest;
    }
};
