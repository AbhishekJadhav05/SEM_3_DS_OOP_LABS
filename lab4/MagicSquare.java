import java.util.Scanner;

public class MagicSquare {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter the number of rows : ");
        int rows = scanner.nextInt();
        System.out.println("enter the number of cols : ");
        int cols = scanner.nextInt();
        int[][] matrix = new int[rows][cols];
        for(int i =0;i<rows;i++){
            for(int j=0;j<cols;j++){
                System.out.println("enter element at : "+i+" "+j);
                matrix[i][j] = scanner.nextInt();
            }
        }
        int[] rowsum= new int[2];
        int[] colsum = new int[2];
        int[] diagonalsum= new int[2];
        int index = 0;
        for(int k=0;k<=rows/2;k++){
            for(int i=0;i<rows;i++){
                for (int j = 0;j<rows;j++){
                    rowsum[index] += matrix[i][j]; 
                    index++;
                    if(rowsum[0] != rowsum[1]){
                        System.out.println("not magic");
                        System.exit(0);
                    }
                }
            }
        }
        
        scanner.close();
    }
    
}
