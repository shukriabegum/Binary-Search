# Binary-Search
Binary Search is a searching algorithm used to find the position of a specific element (called the key) in a sorted array or list.

## Logic

- left → starting index → 0

- right → ending index → n-1

- mid → middle element index  →(left+right)/2

- Compare arr[mid] with key
#### If middle element = key → element found.

#### If middle element > key → update right → mid+1

#### If middle element < key → update left  → mid-1

## Requirements:

- The array must be sorted before using binary search.
  
## 3. Advantages of Binary Search

- Efficient for large arrays: O(log n) time complexity.

- Reduces comparisons drastically compared to linear search.

- Works well for sorted datasets.

- Can be implemented iteratively or recursively.

## 4. Disadvantages of Binary Search

- Array must be sorted first; if not, sorting adds extra time.

- More complex than linear search.

- Not efficient for small arrays (linear search can be faster in small arrays due to overhead).

- Random access required (e.g., arrays, not linked lists).

## 5. Use Cases of Binary Search

- Searching in sorted arrays or lists.

- Finding first or last occurrence of a value.

- Searching in databases, dictionaries, or lookup tables.

- Solving algorithmic problems like finding square roots, searching in infinite arrays, or in games for optimization.

#### Used in computer graphics, AI, and competitive programming.
