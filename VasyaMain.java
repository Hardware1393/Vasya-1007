public class VasyaMain {
    static {
        System.loadLibrary("VasyaCore");
    }

    public static void main(String[] args) {
        OrganoidBrain vasya = new OrganoidBrain();

        System.out.println("=== ЗАПУСК ОРГАНОИДНОГО ИНТЕЛЛЕКТА 'ВАСЯ-1007' ===");

        System.out.println("Вы: Привет, Вася!");
        System.out.println("Вася: " + vasya.askQuestion("Привет"));

        System.out.println("\nВы: ВАСЯ, РАБОТАЙ!");
        System.out.println("Вася: " + vasya.askQuestion("РАБОТАЙ!")); // Сработает триггер на арабский из-за '!'

        System.out.println("\n--- Кормим Васю кофеином для кодинга ---");
        vasya.feedVasya("Двойной эспрессо");

        System.out.println("\nЗапрос на разработку ПО (Сложность 95 - Assembly):");
        String codeAsm = vasya.writeCode(95);
        System.out.println(codeAsm);

        System.out.println("\nЗапрос на разработку ПО (Сложность 40 - Java):");
        String codeJava = vasya.writeCode(40);
        System.out.println(codeJava);

        System.out.println("\n--- Нагружаем Васю задачами до перегрева ---");
        for(int i = 0; i < 5; i++) {
            System.out.println("Попытка " + i + ": " + vasya.writeCode(50));
        }
    }
}

class OrganoidBrain {
    public native void feedVasya(String food);
    public native String askQuestion(String question);
    public native String writeCode(int complexity);
}