class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left = 0, right = matrix.size() - 1;
        int numCols = matrix[0].size();
        while (left <= right) {
            int mid = (left + right) / 2;
            if (matrix[mid][0] <= target && matrix[mid][numCols - 1] >= target) {
                int start = 0, end = numCols - 1;
                while (start <= end) {
                    int cen = (start + end) / 2;
                    if (matrix[mid][cen] == target) {
                        return true;
                    } else if (matrix[mid][cen] < target) {
                        start = cen + 1;
                    } else {
                        end = cen - 1;
                    }
                }
                return false;
            } else if (matrix[mid][numCols - 1] < target) {
                left = mid + 1; 
            } else {
                right = mid - 1; 
            }
        }
        return false;
    }
};