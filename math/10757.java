import java.math.BigInteger;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        BigInteger A = new BigInteger("0");
        BigInteger B = new BigInteger("0");
        A =sc.nextBigInteger();
        B= sc.nextBigInteger();
        A=A.add(B);
        System.out.println(A);
    }
}