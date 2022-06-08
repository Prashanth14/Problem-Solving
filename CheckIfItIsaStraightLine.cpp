// You are given an array coordinates, coordinates[i] = [x, y], where [x, y] represents the coordinate of a point. Check if these points make a straight line in the XY plane.

// Example 1:

// Input: coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
// Output: true
// Example 2:

// Input: coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]
// Output: false



class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        set<int> slopes{};
        sort(coordinates.begin(), coordinates.end());
        
        for(int i = 0; i < coordinates.size()-1; i++){
            int slope;
            int rise = coordinates[i+1][1] - coordinates[i][1] ;
            int run=coordinates[i+1][0] - coordinates[i][0];
            
            if(run == 0){
                slope = INT_MIN;
            }else{
                slope = rise / run;
            }
            
            slopes.insert(slope);
            
            if(slopes.size() > 1)
                return false;
            
                
        }                                   
         return slopes.size() == 1;   
    }
};
 