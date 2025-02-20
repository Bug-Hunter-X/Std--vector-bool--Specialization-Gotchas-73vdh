# std::vector<bool> - A C++ Trap for the Unwary

This repository demonstrates a common, yet subtle, issue encountered when using `std::vector<bool>` in C++.  The specialization of `std::vector<bool>` deviates from the standard `std::vector` behavior, often leading to unexpected results and compilation errors.

**The Problem:**

`std::vector<bool>` is optimized for memory efficiency.  However, this optimization sacrifices some standard vector functionalities.  Unlike other vector types, it does not store individual `bool` values directly; instead, it employs bit-packing techniques.

This difference affects indexing and assignment operations.  Attempting to use `[]` as you would with other vector types may cause issues. 

**Example of the issue**: In `bug.cpp`, we demonstrate this issue.  Attempting to directly assign a new value to element at index 0 will result in compilation issues.

**The Solution:**

The solution lies in understanding and using the correct methods. `bugSolution.cpp` shows how to correctly modify elements of `std::vector<bool>` using its member functions,  like `at()` to avoid indexing problems and ensure correctness.

**Recommended Practice:**

Unless absolutely necessary for extreme memory optimization, it's generally best to avoid `std::vector<bool>` and use a more intuitive alternative such as `std::vector<int>` (where 0 represents false and any other value represents true) or a custom implementation. This will improve code readability and reduce the risk of encountering these types of bugs.