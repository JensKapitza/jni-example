public class HelloJNIWorld {
 
  static {
    System.loadLibrary("helloworld");
  }
 
  public static void main(String[] args) {
    printHelloWorld();
  }
 
  public static native void printHelloWorld();
  public static void printHelloWorld(String text){
	System.out.println(text);
  }
}
