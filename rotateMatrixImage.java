class Solution {
    /*
    * given an n x n 2D matrix representing an image,this class  rotate the image by 90 degrees (clockwise).
    * I hve rotated the image in-place, which means I have to modify the input 2D matrix directly. Without allocate another 2D matrix and do the rotation.
    * sample input:
      [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
      outpt:
      [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]
    */
    public void rotate(int[][] matrix) {
        int n=matrix.length;
        //first transposing the matrix
        //second swaping the last column and first column
        
        //transpose
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
                
            }
        }
        //swaping
        for(int i=0;i<n;i++){
            for(int j=0;j<n/2;j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[i][n-1-j];
                matrix[i][n-1-j]=temp;
            }
        }
    }
}