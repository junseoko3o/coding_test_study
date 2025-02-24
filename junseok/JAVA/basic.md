```java
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int a = sc.nextInt();
    int b = sc.nextInt();

    System.out.println(a + b);
  }
}
```

```java
import java.io.*;

public static void main(String[] args) throws IOException {
  BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
  StringTokenizer st = new StringTokenizer(br.readLine());

  int a = Integer.parseInt(st.nextToken());
  int b = Integer.parseInt(st.nextToken());
  System.out.println(a + b);
}
```