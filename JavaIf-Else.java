// https://www.hackerrank.com/challenges/java-if-else

import java.io.*;
import java.util.*;
public class solution
	{ public static void main(String[] args)
		{ Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		if(n==2 || n==4 || (n>20 && n%2==0))
			System.out.print("Not Weird");
		else
			System.out.print("Weird");
		}
	}
