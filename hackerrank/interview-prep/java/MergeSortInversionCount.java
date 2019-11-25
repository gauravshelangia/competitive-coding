import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the countInversions function below.
    public static long countInversions(int[] a, int beginIndex, int endIndex) {
     if (beginIndex >= endIndex) {
            return 0;
        }

        long inversionNum = 0;
        int middleIndex = (beginIndex + endIndex) / 2;
        inversionNum += countInversions(a, beginIndex, middleIndex);
        inversionNum += countInversions(a, middleIndex + 1, endIndex);

        int leftIndex = beginIndex;
        int rightIndex = middleIndex + 1;
        int[] sorted = new int[endIndex - beginIndex + 1];
        for (int i = 0; i < sorted.length; i++) {
            if (rightIndex > endIndex || (leftIndex <= middleIndex && a[leftIndex] <= a[rightIndex])) {
                sorted[i] = a[leftIndex];
                leftIndex++;
            } else {
                inversionNum += middleIndex - leftIndex + 1;

                sorted[i] = a[rightIndex];
                rightIndex++;
            }
        }

        for (int i = beginIndex; i <= endIndex; i++) {
            a[i] = sorted[i - beginIndex];
        }

        return inversionNum;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int t = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int tItr = 0; tItr < t; tItr++) {
            int n = scanner.nextInt();
            scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

            int[] arr = new int[n];

            String[] arrItems = scanner.nextLine().split(" ");
            scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

            for (int i = 0; i < n; i++) {
                int arrItem = Integer.parseInt(arrItems[i]);
                arr[i] = arrItem;
            }

            long result = countInversions(arr,0,arr.length-1);

            bufferedWriter.write(String.valueOf(result));
            bufferedWriter.newLine();
        }

        bufferedWriter.close();

        scanner.close();
    }
}

