class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> mp;

        int lp = 0;
        int rp = 0;
        int n = fruits.size();
        int ans = 0;

        while (rp < n) {

            mp[fruits[rp]]++;
            rp++;

            while (mp.size() > 2) {

                mp[fruits[lp]]--;

                if (mp[fruits[lp]] == 0)
                    mp.erase(fruits[lp]);

                lp++;
            }

            ans = max(ans, rp - lp);
        }

        return ans;
    }
};