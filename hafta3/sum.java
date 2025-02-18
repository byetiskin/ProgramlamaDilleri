import java.util.Scanner;

public class sum {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] numbers = new int[5];
        int sum = 0;

        // Kullanıcıdan 5 sayı alma
        for (int i = 0; i < 5; i++) {
            System.out.print((i + 1) + ". sayıyı girin: ");
            numbers[i] = scanner.nextInt();
            sum += numbers[i];
        }

        // Ortalama hesaplama
        double average = sum / 5.0;

        // Sonuçları yazdırma
        System.out.println("Toplam: " + sum);
        System.out.println("Ortalama: " + average);

        scanner.close();
    }
}
