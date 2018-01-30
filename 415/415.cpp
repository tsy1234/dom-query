class Solution {
public:
    string addStrings(string num1, string num2) {
        int len1 = num1.size() - 1, len2 = num2.size() - 1;
        int carry = 0;
        string res = "";
        while (len1 >= 0 || len2 >= 0 || carry) {
            long sum = 0;
            if (len1 >= 0) {
                sum += (num1[len1] - '0');
                len1--;
            }

            if (len2 >= 0) {
                sum += (num2[len2] - '0');
                len2--;
            }

            sum += carry;
            carry = sum / 10;
            res += to_string(sum % 10);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};