class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> vec(m,string(n,'#'));
        for(int i = 0 ; i<m;i++){
            vec[i][0] = '.';
        }
        for(int i =0 ; i<n ; i++){
            vec[m-1][i] = '.';
        }
        
        return vec;
    }
};