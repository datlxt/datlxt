/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package giatritb.phannguyen.cualist;

import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author Dell
 */
public class GiaTriTBPhannguyenCuaList {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> numbers = new ArrayList<>();
        System.out.println("Nhập số lượng phần tử trong list: ");
        int n = sc.nextInt();
        System.out.println("Nhập các số trong List: ");
        for(int i= 0; i<n;i++){
            int num = sc.nextInt();
            numbers.add(num);
        }
        int sum = 0;
        for(int num : numbers){
            sum+=num;
            
        }
        int average = sum / numbers.size();
        System.out.println("Trung bình các số trong List (phần nguyên): "+average);
    }
    
}
