
import java.io.*;
import java.util.*;

public class App {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        ArrayList<Student> students = new ArrayList<Student>();
        ArrayList<Staff> staff = new ArrayList<Staff>();
        String filename = "student.ser";

        System.out.println("Menu");
        System.out.println("Press 1 to enter data for Student.");
        System.out.println("Press 2 to enter data for Staff.");
        System.out.println("Output");

        students.add(new Student("John", "Address1", "BCS", 2021, 1500));
        students.add(new Student("Alex", "Address2", "BCS", 2021, 1500));
        students.add(new Student("Adam", "Address3", "BCS", 2021, 1500));
        students.add(new Student("Trevor", "Address4", "BCS", 2021, 1500));
        students.add(new Student("Noah", "Address5", "BCS", 2021, 1500));

        staff.add(new Staff("Dave", "Address2", "KSS", 200));
        staff.add(new Staff("David", "Address2", "KSS", 200));
        staff.add(new Staff("Jonah", "Address2", "KSS", 200));
        staff.add(new Staff("Miley", "Address2", "KSS", 200));
        staff.add(new Staff("Cyrus", "Address2", "KSS", 200));
        for (Student std : students) {
            System.out.println(std);
        }
        for (Staff staff2 : staff) {
            System.out.println(staff2);
        }
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

        }

    }

}
