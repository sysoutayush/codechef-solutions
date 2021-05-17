import java.util.Scanner;

class Secondlargest2 {
    static int min(int a, int b) {
        return (a > b) ? b: a;
    }
    
    static int max(int a, int b) {
        return (a > b) ? a : b;
    }
    
    static int second_largest(int a, int b, int c) {
        int smallest = min(min(a, b), c);
        int largest = max(max(a, b), c);
        return a ^ b ^ c ^ smallest ^ largest;
    }
    public static void main(String[] args) {
        Scanner sc =new scanner(System.in);
        int x=sc.nextInt();
        int y=sc.nextInt();
        int z=sc.nextInt();
        int result=second_largest(x, y, z);
        System.out.println(result);
    }


}