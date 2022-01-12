package filebenchmark;

import java.util.*;
//import com.google.protobuf;
import filebenchmark.SimpleResultsOuterClass.SimpleResults;

class Main {
  static {
    System.loadLibrary("foo");
  }      
  public static native SimpleResults CreateSR();
  
  public static void main(String[] args) {
    SimpleResults sroc = CreateSR();
    System.out.println(sroc.getStatus());
    System.out.println(sroc.getInfTimeMs());
  }  
}
