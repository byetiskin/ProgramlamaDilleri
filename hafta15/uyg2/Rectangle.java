import java.util.Scanner;

public class Rectangle extends Shape {
    private double length, width;

    public Rectangle() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("1. kenarı girin: ");
        this.length = scanner.nextDouble();
        System.out.print("2. kenarı girin: ");
        this.width = scanner.nextDouble();
    }

    @Override
    public double calculateArea() {
        return length * width;
    }

    @Override
    public double calculatePerimeter() {
        return 2 * (length + width);
    }
}
