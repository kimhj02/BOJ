package BOJ_JAVA;

import java.util.Scanner;

public class BOJ10807 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int test_case;

        test_case = sc.nextInt();   
        int count =0;

        int[] arr = new int[101];
        int pur_num;

        for(int i = 0; i < test_case; i++)
        {
            arr[i] = sc.nextInt();
        }

        pur_num = sc.nextInt();

        for(int i = 0; i < test_case; i++)
        {
            if(arr[i] == pur_num)
                count++;
        }
        System.out.println(count);
    }
}
