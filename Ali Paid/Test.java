import java.io.FileOutputStream;
import java.io.ObjectOutputStream;
import java.util.ArrayList;

public class Test {
    public static void main(String[] args) {
        ArrayList<Product> bill = new ArrayList<Product>();

        bill.add(new WeighedProduct(1.37, "Rice", 3.00));

        bill.add(new CountedProduct(10, "Pens", 4.5));

        bill.add(new CountedProduct(10, "Pens", 20));

        System.out.println(billTotal(bill));

        ArrayList<Product> cp = new ArrayList<Product>();

        cp.add(new CountedProduct(10, "Pens", 4.5));

        cp.add(new CountedProduct(10, "Pens", 20));

        System.out.println(billTotal(cp));

        ArrayList<Product> wp = new ArrayList<Product>();

        wp.add(new WeighedProduct(1.37, "Rice", 3.00));

        System.out.println(billTotal(wp));

        writeProduct(bill, args);
    }

    public static final double billTotal(ArrayList<Product> products) {
        double total = 0;
        for (Product product : products) {
            total += product.getPrice();
        }
        return total;
    }

    public static final void writeProduct(ArrayList<Product> products, String[] args) {
        try {
            FileOutputStream file = new FileOutputStream(args[0]);
            ObjectOutputStream out = new ObjectOutputStream(file);

            for (Product prod : products) {
                out.writeObject(prod);
            }
            out.close();
            file.close();

        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
