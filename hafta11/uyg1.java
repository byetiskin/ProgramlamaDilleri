public class uyg1 {

    // Altprogram başlığı (header): public static int carp(int x, int y)
    public static int carp(int x, int y) {  // resmi parametreler: x, y
        return x * y;
    }

    public static void main(String[] args) {
        int a = 4;
        int b = 7;

        // Gerçek parametreler: a, b
        int sonuc = carp(a, b);
        System.out.println("Çarpım: " + sonuc);
    }
}
