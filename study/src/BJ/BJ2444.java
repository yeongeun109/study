package BJ;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.StringTokenizer;

public class BJ2444 {
	public static void main(String[] args) throws NumberFormatException, IOException {
		int N;
		/*BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(bf.readLine());
		System.out.println(st.nextToken());
		System.out.println(st.nextToken());
		System.out.println(st.nextToken());*/
		
		Scanner sc = new Scanner(System.in);
		
		N = sc.nextInt();
		int blank = N - 1;
		int star = 1;
		
		for(int j = 0; j < N; j++) {
			for(int i = 0; i < blank; i++) {
				System.out.print(' ');
			}
			for(int i = 0; i < star; i++) {
				System.out.print("*");
			}
//			for(int i = 0; i < blank; i++) {
//				System.out.print(' ');
//			}
			System.out.println();
			star += 2;
			blank--;
		}
		blank = 1;
		star -= 4;
		for(int j = 0; j < N - 1; j++) {
			for(int i = 0; i < blank; i++) {
				System.out.print(' ');
			}
			for(int i = 0; i < star; i++) {
				System.out.print("*");
			}
//			for(int i = 0; i < blank; i++) {
//				System.out.print(' ');
//			}
			if(j != N - 1)
				System.out.println();
			star -= 2;
			blank++;
		}
		//System.out.print(' ');
	}
}
