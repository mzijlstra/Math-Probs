
public class prob10 {

	public static boolean isPrime(int num) {
		double end = Math.sqrt(num);
		for (int i = 2; i <= end; i++ ) {
			if (num % i == 0) {
				return false;
			}
		}
		return true;
	}

	public static void main(String args[]) {
		long sum = 0;
		for (int i = 2; i < 2000000; i++) {
			if (isPrime(i)) {
				sum += i;
			}
		}
		System.out.println("Sum: " + sum);
	}
}
