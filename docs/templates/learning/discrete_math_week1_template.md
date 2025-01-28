/* Start of Selection
# Discrete Mathematics Canvas

Below is a concise, streamlined set of Discrete Math templates covering Propositional Logic, Predicate Logic, Proof Techniques, Recursion, Set Theory & Relations, Counting & Combinatorics, Recurrence Relations, and Equivalence Relations/Classes. Redundant details are removed, and structure is optimized for quick reference.

---

## 1. Propositional Logic

### Propositions

A proposition is a statement that can be either true (T) or false (F).

- *Examples:*
  - "The sky is blue." (T)
  - "2 + 2 = 5." (F)

### Logical Connectives

- **AND (Conjunction, $\land$)**: True only if both propositions are true.
- **OR (Disjunction, $\lor$)**: True if at least one proposition is true.
- **NOT (Negation, $\lnot$)**: Inverts the truth value of a proposition.
- **Implication ($\rightarrow$)**: “If $P$ then $Q$”; true unless $P$ is true and $Q$ is false.
- **Biconditional ($\leftrightarrow$)**: True if both propositions share the same truth value.

### Truth Table (Core Columns)

| $P$ | $Q$ | $P \land Q$ | $P \lor Q$ | $\lnot P$ | $P \rightarrow Q$ | $P \leftrightarrow Q$ |
| --- | --- | ---------- | ----------- | --------- | ----------------- | --------------------- |
| T   | T   | T          | T           | F         | T                 | T                     |
| T   | F   | F          | T           | F         | F                 | F                     |
| F   | T   | F          | T           | T         | T                 | F                     |
| F   | F   | F          | F           | T         | T                 | T                     |

---

## 2. Predicate Logic

### Predicates

A predicate $P(x)$ returns true or false depending on $x$.

- *Example:* "$P(x)$: $x$ is greater than 5."

### Quantifiers

- **Universal ($\forall$)**: “For all $x$, $P(x)$ is true.”
  - *Example:* "For all $x \in \mathbb{N}$, $x + 0 = x$."
- **Existential ($\exists$)**: “There exists an $x$ for which $P(x)$ is true.”
  - *Example:* "There exists an $x \in \mathbb{N}$ such that $x$ is even."

### Templates

- **$\forall x, P(x)$**
- **$\exists x \in S$ such that $P(x)$**

---

## 3. Proof Techniques

### 3.1 Direct Proof

- **Goal:** Show $P \Rightarrow Q$.
- **Method:** Assume $P$ is true. Through logical steps, conclude $Q$.

### 3.2 Proof by Contradiction

- **Goal:** Prove $P$.
- **Method:** Assume $\lnot P$. If this leads to a contradiction, $P$ must be true.

### 3.3 Proof by Induction

- **Goal:** Show a statement $P(n)$ holds for all $n \in \mathbb{N}$.
- **Steps:**
  1. **Base Case:** Prove $P(0)$ is true.
  2. **Inductive Step:** Assume $P(k)$ is true for some $k \in \mathbb{N}$ (Inductive Hypothesis). Then prove $P(k+1)$.

**Induction Template**

1. **Base Case:** Verify $P(0)$.
2. **Inductive Hypothesis:** Assume $P(k)$.
3. **Inductive Proof:** Show $P(k) \Rightarrow P(k+1)$.

---

## 4. Recursively Defined Functions

- **Definition:** A function defined in terms of simpler or smaller instances of itself.
- **Components:**
  1. **Base Case(s):** Explicit definition (no recursion).
  2. **Recursive Case(s):** The function calls itself on a smaller input, moving toward the base.

**Examples**

- **Factorial:**
  - $0! = 1$
  - $n! = n \times (n-1)!$ for $n > 0$
- **Fibonacci:**
  - $F(0) = 0$
  - $F(1) = 1$
  - $F(n) = F(n-1) + F(n-2)$ for $n > 1$

**Proof Approach:**\
Often use **Proof by Induction** to confirm correctness or properties (e.g., growth rate).

---

## 5. Set Theory, Relations, and Counting/Combinatorics

### 5.1 Basic Set Theory

- **Set Notation:** $\{a, b, c\}$
- **Subset ($\subseteq$):** $A \subseteq B$ means every element of $A$ is in $B$.
- **Union ($\cup$) & Intersection ($\cap$)**
- **Complement ($A^c$):** Elements not in $A$.

### 5.2 Relations

A relation $R$ from set $A$ to set $B$ is a subset of $A \times B$. On a single set $A$, common properties are:

- **Reflexive:** $\forall a \in A, (a, a) \in R$.
- **Symmetric:** $\forall a, b \in A, (a, b) \in R \Rightarrow (b, a) \in R$.
- **Transitive:** $\forall a, b, c \in A, (a, b) \in R \land (b, c) \in R \Rightarrow (a, c) \in R$.

### 5.3 Counting & Combinatorics

- **Addition Principle:** If event $A$ has $m$ ways and event $B$ has $n$ ways (disjoint), total $m + n$ ways.
- **Multiplication Principle:** If event $A$ has $m$ ways and event $B$ has $n$ ways (sequential), total $m \times n$ ways.
- **Permutations:** $P(n, k) = \frac{n!}{(n-k)!}$
- **Combinations:** $C(n, k) = \binom{n}{k} = \frac{n!}{k!(n-k)!}$
- **Binomial Theorem:** $(x + y)^n = \sum_{k=0}^{n} \binom{n}{k} x^{n-k} y^{k}$

---

## 6. Recurrence Relations

**Definition:** A sequence $\{a_n\}$ where each term depends on one or more previous terms.

**Common Forms**

- **Arithmetic:** $a_n = a_{n-1} + d$
- **Geometric:** $a_n = r \cdot a_{n-1}$
- **Fibonacci-like:** $a_n = a_{n-1} + a_{n-2}$

### 6.1 Methods of Solution

1. **Iteration (Unrolling):** Expand terms until a pattern emerges.
2. **Characteristic Equation (Linear Homogeneous):** Solve for $r$ in $r^n = c_1 r^{n-1} + \dots + c_k r^{n-k}$.
3. **Master Theorem:** For divide-and-conquer recurrences of the form $T(n) = aT\left(\frac{n}{b}\right) + f(n)$.
4. **Generating Functions:** Encode the sequence in a power series and manipulate algebraically.
5. **Proof by Induction:** Verify the closed-form solution once found.

---

## 7. Equivalence Relations & Equivalence Classes

### 7.1 Equivalence Relations

A relation $R$ on set $A$ is an equivalence relation if it is:

- **Reflexive:** $\forall a \in A, (a, a) \in R$
- **Symmetric:** $\forall a, b \in A, (a, b) \in R \Rightarrow (b, a) \in R$
- **Transitive:** $\forall a, b, c \in A, (a, b) \in R \land (b, c) \in R \Rightarrow (a, c) \in R$

### 7.2 Equivalence Classes

For $a \in A$, the equivalence class $[a]$ is:
$$
[a] = \{ x \in A \mid x R a \}
$$

Each element belongs to exactly one equivalence class under $R$.

### 7.3 Set Partitions

Equivalence relations partition $A$ into disjoint classes.

- *Example:* **Congruence mod $n$**: $a \equiv b \pmod{n}$ if $n$ divides $(a - b)$.
  - All integers with the same remainder form an equivalence class.

---

## Integrating These Templates

1. **Logic (Sections 1–2)** provides the language to formalize statements and predicates.
2. **Proof Techniques (Section 3)** establish truth or contradiction and are crucial in all discrete math areas.
3. **Recursive Definitions (Section 4)** and **Recurrence Relations (Section 6)** often rely on **Induction**.
4. **Set Theory & Relations (Section 5)** plus **Equivalence (Section 7)** give the structure for discussing how elements or sets interrelate.
5. **Counting & Combinatorics** underpins discrete enumeration, often proved via induction or direct counting arguments.

This cohesive “Discrete Math Canvas” offers fundamental tools and methods—from basic logic to advanced equivalence class proofs and recurrence solutions.
*/
