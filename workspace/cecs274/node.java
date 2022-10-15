public class node{
  // private node front;
  // private node temp= new node();
  // temp.setNext(front)
    // my private values next and front Node and interger;
    private node next;
    private int front;

    public node(int f,node n)
    {
        next= n;
        front = f;
    }

    public int getValue(){
           return front;
    }

    public node getNext(){
        return next;
    }
    public void setValue(int f) {
    front = f;
    }
    public void setNext( node n){
    next = n;
    }

   void display() {
       System.out.println(next);
    }
}