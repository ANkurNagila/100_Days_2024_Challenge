class Solution {
public:
    bool isCharacter(char c){
        bool b1=('a'<=c && c<='z');
        bool b2=('A'<=c && c<='Z');

        return b1||b2;
    }

    bool isNumeric(char c){
        return ('0'<=c && c<='9');
    }

    bool isPalindrome(string s) {
        if(s.size()<=1)
            return true;

        int i=0,j=s.size()-1;

        while(i<j){
            bool res1 = isCharacter(s[i]);
            bool res2 = isCharacter(s[j]);

            if(!(res1 || isNumeric(s[i]))){
                i++;
                continue;
            }
            if(!(res2 || isNumeric(s[j]))){
                j--;
                continue;
            }

            if(res1 && res2){
                char first = (char)tolower(s[i]);
                char second = (char)tolower(s[j]);

                if(first==second){
                    i++;
                    j--;
                }
                else
                    return false;
            }
            else{
                if(s[i]==s[j]){
                    i++;
                    j--;
                }
                else
                    return false;
            }
        }

        return true;
    }
};
