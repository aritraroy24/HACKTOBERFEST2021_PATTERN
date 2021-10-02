class ShalikaSewwandi {
    public static void main(String[] args) {
        int rows = 9;
        for (int i=2; i<= rows ; i++) {
            for (int j = rows; j >= i ; j--) {
                System.out.print(" ");
                if (i == 9) {
                    for (int a = 1; a <= rows * 2; a++) {
                        System.out.print("* ");
                    }
                }
            }
            System.out.println("*");
        }

        for (int i=rows-2; i>= 1 ; i--) {
            for (int j = rows; j > i ; j--) {
                System.out.print(" ");
            }
            System.out.println("*");
        }
    }
}





