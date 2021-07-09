import java.util.Collection;
import java.util.Collections;

public class CDS {

    String title;
    int yearOfRelease;
    int price;
    int quantity;

    public static void main(String[] args) {
        final CDS cd = new CDS();
        CDS cd1 = new MovieCD();
        CDS cd2 = new SoftwareCD();
        CDS cd3 = new MusicCD();
        ArrayList<CDS> al = new ArrayList<CDS>();
        al.add("Title1", 2010, 50, 100);
        al.add("Title2", 2011, 50, 100);
        al.add("Title3", 2012, 50, 100);
        al.add("Title4", 2013, 50, 100);
        al.add("Title5", 2020, 50, 100);

        Collections.sort(al);

        System.out.println("List after the use of" + " Collection.sort() :\n" + al);
    }

    HashSet<CDS> h = new HashSet<CDS>();

    h.add("Title1",2010,60,100);h.add("Title2",2011,50,200);h.add("Title3",2012,650,300);h.add("Title4",2013,550,500);h.add("Title5",2020,450,600);System.out.println(h);

    Collections.sort(h);

    System.out.println("Iterating over list:");
Iterator<String> i =
h.iterator();while(i.hasNext())System.out.println(i.next());

}

public class Fruits {
    public static void main(String s[]) {
        Mango ff = new Mango();
        System.out.print(ff.price + " " + ff.quantity);
    }
}

class Mango {
    int quantity = 5;
    double price = 500;

}

    public static int access() {

        return assign + 5;

    }

    public class ExceptionHandling {

        public static void main(String[] args) {
            try {
                System.out.print("Hello ");
                throwit();
            } catch (Exception re) {
                System.out.print("Caught ");
            } finally {
                System.out.print("Finally ");
                System.out.println("After ");

            }
        }

        public static void throwit() {
            System.out.print("throwit ");
            throw new RuntimeException();
        }
    }

    public int calc(int num) {
        return num * num;
    }

    @Override
    public int calc(int num) {
        return num / num;
    }

Sub(String name, int age, float height,String gender)
{
super(String name, int age, float height);
this.gender=gender;
}

@Override
public String toString() {
// TODO Auto-generated method stub
return name+" "+age+" "+height+" "+gender;
}