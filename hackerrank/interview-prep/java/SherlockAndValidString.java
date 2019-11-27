import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the isValid function below.
    static String isValid(String s) {
        String result="";
        Map<Character,Integer> freqMap = new HashMap();
        Map<Integer,Integer> freqCountMap = new HashMap();
        for (int i = 0; i<s.length(); i++){
            char ch = s.charAt(i);
            if(freqMap.containsKey(ch)){
                freqMap.put(ch,freqMap.get(ch)+1);
            }else{
                freqMap.put(ch,1);
            }
        }
        
        for (Map.Entry<Character,Integer> entry : freqMap.entrySet()) {
            if(freqCountMap.containsKey(entry.getValue())){
                freqCountMap.put(entry.getValue(),freqCountMap.get(entry.getValue())+1);
            }else{
                freqCountMap.put(entry.getValue(),1);
            }
        }
         freqCountMap.entrySet().forEach(entry->{
    System.out.println(entry.getKey() + " " + entry.getValue());  
 });

        if(freqCountMap.size() >2){
            result = "NO";
        }else if(freqCountMap.size()==1){
            result = "YES";
        }else{
            int freq1 = 0;
            int freq1Count = 0;
            int freq2 = 0;
            int freq2Count = 0;
            int index = 0;
            for (Map.Entry<Integer, Integer> entry : freqCountMap.entrySet()) {
                if(index==0){
                    freq1 = entry.getKey();
                    freq1Count = entry.getValue();
                }else{
                    freq2 = entry.getKey();
                    freq2Count = entry.getValue();
                } 
                index++;  
            }
            System.out.println("f1="+freq1);
            System.out.println("f1C="+freq1Count);
            System.out.println("f2="+freq2);
            System.out.println("f2C="+freq2Count);
            if(((Math.abs(freq1-freq2)==1) && ( freq2Count==1 || freq1Count==1)) ||
                ((freq1 == 1 && freq1Count == 1 ) || (freq2 == 1 && freq2Count == 1 ))){
                result = "YES";
            }else{
                result = "NO";
            }
        }
        return result;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = scanner.nextLine();

        String result = isValid(s);

        bufferedWriter.write(result);
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}

