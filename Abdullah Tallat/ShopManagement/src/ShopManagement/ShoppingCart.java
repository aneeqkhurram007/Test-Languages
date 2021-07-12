/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ShopManagement;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectOutputStream;
import java.io.Serializable;
import java.util.ArrayList;

public class ShoppingCart implements Serializable {

    private ArrayList<ShopItem> cartList = new ArrayList();
    private Shop s;
    private String cartID;
    private double totalCost;

    ShoppingCart(Shop s, String id) {
        this.s = s;
        cartID = id;
        totalCost = 0;

    }

    //Buy mobile by NAME. Update cartList and total price.
    public void buyMobile(String name) {

        for (ShopItem item : cartList
        ) {
            item = (MobilePhone) item;
            if (((MobilePhone) item).getName().equals(name)) {
                totalCost += item.getPrice();

            }
        }


    }

    public double getTotalCost() {
        return totalCost;
    }

    //Buy LED by MODEL. Update cartList and total price
    public void buyLED(String model) {
        for (ShopItem item : cartList
        ) {
            item = (LED) item;
            if (((LED) item).getModel().equals(model)) {
                totalCost += item.getPrice();

            }
        }


    }

    //Cancel an item by itemID. Update cartList and total price.
    public void cancelOrder(String itemID) {

        for (ShopItem item : cartList
        ) {

            if (item.getItemID() == itemID) {
                totalCost -= item.getPrice();

            }
        }
    }


    // Write the Cart to the File.
    public void writeCartToFile() {

        s.writeToFile();
    }

    // Remove all the bought items (items in the cartList) from the Shop. 
    void checkOut() {


    }

    // Show the detail of each item in the cart. 
    public void showDetailCart() {

        for (ShopItem item : cartList
        ) {
            System.out.println(item.toString());
        }


    }

}
