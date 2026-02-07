class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int>result;
        bool shouldAdd=true;
        for(int row=0;row<grid.size();row++){
            if(row%2 !=0){
                reverse(grid[row].begin(),grid[row].end());
            }
            for(int element: grid[row]){
                if(shouldAdd){
                    result.push_back(element);
                }
                shouldAdd = !shouldAdd;
            }
        }
        return result;
    }
};