class Solution {
public:
    int numCube(int i, int j){
        int start=0;
        int end=2;
        int cube_num=0;
        // for(int k=0;k<9;k+=3){
        //     if((i>=start and i<=end) and (j>=start+k and j<=end+k)){
        //         return cube_num;
        //     }
        //     cube_num+=1;
        // }
        // cube_num=3;
        // for(int k=0;k<9;k+=3){
        //     if((i>=start+k and i<=end+k) and (j>=start and j<=end)){
        //         return cube_num;
        //     }
        //     cube_num+=1;
        // }
        // cube_num=6;
        // for(int k=0;k<9)
        if((i>=0 and i<=2) and (j>=0 and j<=2)){
            return '1';
        }
        else if((i>=0 and i<=2) and (j>=3 and j<=5)){
            return '2';
        }
        else if((i>=0 and i<=2) and (j>=6 and j<=8)){
            return '3';
        }
        else if((i>=3 and i<=5) and (j>=0 and j<=2)){
            return '4';
        }
        else if((i>=3 and i<=5) and (j>=3 and j<=5)){
            return '5';
        }
        else if((i>=3 and i<=5) and (j>=6 and j<=8)){
            return '6';
        }
        else if((i>=6 and i<=8) and (j>=0 and j<=2)){
            return '7';
        }
        else if((i>=6 and i<=8) and (j>=3 and j<=5)){
            return '8';
        }
        else if((i>=6 and i<=8) and (j>=6 and j<=8)){
            return '9';
        }
        return -1;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>>cubes(100);
        unordered_map<char,int>dict(100);
        for(int i=0;i<9;i++){
            set<char>rows;
            set<char>columns;
            int quantity_row=0;
            int quantity_col=0;
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    
                }
                else{
                    rows.insert(board[i][j]);
                    quantity_row+=1;
                }
                if(board[j][i]=='.'){
                    
                }
                else{
                    columns.insert(board[j][i]);
                    quantity_col+=1;
                }
                char temp=numCube(i,j);
                if(board[i][j]!='.'){
                    dict[temp]+=1;
                    cubes[temp].insert(board[i][j]);
                }
            }
            if(rows.size()!=quantity_row){
                cout<<rows.size()<<" "<<quantity_row;
                return false;
            }
            if(columns.size()!=quantity_col){
                cout<<columns.size()<<" "<<quantity_col;
                return false;
            }
        }
        
        vector<char>chars{'1','2','3','4','5','6','7','8','9'};
        for(int i=0;i<chars.size();i++){
            if(cubes[chars[i]].size() != dict[chars[i]]){
                cout<<cubes[chars[i]].size()<<" "<<dict[chars[i]]<<endl;
                return false;
            }
        }
        return true;
        
    }
};
