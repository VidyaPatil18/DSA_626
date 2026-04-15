1.Arjun, a network engineer, is designing a routing management system for a large communication network.

Instead of scanning all routers every time, he organizes Router IDs in a hierarchical connected structure.

Each router has a unique Router ID Smaller Router IDs are placed on the left side Larger Router IDs are placed on the right side

This structure helps in:

⚡ Fast insertion when a new router is added ⚡ Efficient display of routing table in order,LEFT-ROOT-RIGHT

Input Format

First line: integer n → number of routers

Second line: n space-separated Router IDs

Next line: Router ID to be added

Constraints

1≤n≤100 Router IDs are unique Maximum depth ≤ 20 If input is -1, print Invalid input

Output Format

Display the routing table in appropriate order[left-root-right] after insertion


2.Rahul, a software engineer, is developing a file indexing feature for an operating system like Microsoft Windows. Instead of scanning all folders every time, Rahul designs a system that stores file IDs (or sizes) in an organized hierarchical structure of connected nodes. This helps in: Fast insertion when a new file is added, Fast deletion when a file is removed. To ensure data is not lost after restarting the system, Rahul stores the file index in a disk file. He is using a program based on a node-based hierarchical structure.

Smaller IDs → go to the left

Larger IDs → go to the right

This helps users quickly search for places and update map data efficiently.

Input Format

an integer number, number of nodes n

1 2 3 ... n

Node to be inseted in a tree.

Node to be deleted.

Constraints

General Constraints 1 ≤ n ≤ 100 → Number of nodes (files/locations) 1 ≤ q ≤ 50 → Number of operations Node names / IDs are unique Maximum tree depth ≤ 20

Output Format

Current File Index sorted in ascending order.

Sample Input 0

3
10 20 30
40
10
Sample Output 0

Current File Index sorted in ascending order: 20 30 40.
