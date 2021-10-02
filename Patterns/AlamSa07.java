
public class PatternQ31 {

	public static void main(String[] args) {

patternQ31(5);
	}
 static void patternQ31(int n) {
	 int orginal=n;
	 n=2*n;
	 for(int row=0;row<=n;row++) {
		 for(int cols=0;cols<=n;cols++) {

		int atEveryindex=orginal-Math.min(Math.min(row,cols),Math.min(n-row, n-cols));
		System.out.print(atEveryindex+ " ");
		 }
		 System.out.println();
	 }
 }
}
