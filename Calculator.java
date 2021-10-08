package assignment;

import java.util.Scanner;

public class Calculator {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		 System.out.println("enter first number");
		 int a=sc.nextInt();
		 System.out.println("enter enter operation");
		 char c=sc.next().charAt(0);   
		 System.out.println("enter second number");
		 int b=sc.nextInt();
         opr(a,c,b);
	}
	
	
	public static void opr(double a,char b,double c) {
		 double ans;
		switch (b) {
		case '+':
			
			ans=a+c;
			System.out.println(ans);
			
			break;
			
			
			
		case '-':
			
			ans=a-c;
			System.out.println(ans);
			break;
			
		case '/':
			
			ans=a/c;
			System.out.println(ans);
		break;
		
		
		case '*':
			
			ans=a*c;
			System.out.println(ans);
		break;
		
		default: 
			System.out.println("please enter a valid operator");
		}
		}
		
	}

