class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int n= words.size();
        string str= "";
        for(int i=0; i<n; i++)
        {
            char ch = words[i][0];
            str.push_back(ch);
        }
        if(str==s)
        return true;
        else
        return false;

    }
};
