Here’s a **quick-reference cheat sheet** with common recursion time complexity questions, patterns, and shortcuts to ace your exam without confusion:

---

### **1. Single Recursive Call (Linear)**
**Question**:  
```python
def f(n):
    if n <= 1:
        return
    f(n-1)
```
**Shortcut**:  
- **1 branch**, reduces `n` by 1 → \(O(n)\) time, \(O(n)\) space (stack depth).  
**Answer**: \(O(n)\).

---

### **2. Double Recursive Call (Binary Tree)**
**Question**:  
```python
def f(n):
    if n <= 1:
        return
    f(n-1)
    f(n-1)
```
**Shortcut**:  
- **2 branches**, each reduces `n` by 1 → \(O(2^n)\) time.  
**Answer**: \(O(2^n)\).

---

### **3. Triple Recursive Call (Exponential)**
**Question**:  
```python
def f(n):
    if n <= 1:
        return
    f(n-1)
    f(n-1)
    f(n-1)
```
**Shortcut**:  
- **3 branches** → \(O(3^n)\) time.  
**Answer**: \(O(3^n)\).

---

### **4. Fibonacci-Style (Mixed Reductions)**
**Question**:  
```python
def fib(n):
    if n <= 1:
        return n
    return fib(n-1) + fib(n-2)
```
**Shortcut**:  
- **2 branches** (`n-1` and `n-2`) → \(O(2^n)\) (loose bound), or \(O(\phi^n)\) (tight, \(\phi \approx 1.618\)).  
**Answer**: \(O(2^n)\) (use this in exams for simplicity).

---

### **5. Divide-and-Conquer (Log Time)**
**Question**:  
```python
def f(n):
    if n <= 1:
        return
    f(n//2)
```
**Shortcut**:  
- **1 branch**, halves `n` → \(O(\log n)\) time.  
**Answer**: \(O(\log n)\).

---

### **6. Multiple Reductions (Tribonacci-Style)**
**Question**:  
```python
def f(n):
    if n <= 1:
        return
    f(n-1)
    f(n-2)
    f(n-3)
```
**Shortcut**:  
- **3 branches** with mixed reductions → \(O(1.84^n)\) (tribonacci).  
**Exam Hack**: Say \(O(2^n)\) (close enough).  
**Answer**: \(O(2^n)\).

---

### **7. Branch with Loop (Combination)**
**Question**:  
```python
def f(n):
    if n <= 1:
        return
    for i in range(n):  # O(n) loop
        f(n-1)
```
**Shortcut**:  
- **Loop multiplies branches**: \(O(n \cdot n!)\) time.  
**Answer**: \(O(n!)\) (if unsure, write \(O(n^n)\)).

---

### **8. Memoization Optimized (DP)**
**Question**:  
```python
memo = {}
def fib(n):
    if n in memo:
        return memo[n]
    if n <= 1:
        return n
    memo[n] = fib(n-1) + fib(n-2)
    return memo[n]
```
**Shortcut**:  
- **Memoization reduces to \(O(n)\) time** (each `n` computed once).  
**Answer**: \(O(n)\).

---

### **Key Exam Rules**
1. **Count branches** → exponent base.  
   - 1 branch: \(O(n)\).  
   - 2 branches: \(O(2^n)\).  
   - 3 branches: \(O(3^n)\).  
2. **Halving problem size?** → \(O(\log n)\) or \(O(n \log n)\).  
3. **Mixed reductions (e.g., `n-1`, `n-2`)** → Approximate as \(O(2^n)\).  
4. **Memoization?** → Usually \(O(n)\).  

---

### **Final Tip**
- **Draw the recursion tree** for 2-3 levels to visualize branches.  
- **Default to worst-case** (e.g., \(O(2^n)\) for Fibonacci) if unsure.  

---

**Practice**:  
```python
def f(n):
    if n <= 1:
        return
    f(n-1)
    f(n-2)
```
**Answer**: \(O(2^n)\) (2 branches, mixed reductions).  

Memorize these patterns, and you’ll score flawlessly! 🚀