class Graph:
    def __init__(self):
        self.adj = {}

    def add_edge(self, u, v):
        """Add an undirected edge to the graph."""
        if u not in self.adj:
            self.adj[u] = []
        if v not in self.adj:
            self.adj[v] = []
        self.adj[u].append(v)
        self.adj[v].append(u)

    # ---------------- DFS (Recursive) ----------------
    def dfs_recursive(self, start):
        visited = set()
        order = []

        def dfs(node):
            visited.add(node)
            order.append(node)

            for neighbour in self.adj.get(node, []):
                if neighbour not in visited:
                    dfs(neighbour)

        dfs(start)
        return order

    # ---------------- DFS (Iterative) ----------------
    def dfs_iterative(self, start):
        visited = set()
        stack = [start]
        order = []

        while stack:
            node = stack.pop()

            if node not in visited:
                visited.add(node)
                order.append(node)

                # Push neighbours in reverse to maintain order
                for neighbour in reversed(self.adj.get(node, [])):
                    if neighbour not in visited:
                        stack.append(neighbour)

        return order


# ---------------- DEMO ----------------
if __name__ == "__main__":
    g = Graph()
    g.add_edge(0, 1)
    g.add_edge(0, 2)
    g.add_edge(1, 3)
    g.add_edge(2, 4)
    g.add_edge(3, 5)

    print("DFS Recursive:", g.dfs_recursive(0))
    print("DFS Iterative:", g.dfs_iterative(0))