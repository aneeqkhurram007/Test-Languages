public class CountedProduct extends Product {
    private int quantity;

    public CountedProduct(double productID, String name, double price) {
        super(productID, name, price);
    }

    @Override
    public String toString() {
        return super.toString() + "CountedProduct [quantity=" + quantity + "]";
    }

    public double getPrice() {
        return super.getPrice() * quantity;
    }

}
