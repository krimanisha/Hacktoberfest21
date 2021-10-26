// Java Program to Rotate Matrix Elements

// Importing classes from java.lang package
import java.lang.*;
// Importing classes from java.util package
import java.util.*;

// main Class
class RotateMatrix {
	static int r = 4;
	static int c = 4;

	// Method
	// To rotate a matrix of
	// dimension r x c. And initially,
	// p = r and q = c
	static void rotate_matrix(int p, int q, int matrix[][])
	{
		int rw = 0, cl = 0;
		int previous, current;

		// rw is the Staring row index
		// p is the ending row index
		// cl is the starting column index
		// q is the ending column index and
		// x is the iterator
		while (rw < p && cl < q) {

			if (rw + 1 == p || cl + 1 == q)
				break;

			// After storing the first element of the
			// next row, this element will substitute
			// the first element of the current row
			previous = matrix[rw + 1][cl];

			// Moving the elements of the first row
			// from rest of the rows
			for (int x = cl; x < q; x++) {
				current = matrix[rw][x];
				matrix[rw][x] = previous;
				previous = current;
			}
			rw++;

			// Moving the elements of the last column
			// from rest of the columns
			for (int x = rw; x < p; x++) {
				current = matrix[x][q - 1];
				matrix[x][q - 1] = previous;
				previous = current;
			}
			q--;

			// Moving the elements of the last row
			// from rest of the rows
			if (rw < p) {
				for (int x = q - 1; x >= cl; x--) {
					current = matrix[p - 1][x];
					matrix[p - 1][x] = previous;
					previous = current;
				}
			}
			p--;

			// Moving elements of the first column
			// from rest of the rows
			if (cl < q) {
				for (int x = p - 1; x >= rw; x--) {
					current = matrix[x][cl];
					matrix[x][cl] = previous;
					previous = current;
				}
			}
			cl++;
		}

		// Prints the rotated matrix
		for (int x = 0; x < r; x++) {
			for (int y = 0; y < c; y++)
				System.out.print(matrix[x][y] + " ");
			System.out.print("\n");
		}
	}
	
	// Method 2
	// Main driver method
	public static void main(String[] args)
	{

		// Custom input array
		int b[][] = { { 5, 6, 7, 8 },
					{ 1, 2, 3, 4 },
					{ 0, 15, 6, 5 },
					{ 3, 1, 2, 12 } };

		// Calling function(Method1) to rotate matrix
		rotate_matrix(r, c, b);
	}
}
