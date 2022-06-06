// Given an array of strings words, return the words that can be typed using letters of the alphabet on only one row of American keyboard like the image below.

// In the American keyboard:

// the first row consists of the characters "qwertyuiop",
// the second row consists of the characters "asdfghjkl", and
// the third row consists of the characters "zxcvbnm".

// Example 1:

// Input: words = ["Hello","Alaska","Dad","Peace"]
// Output: ["Alaska","Dad"]
// Example 2:

// Input: words = ["omk"]
// Output: []
// Example 3:

// Input: words = ["adsdf","sfd"]
// Output: ["adsdf","sfd"]


class Solution {
public:
    vector<string> findWords(vector<string>& words) {
       int size = words.size();
        vector<string> output;
        string row1, row2, row3;
        row1 = "qwertyuiop";
        row2 = "asdfghjkl";
        row3 = "zxcvbnm";
        for(int i = 0; i < size; i++){
            int f = 3;
            bool isvalid = true;
            
            if(row1.find(tolower(words[i][0])) != -1){
                f = 1;
            }else if(row2.find(tolower(words[i][0])) != -1){
                f = 2;
            }
            
            for(int j = 0; j < words[i].length(); j++){
                if(f == 1){
                    if( row1.find(tolower(words[i][j])) == -1){
                        isvalid = false;
                        break;
                    }
                }else if(f == 2){
                    if( row2.find(tolower(words[i][j])) == -1){
                        isvalid = false;
                        break;
                    }
                } else if(f == 3){
                    if( row3.find(tolower(words[i][j])) == -1){
                        isvalid = false;
                        break;
                    }
                }
            }
            if(isvalid == true)
                output.push_back(words[i]);
        }
        return output;
    }
};
