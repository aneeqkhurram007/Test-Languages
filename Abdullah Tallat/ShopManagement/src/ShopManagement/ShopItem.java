/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ShopManagement;

import java.io.Serializable;


public class ShopItem implements Serializable {

    protected String itemID;
    protected double price;

    public ShopItem(String itemID, double price) {
        this.itemID = itemID;
        this.price = price;
    }

    public String getItemID() {
        return itemID;
    }

    public void setItemID(String itemID) {
        this.itemID = itemID;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    @Override
    public String toString() {
        return "ShopItem{" + "itemID=" + itemID + ", price=" + price + '}';
    }

}
