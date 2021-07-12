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
public class LED extends ShopItem implements Serializable {

    private String model;
    private String company;
    private double area;

    public LED(String model, String company, double area, String itemID, double price) {
        super(itemID, price);
        this.model = model;
        this.company = company;
        this.area = area;
    }

    public String getModel() {
        return model;
    }

    public void setModel(String model) {
        this.model = model;
    }

    public String getCompany() {
        return company;
    }

    public void setCompany(String company) {
        this.company = company;
    }

    public double getArea() {
        return area;
    }

    public void setArea(double area) {
        this.area = area;
    }

    @Override
    public String toString() {
        return "LED {" + "itemID=" + itemID  + ", model=" + model + ", company=" + company + ", area=" + area + '}';
    }

}
