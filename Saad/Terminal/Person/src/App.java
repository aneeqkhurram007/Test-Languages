
import java.io.*;
import java.util.*;

public class App {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        ArrayList<Student> students = new ArrayList<Student>();
        ArrayList<Staff> staff = new ArrayList<Staff>();
        String filename = "student.ser";
        int choice;
        int restart;
        do {
            System.out.println("Menu");
            System.out.println("Press 1 to enter data for Student.");
            System.out.println("Press 2 to enter data for Staff.");
            System.out.println("Enter your choice: ");
            choice = input.nextInt();
            int i = 0;
            int j = 0;
            switch (choice) {
                case 1:
                    students.add(i, getStudent());
                    i++;
                    break;
                case 2:
                    staff.add(j, getStaff());
                    j++;
                    break;
                default:
                    break;
            }
            System.out.println("Want to start again (1/0): ");

            restart = input.nextInt();
        } while (restart == 1);
        input.close();
        String filename1 = "Staff.ser";
        try {
            FileOutputStream fileStud = new FileOutputStream(filename);
            ObjectOutputStream outStud = new ObjectOutputStream(fileStud);
            FileOutputStream fileStaff = new FileOutputStream(filename1);
            ObjectOutputStream outStaff = new ObjectOutputStream(fileStaff);

            for (Student stud : students) {
                outStud.writeObject(stud);
            }
            for (Staff staff2 : staff) {
                outStaff.writeObject(staff2);
            }

            outStaff.close();
            fileStaff.close();
            outStud.close();
            fileStud.close();
            System.out.println("Object has been serialized");

        }

        catch (Exception ex) {
            System.out.println("Exception is caught");
        }

        Student studOut;
        Staff staffout;
        try {
            // Reading the object from a file
            FileInputStream fStud = new FileInputStream(filename);
            ObjectInputStream inStud = new ObjectInputStream(fStud);

            FileInputStream fStaff = new FileInputStream(filename1);
            ObjectInputStream inStaff = new ObjectInputStream(fStaff);

            for (int i = 0; i < 5; i++) {
                studOut = (Student) inStud.readObject();
                studOut.toString();
            }
            for (int i = 0; i < 5; i++) {
                staffout = (Staff) inStaff.readObject();
                staffout.toString();
            }

            inStaff.close();
            fStaff.close();
            inStud.close();
            fStud.close();

            System.out.println("Object has been deserialized ");

        }

        catch (Exception ex) {
            System.out.println("Exception is caught");
        }

    }

    static Student getStudent() {
        Scanner input = new Scanner(System.in);
        Student newStud;
        String name;
        String address;
        String program;
        int year;
        double fee;
        System.out.println("Enter student name: ");
        do {
            name = input.nextLine();

        } while (!name.matches("[A-Za-z]*"));
        System.out.println("Enter address: ");
        address = input.nextLine();
        System.out.println("Enter program: ");
        program = input.nextLine();
        System.out.println("Enter fee: ");
        fee = input.nextInt();
        System.out.println("Enter year: ");
        year = input.nextInt();

        newStud = new Student(name, address, program, year, fee);

        input.close();
        return newStud;
    }

    static Staff getStaff() {
        Scanner input = new Scanner(System.in);
        Staff newStaff;
        String name;
        String address;
        String school;
        double pay;
        System.out.println("Enter student name: ");
        do {
            name = input.nextLine();

        } while (!name.matches("[A-Za-z]*"));
        System.out.println("Enter address: ");
        address = input.nextLine();
        System.out.println("Enter school: ");
        school = input.nextLine();
        System.out.println("Enter fee: ");
        pay = input.nextInt();

        newStaff = new Staff(name, address, school, pay);

        input.close();
        return newStaff;
    }

}
