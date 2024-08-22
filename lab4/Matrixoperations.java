import java.util.Scanner;

public class Matrixoperations {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter rows1 : ");
        int rows1 = scanner.nextInt();
        System.out.println("enter cols1 : ");
        int cols1 = scanner.nextInt();
        System.out.println("enter rows2 : ");
        int rows2 = scanner.nextInt();
        System.out.println("enter cols2 : ");
        int cols2 = scanner.nextInt();

        System.out.println("enter matrix 1 : ");
        int[][] matrix1 = new int[rows1][cols1];
        for(int i =0;i<rows1;i++){
            for(int j=0;j<cols1;j++){
                System.out.println("enter element at : "+i+" "+j);
                matrix1[i][j] = scanner.nextInt();
            }
        }
        System.out.println("enter matrix 2");
        int[][] matrix2 = new int[rows2][cols2];
        for(int i =0;i<rows2;i++){
            for(int j=0;j<cols2;j++){
                System.out.println("enter element at : "+i+" "+j);
                matrix2[i][j] = scanner.nextInt();
            }
        }
        if(rows1 == rows2 && cols1 == cols2){
            int[][] result = new int[rows1][cols2];
            for(int i=0;i<rows1;i++){
                for(int j=0;j<cols1;j++){
                    result[i][j] = matrix1[i][j]+ matrix2[i][j];
                }
            }
            System.out.println("addition : ");
            for(int i=0;i<rows1;i++){
                for(int j=0;j<cols1;j++){
                    System.out.print(matrix1[i][j]);
                }
                System.out.println();
            }
        }
        if(cols1 == rows2){
            int[][] result = new int[rows1][cols2];
            for (int i=0; i<rows1; i++)
                for (int j=0; j<cols2; j++)
                {	
                    for (int k=0; k<cols1; k++)
                        result[i][j] += matrix1[i][k]*matrix2[k][j];
                }
            System.out.println("multiplication : ");
            for(int i=0;i<rows1;i++){
                for(int j=0;j<cols2;j++){
                    System.out.print(result[i][j]);
                }
                System.out.println();
            }
        }
        else{
            System.out.println("matrix can neither be added or muliplied");
        }
        scanner.close();
    }
}
