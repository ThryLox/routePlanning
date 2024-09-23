# Route Planning Project

![Route Planning](https://img.shields.io/badge/Route%20Planning-C%2B%2B-blue)

## Overview

This project implements a **route planning** algorithm using a graph-based approach in C++. It aims to efficiently find paths between nodes using various agents and graph traversal techniques. The main features include:

- **Graph Representation**: Custom graph implementation with nodes and edges.
- **Agent Simulation**: Agents traverse the graph to find optimal routes.
- **Modular Design**: Clean separation between graph structure, nodes, edges, and agents.

## File Structure

```
├── Agent.cpp
├── Agent.h
├── Edge.cpp
├── Edge.h
├── Graph.cpp
├── Graph.h
├── Node.cpp
├── Node.h
├── compile_agent.sh
├── compile_agent_windows.bat
```

### Core Files:
- **Agent.cpp/h**: Defines the behavior of agents interacting with the graph.
- **Edge.cpp/h**: Handles edges connecting nodes, including weight and direction.
- **Graph.cpp/h**: Manages the overall graph structure, including node and edge management.
- **Node.cpp/h**: Represents individual nodes in the graph, storing connections and data.

## Installation

To compile the project:

### On Linux:
```bash
chmod +x compile_agent.sh
./compile_agent.sh
```

### On Windows:
Run the following batch script:
```
compile_agent_windows.bat
```

## Usage

Once compiled, you can execute the program to simulate agent-based route planning through a graph. Ensure that all necessary input data (nodes, edges, etc.) is correctly defined.

## Contributing

Contributions are welcome! Feel free to open issues or submit pull requests.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

