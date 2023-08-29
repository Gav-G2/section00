package heartbeat;
import java.util.*;
public class Heartbeat{
	
	public static void main(String[] args) throws InterruptedException {
		double time = 0.0;
		while (time<10) {
			Thread.sleep(1000);
			time++;
			System.out.println(time+ " seconds have passed.");
		}
	}
}