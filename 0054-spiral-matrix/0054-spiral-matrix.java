class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        ArrayList<Integer> Spiral = new ArrayList<>();
        int row = matrix.length;
        int col = matrix[0].length;
        int top=0,right=col-1,left=0,bottom=row-1;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                Spiral.add(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                Spiral.add(matrix[i][right]);
            }
            right--;
            if(top>bottom) break;
            for(int i=right;i>=left;i--){
                Spiral.add(matrix[bottom][i]);
            }
            bottom--;
            if(left>right) break;
            for(int i=bottom;i>=top;i--){
                Spiral.add(matrix[i][left]);
            }
            left++;
        }
        return Spiral;
    }
}