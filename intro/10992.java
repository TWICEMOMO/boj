import java.util.*;

public class Main {
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
        int N = sc.nextInt();
        for(int i=1;i<=N;i++){
            if(i==N) {
                for (int j = 0; j < N * 2 - 1; j++){
                    System.out.print("*");
                }
            }
            else {
                for(int j=i;j<N;j++){
                    System.out.print(" ");
                }
                System.out.print("*");
                for(int j=0;j<2*(i-1)-1;j++){
                    System.out.print(" ");
                }
                if(i!=1) System.out.print("*");
            }
            System.out.println();
        }
    }
}