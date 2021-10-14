import java.util.*;  
class Laptops{  
    int id;  
    String name;  
    float price;  
    public Laptops(int id, String name, float price) {  
        this.id = id;  
        this.name = name;  
        this.price = price;  
    }  
}  
public class JavaStreamExample {  
    public static void main(String[] args) {  
        List<Laptops> laptopsList = new ArrayList<Laptops>();  
        //Adding Products  
        laptopsList.add(new Laptops(1,"HP Laptop",25000f));  
        laptopsList.add(new Laptops(2,"Dell Laptop",30000f));  
        laptopsList.add(new Laptops(3,"Lenevo Laptop",28000f));  
        laptopsList.add(new Laptops(4,"Sony Laptop",28000f));  
        laptopsList.add(new Laptops(5,"Apple Laptop",90000f));  
        // This is more compact approach for filtering data  
        laptopsList.stream()  
                             .filter(laptop -> laptop.price == 30000)  
                             .forEach(laptop -> System.out.println(laptop.name));    
    }  
}  