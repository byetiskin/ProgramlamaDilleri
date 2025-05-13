// Dosya: Animal.java (Soyut sınıf - interface gibi davranır)
abstract class Animal {
    public abstract void sound(); // soyut metot

    public void sleep() { // somut metot
        System.out.println("The animal sleeps...");
    }
}
