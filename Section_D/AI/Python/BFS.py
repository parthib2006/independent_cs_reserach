from collections import deque

class Graph:
    def __init__(self):
        self.adj = {}     # adjacency list

    def add_edge(self, u, v):
        """Add an undirected edge."""
        if u not in self.adj:
            self.adj[u] = []
        if v not in self.adj:
            self.adj[v] = []
        self.adj[u].append(v)
        self.adj[v].append(u)

    def bfs(self, start):
        """Perform BFS and return visitation order."""
        visited = set()
        queue = deque([start])
        visited.add(start)

        order = []   # Stores BFS order

        while queue:
            node = queue.popleft()
            order.append(node)

            for neighbour in self.adj.get(node, []):
                if neighbour not in visited:
                    visited.add(neighbour)
                    queue.append(neighbour)

        return order


# ------------------- DEMO -------------------

if __name__ == "__main__":
    g = Graph()

    # Add edges (example graph)
    g.add_edge(0, 1)
    g.add_edge(0, 2)
    g.add_edge(1, 3)
    g.add_edge(2, 4)
    g.add_edge(3, 5)

    print("BFS Traversal:", g.bfs(0))