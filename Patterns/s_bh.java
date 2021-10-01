// mirror image number pattern, example n=4
//    1
//   12
//  123
// 1234
import java.util.Scanner;
public class s_bh {


	public static void main(String[] args) {
		
		//read input from Scanner()//
		Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        //print pattern//
        for(int i=0;i<n;i++){
            for(int j=n-i-1;j>0;j--){
                System.out.print(' ');
            }
            for (int k=1;k<i+2;k++){
                System.out.print(k);
            }
            System.out.println();
        }
		
	}

}

