Arjun, a network engineer, is designing a routing management system for a large communication network.

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
