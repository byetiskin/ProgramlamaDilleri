import java.util.Scanner;

public class ShapeCalculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("1-) Çevre Hesapla");
        System.out.println("2-) Alan Hesapla");
        System.out.print("Hangi işlemi yapmak istersin? ");
        int islem = scanner.nextInt();

        System.out.println("1-) Daire");
        System.out.println("2-) Dikdörtgen");
        System.out.print("Hangi şeklin " + (islem == 1 ? "çevresini" : "alanını") + " hesaplamak istersin? ");
        int sekil = scanner.nextInt();

        Shape shape;

        if (sekil == 1) {
            shape = new Circle();
        } else if (sekil == 2) {
            shape = new Rectangle();
        } else {
            System.out.println("Geçersiz seçim.");
            return;
        }

        if (islem == 1) {
            System.out.println("Çevre: " + shape.calculatePerimeter());
        } else if (islem == 2) {
            System.out.println("Alan: " + shape.calculateArea());
        } else {
            System.out.println("Geçersiz işlem.");
        }
    }
}
