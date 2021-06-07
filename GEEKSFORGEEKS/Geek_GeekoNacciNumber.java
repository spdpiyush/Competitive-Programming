/**
 * @author : Piyush Kumar
 * Problem Link : https://practice.geeksforgeeks.org/problems/geek-onacci-number/0/?page=1&query=page1
 */
import java.util.*;
import java.lang.*;
import java.io.*;

class GeekoNacciNumber {
	public static void main (String[] args) {
		//code
		Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t-- > 0) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            int c = scanner.nextInt();
            int n = scanner.nextInt();
            System.out.println(nthNumber(n, a, b, c));
        }
    }
    public static int nthNumber(int n, int a , int b, int c) {
        if (n == 1) {
            return a;
        }
        if (n == 2) {
            return b;
        }
        if (n == 3) {
            return c;
        }
        return nthNumber(n-1, a, b, c) + nthNumber(n - 2, a , b , c) + nthNumber(n-3, a, b, c);
    }
}
