import java.util.Random;

public class MaxValue {

  // Driver Code
  public static void main(String[] args) {
    Random rand = new Random();

    // test 100 times using rand numbers
    for (int i = 1; i <= 100; ++i) {
      // generate number from -50 to 49
      int a = rand.nextInt(100) - 50;
      int b = rand.nextInt(100) - 50;
      assert max(a, b) == Math.max(a, b);
    }
  }

  public static int max(int a, int b) {
    return a >= b ? a : b;
  }
}
