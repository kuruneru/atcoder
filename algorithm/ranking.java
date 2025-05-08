public class ranking {
    public static void main(String[] args) {
        int[] A = new int[5];
        int[] C = new int[7];
        int N = 4, Min = 0, Max = 5, Max1 = 6;
        A[1] = 2;
        A[2] = 1;
        A[3] = 2;
        A[4] = 4;

        for (int I = 1; I <= N; I++) {
            C[A[I]]++;
        }

        C[Max1] = 1;

        for (int I = Max; I >= Min; I--) {
            C[I] += C[I + 1];
        }

        for (int i = 1; i < 6; i++) {
            System.out.println("C[" + i + "]" + ": " + C[i]);
        }
    }
}