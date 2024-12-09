//Link: https://leetcode.com/problems/fruit-into-baskets/submissions/1474526557/
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int l = 0;
        int r = 0;
        int maxlen = 0;//not INT_MIn bcz it cant be negative
        unordered_map<int, int> freq;

        while(r < n){
            freq[fruits[r]]++;
            
                while(freq.size() > 2){
                    freq[fruits[l]]--;

                    if(freq[fruits[l]] == 0)freq.erase(fruits[l]);

                    l++;
                }
            
            if(freq.size() <= 2){
                maxlen = max(maxlen, r - l + 1);
            }
            r++;
        }
        return maxlen;
    }
};
