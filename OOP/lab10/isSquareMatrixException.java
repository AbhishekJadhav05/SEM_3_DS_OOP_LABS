import java.util.Scanner;

class isSquareMatrixException extends Exception {
    public isSquareMatrixException() {
        super();
    }
    public static void checker(int row,int col) throws isSquareMatrixException{
        if(row != col){
            throw new isSquareMatrixException();
        }
    }
    public static void main(String[] args) {
        System.out.println("enter the dimensions of matrix : ");
        Scanner scanner = new Scanner(System.in);
        int row = scanner.nextInt();
        int col = scanner.nextInt();
        try{
            checker(row, col);
        }
        catch(isSquareMatrixException e){
            System.out.println("exception : not a square matrix");
            System.exit(0);
        }
        System.out.println("is a square matrix");
        scanner.close();
    }
}
