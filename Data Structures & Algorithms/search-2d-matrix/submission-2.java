class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {

        if(matrix.length == 0 || matrix[0].length == 0){
            return false;
        }

        List<Integer> finalArr = new ArrayList<>();
        
        int m = matrix.length;
        int n = matrix[0].length;
        for(int i=0; i < m; i++){
            for(int j=0; j < n; j++){
                finalArr.add(matrix[i][j]);
            }
        }


        for(int i=0; i < finalArr.size(); i++){
            if(finalArr.get(i) == target){
                 return true;
            }
        }
        return false;
    }
}
