import java.util.Scanner;

public class B {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        scan.nextLine();
        int judge = 0; int num = 0;
        String[] S = new String[N];

        for (int i = 0; i < N; i++) {
            S[i] = scan.nextLine();
            if (S[i].equals("login")) {
                judge = 1;
            }
            if (S[i].equals("logout")) {
                judge = 0;
            }
            if (S[i].equals("private") && judge == 0) {
                num++;   
            }
        }
        System.out.println(num);
    }
}