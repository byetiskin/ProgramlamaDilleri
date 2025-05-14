import java.util.Scanner;

public class Circle extends Shape {
    private double radius;

    public Circle() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Yarıçapı girin: ");
        this.radius = scanner.nextDouble();
    }

    @Override
    public double calculateArea() {
        return Math.PI * radius * radius;
    }

    @Override
    public double calculatePerimeter() {
        return 2 * Math.PI * radius;
    }
}
