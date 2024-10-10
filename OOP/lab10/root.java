import java.util.Scanner;

class NegativeRootException extends Exception {
    public NegativeRootException(String message) {
        super(message);
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number to find its square root: ");
        
        try {
            int num = scanner.nextInt();
            checkForNegativeRoot(num);
            double val = Math.sqrt(num);
            System.out.println("The square root of " + num + " is " + val);
        } catch (NegativeRootException e) {
            System.out.println(e.getMessage());
        } catch (Exception e) {
            System.out.println("Invalid input. Please enter a valid integer.");
        } finally {
            scanner.close();
        }
    }

    private static void checkForNegativeRoot(int num) throws NegativeRootException {
        if (num < 0) {
            throw new NegativeRootException("Cannot calculate the square root of a negative number.");
        }
    }
}
