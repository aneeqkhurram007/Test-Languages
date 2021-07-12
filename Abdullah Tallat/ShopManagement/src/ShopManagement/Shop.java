/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ShopManagement;

import java.io.EOFException;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.ArrayList;

/**
 *
 * @author DELL
 */
public class Shop {

    private String filename;
    private ArrayList<ShopItem> shopList = new ArrayList<ShopItem>();

    public Shop(String filename) {
        this.filename = filename;
        readFromFile();
    }

    public ArrayList getList() {
        return shopList;
    }

    public void addItemToShop(ShopItem item) {
        shopList.add(item);
        writeToFile();
    }

    public void writeToFile() {

        try {
            File f = new File(filename);

            ObjectOutputStream oos;
            
                oos = new ObjectOutputStream(new FileOutputStream(f));
            
            oos.writeObject(shopList);
            oos.close();
        }
         catch (IOException e) {

        }
    }
    @Override
    public String toString(){
        String r="";
            for (int i = 0; i<shopList.size();i++){
            r += (shopList.get(i).getItemID()+", ") ;
    }

     return r;
    
}

    public  void readFromFile() {
       // ArrayList<ShopItem> list = new ArrayList<ShopItem>();

        try {
            ObjectInputStream input = new ObjectInputStream(new FileInputStream(filename));

            
               shopList = ( ArrayList <ShopItem> ) input.readObject();
              
            

        } catch (ClassNotFoundException c) {

        } catch (ClassCastException c) {

        } catch (EOFException e) {

        } catch (FileNotFoundException ex) {

        } catch (IOException ex) {

        }
        
    }

   public  void deleteFromShop(String id)
    {
        for (int i=0; i<shopList.size();i++)
        {
            
            if (shopList.get(i).getItemID().equals(id))
            {
                
                shopList.remove(i);
            break;
            }
        }
        writeToFile();
    }

}
