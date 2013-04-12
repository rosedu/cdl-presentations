import java.io.Console;
import java.sql.SQLException;

public class MainClass {
	public static void main(String[] args) throws ClassNotFoundException, SQLException {
		Console console = System.console();
		if (console == null) {
			System.err.println("error");
			return;
		}

		String username = console.readLine("Usr: ");
		System.out.println(username);
	}
}
