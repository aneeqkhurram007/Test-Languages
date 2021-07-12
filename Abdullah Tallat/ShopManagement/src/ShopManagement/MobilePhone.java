/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ShopManagement;

import java.io.Serializable;

/**
 *
 * @author DELL
 */
public class MobilePhone extends ShopItem implements Serializable {

    private String name;
    private String color;
    private boolean hasCard;

    public MobilePhone(String name, String color, boolean hasCard, String itemID, double price) {
        super(itemID, price);
        this.name = name;
        this.color = color;
        this.hasCard = hasCard;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public boolean isHasCard() {
        return hasCard;
    }

    public void setHasCard(boolean hasCard) {
        this.hasCard = hasCard;
    }

    @Override
    public String toString() {
        return "MobilePhone{" + "itemId=" + itemID  + ", name=" + name + ", color=" + color + ", hasCard=" + hasCard + '}';
    }
 
}
