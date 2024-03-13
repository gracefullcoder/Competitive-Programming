import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class SinglyLinkedListNode {
    public int data;
    public SinglyLinkedListNode next;

    public SinglyLinkedListNode(int nodeData) {
        this.data = nodeData;
        this.next = null;
    }
}

class SinglyLinkedList {
    public SinglyLinkedListNode head;
    public SinglyLinkedListNode tail;

    public SinglyLinkedList() {
        this.head = null;
        this.tail = null;
    }

    public void insertNode(int nodeData) {
        SinglyLinkedListNode node = new SinglyLinkedListNode(nodeData);

        if (this.head == null) {
            this.head = node;
        } else {
            this.tail.next = node;
        }

        this.tail = node;
    }
}

class SinglyLinkedListPrintHelper {
    public static void printList(SinglyLinkedListNode node, String sep) {
        while (node != null) {
            System.out.print(node.data);

            node = node.next;

            if (node != null) {
                System.out.print(sep);
            }
        }
    }
}

class Result {

    /*
     * Complete the 'reverse' function below.
     *
     * The function accepts INTEGER_SINGLY_LINKED_LIST head as parameter.
     */

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     * int data;
     * SinglyLinkedListNode next;
     * }
     *
     */

    

    public static SinglyLinkedListNode reverse(SinglyLinkedListNode head) {
        // Write your code here

        if(head == null) 
        {
            return null;
        }
        SinglyLinkedListNode p=null;
        SinglyLinkedListNode q = head;
        SinglyLinkedListNode r = head.next;
        while(r != null) {
            q.next = p;
            p = q;
            q = r;
            r = r.next;
        }
        q.next = p;
        return q;
    }
}

public class reversell {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        SinglyLinkedList ll = new SinglyLinkedList();

        int llCount = Integer.parseInt(bufferedReader.readLine().trim());

        IntStream.range(0, llCount).forEach(i -> {
            try {
                int llItem = Integer.parseInt(bufferedReader.readLine().trim());
                ll.insertNode(llItem);
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        });

        ll.head = Result.reverse(ll.head);
        SinglyLinkedListPrintHelper.printList(ll.head,"\n");
        bufferedReader.close();
    }
}
