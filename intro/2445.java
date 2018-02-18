import java.util.*;

public class Main {
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
        int N = sc.nextInt();
        int size= N*2;
        for(int i=1;i<=N;i++){
            for(int j=0;j<i;j++){
                System.out.print("*");
            }
            for(int j=0;j<size-(i*2);j++){
                System.out.print(" ");
            }
            for(int j=0;j<i;j++){
                System.out.print("*");
                if(i-1==j) System.out.println();
            }
        }
        for(int i=1;i<N;i++){
            for(int j=i;j<N;j++){
                System.out.print("*");
            }
            for(int j=0;j<i*2;j++){
                System.out.print(" ");
            }
            for(int j=i;j<N;j++){
                System.out.print("*");
                if(N-1==j) System.out.println();
            }
        }
    }
}