
*/
package salesjava;

import java.util.*;

/**
 *
 * @author meep85
 */
public class Salesjava {

    public static void checking(int[] sales1, int count1, int z, final int count2) {
        final int size = 6;
        count1 = 0;
        sales1 = new int[size];
        z = sales1[1] / 100;
        Scanner salesinput = new Scanner(System.in);
        for (count1 = 1; count1 < size; count1++) {
            System.out.println("ENTER TODAYS SALES FOR STORE" + count1);
            sales1[count1] = salesinput.nextInt();

            if (sales1[count1] % 100 != 0 || sales1[count1] > 4000) {

                do {
                    System.out.println("Invalid Sales Amount:");
                    System.out.println("Sales must be multiple of 100 in range 0-4000,inclusive");
                    System.out.println("ENTER TODAYS SALES FOR STORE" + count1);
                    sales1[count1] = salesinput.nextInt();
                    sales1[count1] = salesinput.nextInt();
                } while (sales1[count1] % 100 != 0 || sales1[count1] > 4000);
            }
        }
        System.out.println("Each * = 100");
        System.out.print("Sales for store:1..");
        for (count1 = 0; count1 <sales1[1]/100; count1++) {
            System.out.print("*");
        }
        System.out.println("Sales for store:2..");
        for (count1 = 0; count1 <sales1[2]/100; count1++) {
            System.out.print("*");
        }
         System.out.print("");
        System.out.println("Sales for store:3..");
        for (count1 = 0; count1 <sales1[3]/100; count1++) {
            System.out.print("*");
        }
         System.out.print("");
        System.out.println("Sales for store:4..");
        for (count1 = 0; count1 <sales1[4]/100; count1++) {
            System.out.print("*");
        }
         System.out.print("");
        System.out.println("Sales for store:5..");
        for (count1 = 0; count1 <sales1[5]/100; count1++) {
            System.out.print("*");
        }

    }

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        final int size = 7;
        int count = 1;
        int[] storesales = new int[size];
        int l = storesales[count] / 100;
        checking(storesales, count, l, size);

    }
}
