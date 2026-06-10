#include<bits/stdc++.h>
using namespace std;
class Solution {
   public:
    int n;
    void transpose(vector<vector<int>>& matrix) {
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }

    void reverse2(vector<vector<int>>& mat) {
        for(int i=0;i<n;i++) {
            reverse(mat[i].begin(), mat[i].end());
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        n = matrix.size();
        transpose(matrix);
        reverse2(matrix);
    }
};
