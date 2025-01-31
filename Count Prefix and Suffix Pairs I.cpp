class Solution {
public:
    bool isPrefix(string word1, string word2){
        if(word1.size() > word2.size()) return false;
        for(int i=0; i<word1.size(); i++){
            if(word1[i] != word2[i]) return false;
        }
        return true;
    }
    
    bool isSuffix(string word1, string word2){
        if(word1.size() > word2.size()) return false;
        int i=word1.size()-1, j=word2.size()-1;
        while(i>=0){
            if(word1[i] != word2[j]) return false;
            i--, j--;
        }
        return true;
    }

    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;
        for(int i=0; i<words.size(); i++){
            for(int j=i+1; j<words.size(); j++){
                string word1=words[i], word2=words[j];
                if(isPrefix(word1, word2) && isSuffix(word1, word2)) count++;
            }
        }
        return count;
    }
};
