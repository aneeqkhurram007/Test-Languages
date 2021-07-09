abstract class Product {
    private double ProductID;
    private String name;
    private double price;

    public Product(double productID, String name, double price) {
        ProductID = productID;
        this.name = name;
        this.price = price;
    }

    @Override
    public String toString() {
        return "Product [ProductID=" + ProductID + ", name=" + name + ", price=" + price + "]";
    }

    public double getProductID() {
        return ProductID;
    }

    public void setProductID(int productID) {
        ProductID = productID;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(int price) {
        this.price = price;
    }

}