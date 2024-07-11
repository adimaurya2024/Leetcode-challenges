class Solution {
public:
    string reversePrefix(string word, char ch) {
        bool j= 0;
        int pos=0;
        for(int i=0; i<word.size(); i++)
        {
            if(word[i]==ch)
            {
                j=1;
                pos= i;
                break;
            }
        }
        if(j==1){
            int i=0;
            while(i<pos)
            {
                swap(word[i],word[pos]);
                i++;
                pos--;
            }
        }
        return word;
    }
};
