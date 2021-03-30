import java.util.Scanner;

public class Test {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) throws Exception {
        int choice;
        System.out.println("1) Add new city.");
        System.out.println("2) Print detail of current city.");
        System.out.println("3) Print maximum population encountered.");
        System.out.println("4) Exit.");
        String option;
        City city = null;
        do {
            System.out.print("\nEnter your choice: ");
            choice = input.nextInt();

            switch (choice) {
            case 1:
                city = cityInitialization();
                break;
            case 2:
                System.out.println(city);
                break;
            case 3:
                System.out.println(city.getCityPopulation());
                break;

            case 4:
                System.exit(0);
            default:
                System.err.println("You entered wrong input.");
                System.exit(0);
                break;
            }
            System.out.println("Do you want to continue.");
            input.nextLine();
            option = input.nextLine();
        } while (option == "y" || option == "Y");
        input.close();
    }

    static City cityInitialization() {
        String cityName;
        int cityPopulation;
        System.out.print("Enter your city name: ");
        input.nextLine();
        cityName = input.nextLine();
        System.out.print("Enter your city population: ");
        cityPopulation = input.nextInt();

        City city = new City(cityName, cityPopulation);
        return city;
    }
}
