class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
    int n = temperatures.size();
        vector<int> ans(n, 0);
        stack<int> st;

        for (int i = 0; i < n; i++) {
            while (!st.empty() &&
                   temperatures[i] > temperatures[st.top()]) {

                int prevDay = st.top();
                st.pop();

                ans[prevDay] = i - prevDay;
            }

            st.push(i);
        }

        return ans;
    }

    // vector<int> dailyTemperatures(vector<int>& temperatures) {
    //     int n = temperatures.size();
    //     vector<int> ans(n, 0);

    //     for (int i = 0; i < n; i++) {
    //         for (int j = i + 1; j < n; j++) {
    //             if (temperatures[j] > temperatures[i]) {
    //                 ans[i] = j - i;
    //                 break;
    //             }
    //         }
    //     }

    //     return ans;
    // }
};
