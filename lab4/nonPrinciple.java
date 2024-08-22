import java.util.*;
public class nonPrinciple{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter the number of order : ");
        int order = scanner.nextInt();
        int[][] matrix = new int[order][order];
        for(int i =0;i<order;i++){
            for(int j=0;j<order;j++){
                System.out.println("enter element at : "+i+" "+j);
                matrix[i][j] = scanner.nextInt();
            }
        }
        
        int  sum =0;
        for(int i =0;i<order;i++){
            for(int j=0;j<order;j++){
                if(i !=j){
                    sum += matrix[i][j];
                    }
                }   
            }
        System.out.println("sum of non diagonal elements : "+sum);
        scanner.close();
    }   
}
