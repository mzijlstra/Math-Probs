import java.util.Calendar;
import static java.util.Calendar.*;

class Prob19 {
	public static void main(String[] args) {
		long sundays = 0;

		Calendar cal = Calendar.getInstance();
		cal.set(1901, 0, 1);
		while (cal.get(YEAR) != 2001) {
			cal.add(DAY_OF_MONTH, 1);
			if (cal.get(DAY_OF_MONTH) == 1 && 
					cal.get(DAY_OF_WEEK) == SUNDAY) {
				sundays++;
			}
		}
		System.out.println(sundays);
	}
}
