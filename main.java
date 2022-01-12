import java.util.*;
import com.securityandsafetythings.libraries.filebenchmark.SimpleResultsOuterClass;

class Main {
  public static native jobject CreateSR();
  
  public static void main(String[] args) {
    SimpleResultsOuterClass sroc = CreateSR();
    System.out.println(sorc.getStatus());
    System.out.println(sorc.getInfTimeMs());
  }  
}
