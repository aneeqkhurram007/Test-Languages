package ShopManagement;
//import java.util.ArrayList;

public class CartRunner {
    public static void main(String[] args) {
        // TODO code application logic here
        
        Shop s = new Shop("shop.dat");
        // Add items to shop
        s.addItemToShop(new MobilePhone("samsung", "blue", true, "M-123", 5000));
        s.addItemToShop(new LED("EVO", "SONY", 50, "L-456", 1000));
        s.addItemToShop(new MobilePhone("huawei", "black", true, "M-789", 7000));
        s.addItemToShop(new LED("Haier", "silver", 60, "L-258", 6000));
        
        System.out.println("Items in the shop  = "+ s);
        System.out.println();
        
        //Create an empty shopping Cart
        ShoppingCart sc = new ShoppingCart(s, "cart-123");
        
        //Add Items to the shopping Cart
        sc.buyMobile("samsung");
        sc.buyLED("EVO");
        sc.buyMobile("huawei");
        
        //Print Contents in the sopping cart
        System.out.println("Detailed Contents of Shopping Cart = " );
        sc.showDetailCart();
        
        //Cancel order of some items
        sc.cancelOrder("L-456");
               
        System.out.println("\nShopping Cart (after cancelling order)= " );
        sc.showDetailCart();
        
        //Finally checkout
        sc.checkOut();
        
        
        System.out.println("Total cost of shopping = " + sc.getTotalCost());
       
        //Save cart details to file
        sc.writeCartToFile();
        System.out.println();
        
        //
        System.out.println("Remaining Items in the shop  = "+ s);
     }
}