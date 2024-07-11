import java.util.Scanner;

// Superclasse Animal
class Animal {
    public void comer() {
        System.out.println("Eu estou comendo");
    }

    public void comunicar() {
        System.out.println("Eu estou me comunicando");
    }

    public void andar() {
        System.out.println("Eu estou andando");
    }
}

// Subclasses
class Leao extends Animal {
    @Override
    public void comunicar() {
        System.out.println("Rugido do leão");
    }
}

class Cachorro extends Animal {
    @Override
    public void comunicar() {
        System.out.println("Latido do cachorro");
    }
}

class Gato extends Animal {
    @Override
    public void comunicar() {
        System.out.println("Miado do gato");
    }
}

class Tigre extends Animal {
    @Override
    public void comunicar() {
        System.out.println("Rugido do tigre");
    }
}

class Hipopotamo extends Animal {
    @Override
    public void comunicar() {
        System.out.println("Grunhido do hipopótamo");
    }
}

// Classe Zoo
public class Zoo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Escolha um animal para criar:");
        System.out.println("1. Leão");
        System.out.println("2. Cachorro");
        System.out.println("3. Gato");
        System.out.println("4. Tigre");
        System.out.println("5. Hipopótamo");

        int escolha = scanner.nextInt();

        Animal animal;

        switch (escolha) {
            case 1:
                animal = new Leao();
                break;
            case 2:
                animal = new Cachorro();
                break;
            case 3:
                animal = new Gato();
                break;
            case 4:
                animal = new Tigre();
                break;
            case 5:
                animal = new Hipopotamo();
                break;
            default:
                System.out.println("Escolha inválida");
                return;
        }

        System.out.println("Ações do animal:");
        animal.andar();
        animal.comer();
        animal.comunicar();
    }
}
