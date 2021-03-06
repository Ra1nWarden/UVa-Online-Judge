import java.math.BigInteger;
import java.util.Scanner;


public class Q10069 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int cases = sc.nextInt();
		sc.nextLine();
		for(int i= 0; i < cases; i++) {
			String line = sc.nextLine();
			String word = sc.nextLine();
			BigInteger result = BigInteger.ZERO;
			BigInteger checks[] = new BigInteger[line.length()];
			for(int j = 0; j < checks.length; j++)
				checks[j] = BigInteger.ZERO;
			for(int j = 0; j < word.length(); j++) {
				char currentchar = word.charAt(j);
				if(j == 0) {
					for(int k = 0; k < line.length(); k++) {
						if(line.charAt(k) == currentchar)
							checks[k] = checks[k].add(BigInteger.ONE);
					}
					continue;
				}
				else if (j < word.length() - 1) {
					BigInteger runningsum = BigInteger.ZERO;
					char previous = word.charAt(j-1);
					for(int k = 0; k < line.length(); k++) {
						BigInteger temp = BigInteger.ZERO;
						if(line.charAt(k) == previous) {
							if(previous == currentchar)
								temp = runningsum;
							runningsum = runningsum.add(checks[k]);
						}
						if(line.charAt(k) == currentchar) {
							if(previous == currentchar)
								checks[k] = temp;
							else
								checks[k] = runningsum;
							
						}
					}
						
				}
				else {
					
					BigInteger runningsum = BigInteger.ZERO;
					char previous = word.charAt(j - 1);
					for(int k = 0; k < line.length(); k++) {
						BigInteger temp = BigInteger.ZERO;
						if(line.charAt(k) == previous) {
							if(previous == currentchar)
								temp = runningsum;
							runningsum = runningsum.add(checks[k]);
						}
						if(line.charAt(k) == currentchar) {
							if(previous == currentchar)
								checks[k] = temp;
							else
								checks[k] = runningsum;
							result = result.add(checks[k]);
						}
					}
				}
			}
			System.out.println(result);
		}
		sc.close();

	}

}
