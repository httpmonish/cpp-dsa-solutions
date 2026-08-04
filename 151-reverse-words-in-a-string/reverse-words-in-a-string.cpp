class Solution {
public:
    string reverseWords(string s) {

        int n = s.length();
        string answer = "";

        // Reverse the complete string
        reverse(s.begin(), s.end());

        // Traverse the reversed string
        for (int i = 0; i < n; i++) {

            string word = "";

            // Extract one word
            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            // If word is not empty
            if (word.length() > 0) {

                // Reverse the word
                reverse(word.begin(), word.end());

                // Add it to the answer
                answer += " " + word;
            }
        }

        // Remove the first extra space
        return answer.substr(1);
    }
};