//제네릭 스택

class Gstack<T>{
  int top;
  Object [] stack;
  public Gstack(){
    top=0;
    stack=new Object(10);
  }
  public void push(T item){
    if(top==10)
      return;
    stack[top]=item;
    top++;
  }
  public T pop(){
    if(top==0){
      return null;
    top--;
    }
  }
  
public class Stack{
  
 public static void main(String[]args){
   
   Gstack<String> stringStack = new Gstack<String>();
   stringStack.push("Java");
   stringStack.psuh("stack");
   
   System.out.print(stringStack.pop());
   
   
  }
}
