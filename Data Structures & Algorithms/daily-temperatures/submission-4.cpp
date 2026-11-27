class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>>s;
       
        vector<int> sol(temperatures.size(),0);
        for(int i = 0; i < temperatures.size(); i++)
        {
            if(s.empty())
            {
                s.push({temperatures[i],i});
            }
        
            if(temperatures[i] > s.top().first)
            {
                while(!s.empty() && temperatures[i] > s.top().first)
                {
                    sol[s.top().second] = i - s.top().second;
                    s.pop();
                }
                s.push({temperatures[i],i});
            }
            else
            {
                 s.push({temperatures[i],i});
            }
        }
       

        return sol;
        
        


        
        
    }
};
