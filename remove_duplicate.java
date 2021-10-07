import java.util.Arrays;
 
public class remove_duplicate{
   static void unique_array(int[] my_array)
    {
        System.out.println("Original Array : \n");
         
        for (int i = 0; i < my_array.length; i++)
        {
            System.out.print(my_array[i]+"\t");
        }
        
        int no_unique_elements = my_array.length;
        for (int i = 0; i < no_unique_elements; i++) 
        {
            for (int j = i+1; j < no_unique_elements; j++)
            {
               
                if(my_array[i] == my_array[j])
                {
                    my_array[j] = my_array[no_unique_elements-1];
                     
                    no_unique_elements--;
                     
                    j--;
                }
            }
        }
         
        int[] array1 = Arrays.copyOf(my_array, no_unique_elements);
        
        System.out.println("\n ");
        System.out.println("\n Array with unique values : \n ");
         
        for (int i = 0; i < array1.length; i++)
        {
            System.out.print(array1[i]+"\t");
        }
         
        System.out.println();
    }
     
    public static void main(String[] args) 
    {        
        unique_array(new int[] {0, 3, 5, 5, -2, 4, 3, 2});
         
         
      }    
}
