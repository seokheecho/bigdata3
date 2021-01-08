/* 클라이언트 요청 구분하기: doGet()과 doPost()
 * => HttpServlet 클래스의 메서드 호출 관계
 * 서블릿 컨테이너 
 * --> service(ServletRequest, ServletResponse)
 *     --> service(HttpServletRequest, HttpServletResponse)
 *         "GET"    --> doGet()
 *         "POST"   --> doPost()
 *         "HEAD"   --> doHead()
 *         "TRACE"  --> doTrace()
 *         ...    
 */
package bigdata3.servlet.step2;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/step2/test06")
public class Test06 extends HttpServlet {
  // service(HttpServletRequest, HttpServletResponse)를 직접 오버라이딩 하지 말고,
  // 이 메서드가 호출하는 doXxx() 메서드를 오버라이딩 하라!
  
  @Override
  protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
    String name = req.getParameter("name");
    int age = Integer.parseInt(req.getParameter("age"));
    resp.setContentType("text/plain;charset=UTF-8");
    PrintWriter out = resp.getWriter();
    out.println("GET 요청");
    out.printf("name=%s\n", name);
    out.printf("age=%d\n", age);
  }
  
  @Override
  protected void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
    String name = req.getParameter("name");
    int age = Integer.parseInt(req.getParameter("age"));
    resp.setContentType("text/plain;charset=UTF-8");
    PrintWriter out = resp.getWriter();
    out.println("POST 요청");
    out.printf("name=%s\n", name);
    out.printf("age=%d\n", age);
  }
}










