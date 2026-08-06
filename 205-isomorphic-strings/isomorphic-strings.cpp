class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if (s.length() != t.length())
            return false;

        unordered_map<char,char> mpp;
        unordered_set<char> mappedValues;

        for(int i=0;i<s.length();i++){

            char original = s[i];
            char replacement = t[i];

            if(mpp.find(original)!=mpp.end()){

                if(mpp[original]!=replacement)
                    return false;
            }

            else{

                if(mappedValues.find(replacement)!=mappedValues.end())
                    return false;

                mpp[original]=replacement;
                mappedValues.insert(replacement);
            }
        }

        return true;
    }
};