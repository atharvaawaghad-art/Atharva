class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> st;
        for (string op : operations) {
            if (op == "C") {
                st.pop_back();
            }
            else if (op == "D") {
                st.push_back(2 * st.back());
            }
            else if (op == "+") {
                int n = st.size();
                st.push_back(st[n - 1] + st[n - 2]);
            }
            else {
                st.push_back(stoi(op));
            }
        }
        int ans = 0;
        for (int score : st) {
            ans += score;
        }
        return ans;
    }
};