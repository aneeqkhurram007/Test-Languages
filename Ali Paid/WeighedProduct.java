public class WeighedProduct extends Product {
    private int weight;

    public WeighedProduct(double productID, String name, double price) {
        super(productID, name, price);

    }

    @Override
    public String toString() {
        return super.toString() + "WeighedProduct [weight=" + weight + "]";
    }

    public double getPrice() {
        return super.getPrice() * weight;
    }
}
