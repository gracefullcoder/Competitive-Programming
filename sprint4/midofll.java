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

class Result {
    public static int midPoint(SinglyLinkedListNode head) {
        SinglyLinkedListNode slow = head;
        SinglyLinkedListNode fast = head;

        while(fast != null && fast.next != null) {
            fast = fast.next.next;
            slow =slow.next;
        }
        return slow.data;
    }
}

public class midofll {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        SinglyLinkedList ll = new SinglyLinkedList();

        int llCount = Integer.parseInt(bufferedReader.readLine().trim());

        IntStream.range(0, llCount).forEach(i -> {
            try {
                int headItem = Integer.parseInt(bufferedReader.readLine().trim());

                ll.insertNode(headItem);
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        });

        int mid = Result.midPoint(ll.head);
        System.out.println(mid);

        bufferedReader.close();
    }
}
