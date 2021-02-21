import java.util.Scanner;

public class dice {
    public static void main(String[] args) {
        Scanner Input = new Scanner(System.in);

        System.out.print("\nEnter the minimum value: ");
        int min = Input.nextInt();

        System.out.print("\nEnter the maximum value: ");
        int max = Input.nextInt();

        Input.close();

        int dice = (int) (Math.random() * max - min + 1) + min;

        System.out.println("\nDice roll: " + dice);
    }
}
