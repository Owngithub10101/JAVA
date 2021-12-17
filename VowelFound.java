import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in); 
		int s1 = 0,s2 = 0,s3 = 0,s4 = 0,s5 = 0;
		System.out.println("Enter String : ");
		String st = sc.nextLine();
		for(int i = 0; i < st.length(); i++){
		    if(st.charAt(i) == 'a') s1++;
		    else if(st.charAt(i) == 'e') s2++;
		    else if(st.charAt(i) == 'i') s3++;
		    else if(st.charAt(i) == 'o') s4++;
		    else if(st.charAt(i) == 'u') s5++;
		}
		System.out.println("Freq. of char a is : " + s1);
		System.out.println("Freq. of char e is : " + s2);
		System.out.println("Freq. of char i is : " + s3);
		System.out.println("Freq. of char o is : " + s4);
		System.out.println("Freq. of char u is : " + s5);
	}
}
