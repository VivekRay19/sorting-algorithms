# ⚡ Sorting Algorithms & Data Structures

A collection of efficient algorithms implemented in **C** to demonstrate fundamental computer science concepts. This project explores how machines organize data using comparisons and hierarchical structures.

## 📂 Algorithms Included

### 1. 🫧 Bubble Sort
**File:** `BubbleSort.c`

Bubble Sort is a simple comparison-based algorithm. It repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.
* **Logic:** "Heavier" elements bubble to the bottom (end of the list) with each pass.
* **Complexity:** O(n²) - Best for small datasets or educational purposes.
* **Key Concept:** If there are `n` elements, we need `n-1` passes to sort the array completely.

### 2. 🌳 Binary Search Tree (BST) Sort
**File:** `BinarySearchTree.c`

A hierarchical data structure where every node follows a specific rule:
* **Left Child:** Smaller than the root.
* **Right Child:** Larger than the root.
* **Sorting Method:** We construct the tree by inserting elements one by one. Once built, an **Inorder Traversal** (Left → Root → Right) retrieves the elements in perfectly sorted ascending order.

## 🛠️ How to Compile & Run

You can compile these programs using any GCC compiler (Linux, Mac, or Windows MinGW).

### Running Bubble Sort
```bash
gcc -o bubble BubbleSort.c
./bubble
