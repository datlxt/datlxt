/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package lexuantiendat_he180538;

import java.util.Scanner;



/**
 *
 * @author Dell
 */
public class LeXuanTienDat_HE180538 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        // Viết ctr nhập vào 1 chuỗi và chuẩn hóa dấu cách, chuyển kí tự cuối cùng thành chữ hoa, tất cả các kí tự khác cho chữ thường. Hãy cho biết trong chuỗi có từ nào dài nhất ở vị trí nào
        Scanner sc = new Scanner(System.in);
        System.out.print("Nhập vào một chuỗi:");
        String input = sc.nextLine();
        

        // Chuẩn hóa dấu cách và chuyển kí tự cuối cùng thành chữ hoa
        String chuoiDaChuanHoa = chuanHoaChuoi(input);

        // Tìm từ dài nhất và vị trí của nó
        String tuDaiNhat = timTuDaiNhat(chuoiDaChuanHoa);
        int viTriTuDaiNhat = chuoiDaChuanHoa.indexOf(tuDaiNhat);

        System.out.println("Chuỗi sau khi chuẩn hóa: " + chuoiDaChuanHoa);
        System.out.println("Từ dài nhất trong chuỗi: " + tuDaiNhat);
        System.out.println("Vị trí của từ dài nhất: " + viTriTuDaiNhat);
    }
    
    public static String chuanHoaChuoi(String input) {
        // Chuẩn hóa dấu cách và chuyển kí tự cuối cùng thành chữ hoa
        String chuoiDaChuanHoa = input.trim().toLowerCase();
        int lastIndex = chuoiDaChuanHoa.length() - 1;
        char kyTuCuoi = Character.toUpperCase(chuoiDaChuanHoa.charAt(lastIndex));
        chuoiDaChuanHoa = chuoiDaChuanHoa.substring(0, lastIndex) + kyTuCuoi;
        return chuoiDaChuanHoa;
    }
    public static String timTuDaiNhat(String input) {
        // Tìm từ dài nhất trong chuỗi
        String[] tuArray = input.split("\\s+");
        String tuDaiNhat = "";
        for (String tu : tuArray) {
            if (tu.length() > tuDaiNhat.length()) {
                tuDaiNhat = tu;
            }
        }
        return tuDaiNhat;
     }
}
    

