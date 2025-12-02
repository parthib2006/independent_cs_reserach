import java.util.*;

class Node implements Comparable<Node> {
    String name;
    int g, h;

    Node(String n, int gCost, int hCost) {
        name = n;
        g = gCost;
        h = hCost;
    }

    int f() { return g + h; }

    public int compareTo(Node other) {
        return this.f() - other.f();
    }
}

public class AStar {
    public static void main(String[] args) {

        PriorityQueue<Node> open = new PriorityQueue<>();

        open.add(new Node("A", 0, 4));
        open.add(new Node("B", 1, 2));
        open.add(new Node("C", 2, 1));

        while(!open.isEmpty()) {
            Node n = open.poll();
            System.out.println("Expanded: " + n.name + " | f = " + n.f());
        }
    }
}