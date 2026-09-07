class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int spcount = 0;
        int i = 0;
        for (auto& ut : sentences) {
            int words = 1;
            for (auto& i : ut) {
                if (i == ' ')
                    words++;
            }
            spcount = max(spcount, words);
        }
        return spcount;
    }
};