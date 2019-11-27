import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the makeAnagram function below.
    static int makeAnagram(String a, String b) {
        int[] aCharcount = new int[26];
        a.chars().forEach(letter -> aCharcount[letter - 'a']++);

        int[] bCharcount = new int[26];
        b.chars().forEach(letter -> bCharcount[letter - 'a']++);
        int deletion = 0;
        for (int i = 0; i < 26; i++) {
            deletion += Math.abs(aCharcount[i] - bCharcount[i]);
        }
        return deletion;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String a = scanner.nextLine();

        String b = scanner.nextLine();

        int res = makeAnagram(a, b);

        bufferedWriter.write(String.valueOf(res));
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}

