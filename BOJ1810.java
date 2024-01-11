package BOJ_JAVA;

import java.util.Scanner;
import java.util.Arrays;
public class BOJ1810 {
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int test_case = sc.nextInt();
        int[] arr  = new int[101];
        int total = 0;
        for(int i = 0; i < test_case; i++)
        {
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        int max = arr[test_case-1];
        for(int i = 0; i < test_case; i++)
        {
            arr[i] = arr[i]/max*100;
            total += arr[i];
        }
        System.out.println(total/test_case);
    }
}
