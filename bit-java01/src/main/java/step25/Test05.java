/* 스레드 - Critical Section(크리티컬 섹션)
 * => 여러 스레드가 코드를 실행하기 위해 동시에 진입했을 때
 *    문제가 발생할 수 있는 코드 블록이다.
 *     
 */
package step25;

public class Test05 {
  
  static class Account {
    long balance;
    
    public Account(long balance) {
      this.balance = balance;
    }
    
    // withdraw() 메서드는 "크리티컬 섹션"에 해당한다.
    // 즉 스레드에 안전하지 않는 코드이다.
    // 여러 스레드가 동시에 진입하여 실행할 때
    // 같은 인스턴스 변수를 동시에 변경할 수 있다.
    // 이때 다른 스레드가 변경한 값을 덮어쓸 수 있다.
    public long withdraw(long money) {
      long temp = balance;
      if ((temp - money) >= 0) {
        temp = temp - money;
        balance = temp;
        return money;
      }
      return 0;
    }
  }
  
  static class ATM extends Thread {
    Account account;
    
    public ATM(String name) {
      super(name);
    }
    
    public void setAccount(Account account) {
      this.account = account;
    }
    
    @Override
    public void run() {
      long sum = 0;
      for (int i = 0; i < 10000; i++) {
        long money = account.withdraw(100); // 100원을 인출한다.
        if (money == 0)
          break;
        sum += money;
      }
      System.out.printf("[%s] 찾은 돈=%d\n", this.getName(), sum);
    }
  }
  

  public static void main(String[] args) {
    Account account = new Account(1000000);
    
    ATM t1 = new ATM("강남");
    ATM t2 = new ATM("신촌");
    ATM t3 = new ATM("부산");
    
    t1.setAccount(account);
    t2.setAccount(account);
    t3.setAccount(account);
    
    t1.start();
    t2.start();
    t3.start();
    
    // main() 호출이 끝나더라도 
    // 실행하고 있는 스레드가 있다면
    // 해당 스레드가 모두 종료할 때까지 JVM은 종료되지 않는다.
    System.out.println("main() 호출 끝!");
  }
}

/* 스택 메모리 
 * => "JVM 스택"이라고 부른다.
 * => Stack 메모리는 스레드 별로 존재한다.
 *    스레드가 관리하는 메모리다.
 * => Method Area와 Heap 메모리는 모든 스레드가 공유하는 메모리다.
 *     
 */






