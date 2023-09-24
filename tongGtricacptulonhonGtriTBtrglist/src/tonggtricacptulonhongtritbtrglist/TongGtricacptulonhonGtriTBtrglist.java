/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package tonggtricacptulonhongtritbtrglist;

import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author Dell
 */
public class TongGtricacptulonhonGtriTBtrglist {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        ArrayList<Integer> numbers = new ArrayList<>();
        numbers.add(5);
        numbers.add(10);
        numbers.add(15);
        numbers.add(20);
        
        int sum = 0;
        for(int number : numbers){
            sum+=number;//tính tổng các số
            
        }
        double average = (double)sum / numbers.size();
        
        int TongcuacacSolonhonTB = 0;
        for(int number: numbers){
            if(number > average){
                TongcuacacSolonhonTB+= number;
            }
        }
        System.out.println("Tổng các phần tử lớn hơn giá trị trung bình: "+TongcuacacSolonhonTB);
    }
    
}
