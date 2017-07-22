import java.util.*;

public class Main
{
	public String wordcounter;
	void makestring(){
		this.wordcounter = wordcounter;
	}
	public static void main(String[] args)
	{
		Main m = new Main();
		m.makelist();
	}
	public static void makelist(){
		int i;
		Scanner r = new Scanner(System.in);
		ArrayList<String>pa=new ArrayList<String>();
		for(i = 0; i<10; i++){
			System.out.println("enter data for the stack");
			String p = r.nextLine();
			pa.add(p);
		}
		System.out.println(pa);
	}
}
