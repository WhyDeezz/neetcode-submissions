class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> prefix(size);
        vector<int> postfix(size);
        vector<int> sol(size);
        int prod = 1;
        for(int i = 0; i < size;i++)
        {
            prod = prod*nums[i];
            prefix[i] = prod;
        }
        prod = 1;
        for(int i = size-1; i >= 0 ;i--)
        {
            prod = prod*nums[i];
            postfix[i] = prod;
        }
        for(int i = 0; i < size ; i++)
        {
            if((i-1 >= 0) && (i+1 <= size-1))
            {
                sol[i] = prefix[i-1]*postfix[i+1];
            }
            else
            {
                if((i-1) < 0)
                {
                    sol[i] = postfix[i+1];
                }
                else if(i+1 > size-1)
                {
                    sol[i] = prefix[i-1];
                }
                
            }
        }
        return sol;
    }
};
