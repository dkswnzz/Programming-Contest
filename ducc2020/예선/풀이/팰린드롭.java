import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class palindrome {
	private static int palindrome(String s) {
		int pl =  s.length();  //pl =palindromeLength;
		
		for(int i=0; i< pl/2; i++) {
			int j=pl-1-i; 
			if(s.charAt(i)!=s.charAt(j)) return 0;		
		}
			return 1;
	}

	public static void main(String[]args)throws IOException{
		BufferedReader br = new BufferedReader(new FileReader("palindrome.inp"));
		BufferedWriter bw = new BufferedWriter(new FileWriter("palindrome.out"));

		StringBuilder sb = new StringBuilder();
		int T= Integer.parseInt(br.readLine());
		
		while(T-->0) {
			String s = br.readLine().toLowerCase();
			bw.write(palindrome(s)+"\n");
		}
		bw.close();
	}
}
