import networkx as nx

def count_connected_components():
    with open("rosalind_cc.txt") as f:
        # Read the number of nodes and edges
        n, m = map(int, f.readline().strip().split())
        # Read the edge list
        edge_list = [tuple(map(int, line.strip().split())) for line in f.readlines()]

    # Create the graph
    G = nx.Graph()
    G.add_nodes_from(range(1, n + 1))  # Add all nodes
    G.add_edges_from(edge_list)       # Add edges

    # Calculate the number of connected components
    num_components = nx.number_connected_components(G)
    print(num_components)

if __name__ == "__main__":
    count_connected_components()
