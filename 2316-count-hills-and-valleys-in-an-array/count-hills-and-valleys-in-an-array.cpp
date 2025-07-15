class Solution {
public:
    int countHillValley(vector<int>& a) {
        vector<int> b;
        b.push_back(a[0]);

        for (int i = 1; i < a.size(); i++) {
            if (a[i] != a[i - 1]) {
                b.push_back(a[i]);
            }
        }

        int cnt = 0;
        for (int i = 1; i < b.size() - 1; i++) {
            if (b[i] > b[i - 1] && b[i] > b[i + 1]) {
                cnt++; 
            } else if (b[i] < b[i - 1] && b[i] < b[i + 1]) {
                cnt++;  
            }
        }

        return cnt;
    }
};
