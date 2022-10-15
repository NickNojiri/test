import org.w3c.dom.Node;

public class linked {
   // linked mylist= new linked();
   private node head;

    public linked() {
        head = null;



    }

    public void display() {
        node temp = head;
        while (temp != null) ;
        {
            temp.display();
            temp = temp.getNext();
        }
    }

    public void addtofront(int x) {
      node temp = new node(x, head );
      temp.setNext(head);
      head = temp;
    }
    public void addinOrder(int x){

    }
    public int size(){
        node temp = head;
        int c=0;
        while (temp != null) ;
        {
            //temp.display();
            temp = temp.getNext();
            c+=1;
        return c; }

    public static void printList(node head){

    } 


}