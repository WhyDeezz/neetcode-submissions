class Solution {
public:

    string encode(vector<string>& strs) {
        string encode = "";
        for(auto word: strs)
        {
            string temp = "";
            for(auto chr: word)
            {
                int k = chr + 1;
                temp += k;
            }
            temp += " ";
            encode += temp;
        }
        return encode;


    }

    vector<string> decode(string s) {
        vector<string> sol;
        string temp = "";
        for(auto words: s)
        {
            if(words == ' ')
            {
                sol.push_back(temp);
                temp = "";
            }
            else
            {
                int k = words - 1;
                temp += k;
            }
        }
        return sol;

    }
};
