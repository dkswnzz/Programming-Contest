import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Collections;
import java.util.PriorityQueue;
import java.util.StringTokenizer;

public class numbers {
		public static void main(String[]args)throws IOException{
			BufferedReader br = new BufferedReader(new FileReader("numbers.inp"));
			BufferedWriter bw = new BufferedWriter(new FileWriter("numbers.out"));
			
			int T= Integer.parseInt(br.readLine());
			PriorityQueue<Integer>pq1 = new PriorityQueue<>(); 
			PriorityQueue<Integer>pq2 = new PriorityQueue<>(Collections.reverseOrder()); 
			int j=1;
			while(T-->0) {
				int tn=Integer.parseInt(br.readLine());
				StringTokenizer st = new StringTokenizer(br.readLine());
				for(int i=0; i<tn; i++) {
					int n=Integer.parseInt(st.nextToken());
					pq1.add(n);
					pq2.add(n);
			}
				pq1.poll();
				pq2.poll();
				int a= pq1.poll();
				int b= pq2.poll();
				bw.write("Test Case #"+j+" : "+Math.abs(a-b)+'\n');
				j++;
				pq1.clear();
				pq2.clear();
	}
			bw.close();
}


}
