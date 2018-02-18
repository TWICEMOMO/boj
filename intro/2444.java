import java.util.*;

public class Main {
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
        int N = sc.nextInt();
        for(int i=0;i<N;i++){
            for(int j=i;j<N-1;j++){
                System.out.printf(" ");
            }
            for(int j=0;j<i*2+1;j++){
                System.out.printf("*");
            }
            System.out.println();
        }
        for(int i=N-1;i>0;i--){
            for(int j=i;j<N;j++){
                System.out.printf(" ");
            }
            for(int j=0;j<i*2-1;j++){
                System.out.printf("*");
            }
            System.out.println();
        }
    }
}