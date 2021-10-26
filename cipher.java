
import java.util.Scanner;

public class cipher {
    public static void main(String[] args) {
        Scanner myObj = new Scanner(System.in);
        System.out.println("1 - Encryption");
        System.out.println("2 - Decryption");
        System.out.println("Please select an option : ");
        String option = myObj.nextLine();
        System.out.println("Please enter the key : ");
        int key = myObj.nextInt();
        myObj.nextLine();
        System.out.println("Please enter the word to encrypt : ");
        String text = myObj.nextLine();



        switch (option.toLowerCase()){
            case "1" : case "encrypt" :
                encrypt(text,key);
                break;
            case "2" : case "decrypt" :
                decrypt(text,key);
                break;
        }
    }
    public static void encrypt(String plainText,int shift){

        char [] arr = plainText.toCharArray();
        int length = plainText.length();
        for (char c: arr ){
            if(c=='z'){
              c-=26;
            }

            c+=shift;
            System.out.print(c);
        }


    }
    public static void decrypt(String plainText,int shift){

        char [] arr = plainText.toCharArray();
        int length = plainText.length();
        for (char c: arr ){
            if(c=='z'){
                c+=26;
            }

            c-=shift;
            System.out.print(c);
        }


    }
}
