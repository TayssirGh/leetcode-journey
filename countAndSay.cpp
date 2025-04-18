class Solution {
public:
    string iterativeCountAndSay(int n) {
        string res = "1";
        for (int i = 1; i < n; i++) {
            string temp = "";
            int count = 1;
            for (int j = 1; j < res.size(); j++) {
                if (res[j] == res[j - 1]) {
                    count++;
                } else {
                    temp += to_string(count) + res[j - 1];
                    count = 1;
                }
            }
            temp += to_string(count) + res.back();
            res = temp;
        }
        return res;
    }
    string recursiveCountAndSay(int n) {
            if (n == 1) return "1";

            string prev = countAndSay(n - 1);
            string res = "";
            int i = 0;

            while (i < prev.size()) {
                int count = 1;
                while (i + 1 < prev.size() && prev[i] == prev[i + 1]) {
                    i++;
                    count++;
                }
                res += to_string(count) + prev[i];
                i++;
            }

            return res;
        }
};