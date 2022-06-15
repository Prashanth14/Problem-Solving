// Given an array points where points[i] = [xi, yi] represents a point on the X-Y plane, return true if these points are a boomerang.

// A boomerang is a set of three points that are all distinct and not in a straight line.

// Example 1:

// Input: points = [[1,1],[2,3],[3,2]]
// Output: true
// Example 2:

// Input: points = [[1,1],[2,2],[3,3]]
// Output: false
 

// Constraints:

// points.length == 3
// points[i].length == 2
// 0 <= xi, yi <= 100



class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        // If three points are the same, the area covered by the points is zero.
        // If they are on the same line, the area covered by points is zero.
        int x1 = points[0][0];
        int x2 = points[1][0];
        int x3 = points[2][0];
        
        int y1 = points[0][1];
        int y2 = points[1][1];
        int y3 = points[2][1];
        
       return x1 * (y2 - y3) + x2 * (y3 - y1) +  x3 * (y1 - y2) != 0;
    }
};