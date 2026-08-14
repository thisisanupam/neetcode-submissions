class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> seen;
        string row,col,box;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board.size();j++){
                char ch  = board[i][j];
                if(ch == '.'){
                    continue;
                }
                row  = "row" + to_string(i) + ch;
                col  = "col" + to_string(j) + ch;
                box  = "box" + to_string((i/3)*3 + (j/3)) + ch;
                 if(seen.count(row) || seen.count(col) || seen.count(box)){
                   return false;
                }
                seen.insert(row);
                seen.insert(col);
                seen.insert(box);
            }
        }
        return true;
    }
};
