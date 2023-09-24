/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package caulechif_else;

import java.util.Scanner;

/**
 *
 * @author Dell
 */
public class CaulechIF_ELSE {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
         int n;
         Scanner sc = new Scanner(System.in);
         System.out.println("Nhập số nguyên n: ");
         n = sc.nextInt();
         
         //Kiểm tra tính chẵn lẻ
         if(n%2==0){
             System.out.println(n+" là số chẵn.");
         }else{
             System.out.println(n+" là số lẻ.");
         }
    }
    
}
