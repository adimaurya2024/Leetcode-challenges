class Solution {
public:
    int scoreOfString(string s) {
        int sum= 0;
        for(int i=0; i<s.size()-1; i++)
        {
            int first= s[i];
            int sec= s[i+1];
            sum += abs(first- sec);
        }
        return sum;
    }
};
