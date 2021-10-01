public class Shubham {
    public static void main(String[] args) {
        for (int i = -2; i < 7; i++) {
            for (int j = 0; j < 5; j++) {
                if (j == i || ((i == -2 || i == 6) && j % 4 != 0) || ((i == -1 || i == 5) && j % 4 == 0)) {
                    System.out.print("*" + " ");
                } else {
                    System.out.print(" " + " ");
                }
            }
            System.out.println();
        }
    }
}