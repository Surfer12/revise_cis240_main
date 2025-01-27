1. Propositional Logic Template

Propositional Logic Statement:

Proposition: A statement that can be either true (T) or false (F).

Example: "The sky is blue." (T)

Example: "2 + 2 = 5." (F)

Logical Connectives:

AND (Conjunction, ∧): Both propositions must be true for the result to be true.

Example: "It is raining ∧ It is cold" is true if both conditions are met.

OR (Disjunction, ∨): At least one proposition must be true for the result to be true.

Example: "It is raining ∨ It is sunny" is true if either condition is met.

NOT (Negation, ¬): Inverts the truth value of the proposition.

Example: ¬(It is raining) means "It is not raining."

Implication (→): If the first proposition is true, then the second must also be true.

Example: "If it is raining, then the ground is wet" (Rain → Wet Ground).

Biconditional (↔): Both propositions have the same truth value.

Example: "It is raining ↔ The ground is wet" means both are true or both are false.

Truth Table for Logical Connectives:

| P | Q | P ∧ Q | P ∨ Q | ¬P | P → Q | P ↔ Q |
|---|---|-------|-------|----|-------|-------|
| T | T |   T   |   T   |  F |   T   |   T   |
| T | F |   F   |   T   |  F |   F   |   F   |
| F | T |   F   |   T   |  T |   T   |   F   |
| F | F |   F   |   F   |  T |   T   |   T   |

2. Predicate Logic Template

Predicate Logic Statement:

Predicate: A function that returns true or false for given inputs.

Example: P(x) where P(x) means "x is greater than 5."

Quantifiers:

Universal Quantifier (∀): "For all x, P(x) is true."

Example: ∀x (x > 0 → x² > 0)

Existential Quantifier (∃): "There exists an x such that P(x) is true."

Example: ∃x (x is even ∧ x is prime)

Template for Writing Predicate Logic Statements:

- **Predicate**: P(x) = "x is [condition]"
- **Statement**: ∀x ∈ [Domain], P(x) [logical connective] Q(x)
  - Example: ∀x ∈ ℕ, x > 2 → x² > 4
- **Statement**: ∃x ∈ [Domain] such that P(x)
  - Example: ∃x ∈ ℤ, x² = 4

3. Proof Techniques Template

Direct Proof:

Statement: If P, then Q (P → Q)

Steps:

Assume P is true.

Use logical steps to show Q must be true.

Proof by Contradiction:

Statement: Prove P.

Steps:

Assume ¬P (the negation of P).

Show that this assumption leads to a contradiction.

Conclude that P must be true.

Proof by Induction:

Statement: Prove that P(n) is true for all n ≥ k (usually k = 0 or 1).

Steps:

Base Case: Prove P(k) is true.

Inductive Step: Assume P(n) is true for some n = m (Inductive Hypothesis). Prove P(m+1) is true using this assumption.

Template for Proof by Induction:

- **Base Case**: Show P(k) holds.
  - Example: Prove P(0) is true.

- **Inductive Step**:
  - **Inductive Hypothesis**: Assume P(n) is true for n = m.
  - **Inductive Proof**: Show P(m+1) is true using the hypothesis.

4. Recursively Defined Functions

Definition of a Recursive Function

A recursive function is defined in terms of one or more simpler or smaller instances of itself. It typically has:

Base Case(s): Where the function is explicitly defined without further recursion.

Recursive Case(s): Where the function calls itself on smaller inputs, gradually building toward the base case.

General Form Example: Factorial



Example: Fibonacci Sequence



Tips for Using Recursive Definitions

Identify a clear base case or cases.

Express the recursive step so it strictly moves toward the base (e.g., reduces the argument).

Proof by Induction is often used to establish properties of recursively defined functions.

5. Set Theory, Relations, and Counting/Combinatorics

5.1 Basic Set Theory

Set Notation: Typically written with curly braces, e.g. 

Subset ():  means every element of  is also in .

Union () and Intersection (): Combine or overlap sets.

Complement (): Elements not in .

5.2 Relations

A relation  between sets  and  is a subset of their Cartesian product . Common properties of relations on a set  include:

Reflexive: .

Symmetric: .

Transitive: .

When a relation is reflexive, symmetric, and transitive, it is an equivalence relation (see Section 7).

5.3 Counting and Combinatorics

Basic Counting Principles

Addition Principle: If event  can occur in  ways and event  can occur in  ways (disjoint), then  can occur in  ways.

Multiplication Principle: If event  can occur in  ways and event  can occur in  ways (sequential), then  can occur in  ways.

Permutations and Combinations

Permutation: The number of ways to order  items from  distinct items: .

Combination: The number of ways to choose  items from  distinct items (order does not matter): .

Binomial Theorem:


Tips

Proof by Induction often applies in combinatorial identities.

Count carefully: break down the problem into simpler combinatorial elements.

6. Recurrence Relations

A recurrence relation defines a sequence  where each term is expressed in terms of one or more previous terms.

General Form:


Common Examples

Arithmetic Recurrence: .

Geometric Recurrence: .

Fibonacci-like: , with base cases .

6.1 Solving Recurrence Relations

Iteration (Unrolling): Write out successive terms until you see a pattern.

Example:  unrolls to .

Characteristic Equation (for linear homogeneous recurrences):

Example: .

Solve  to get .

Combine solutions for the final closed form, typically .

Master Theorem (for divide-and-conquer recurrences in algorithms):

Example: .

Classify  relative to  to find asymptotic complexity.

Generating Functions: Convert the recurrence into a power series; solve for a closed form by manipulating the series equation.

Proof by Induction: Once you have a proposed solution, use induction to confirm correctness.

7. Equivalence Relations & Equivalence Classes

7.1 Equivalence Relations

A relation  on a set  is an equivalence relation if it is:

Reflexive: .

Symmetric: .

Transitive: .

7.2 Equivalence Classes

Given an equivalence relation  on :

The equivalence class of an element  is the set of all elements that are related to :


Each element of  belongs to exactly one equivalence class for .

7.3 Applying Set Theory to Equivalence

Partition of a Set: An equivalence relation on  partitions  into disjoint equivalence classes. Each class groups elements considered "equivalent" under .

Example: Congruence modulo .

 if .

Equivalence classes are sets of integers sharing the same remainder upon division by .

Tips

Proving a relation is an equivalence relation typically involves checking reflexivity, symmetry, and transitivity.

Understanding equivalence classes clarifies many classifications in mathematics (e.g., grouping objects that share a certain property).

Integrating These Templates

Logical Tools (Sections 1–2) help in formalizing statements about the sets, functions, or relations you define.

Proof Techniques (Section 3) apply to establish properties of recursive functions, solve or verify recurrence relations, and prove statements in combinatorics.

Recursively Defined Functions (Section 4) and Recurrence Relations (Section 6) frequently rely on Proof by Induction.

Set Theory & Relations (Section 5) plus Equivalence Relations (Section 7) establish foundational language for describing complex structures (e.g., partitioning sets, analyzing function domains, or grouping solutions).

These newly added templates form a cohesive expansion to your discrete math “Canvas.” They provide the fundamental language and methods for tackling everything from basic combinatorial counting to sophisticated proofs of equivalence classes or recursive sequences.




1. Propositional Logic Template

**Propositional Logic Statement:**

A proposition is a statement that can be either true (T) or false (F).

- **Example**: "The sky is blue." (True)
- **Example**: "2 + 2 = 5." (False)

**Logical Connectives:**

- **AND (Conjunction, ∧)**: Both propositions must be true.
  - *Example*: "(It is raining) ∧ (It is cold)" is true only if both conditions are met.
- **OR (Disjunction, ∨)**: At least one proposition must be true.
  - *Example*: "(It is raining) ∨ (It is sunny)" is true if either condition is met.
- **NOT (Negation, ¬)**: Inverts the truth value.
  - *Example*: "¬(It is raining)" ⇒ "It is not raining."
- **Implication (→)**: "If P then Q"; if the first proposition is true, then the second must be true.
  - *Example*: "(Rain) → (Wet Ground)."
- **Biconditional (↔)**: Both propositions have the same truth value.
  - *Example*: "(Rain) ↔ (Wet Ground)" means both true or both false.

**Truth Table for Logical Connectives:**

| P | Q | P ∧ Q | P ∨ Q | ¬P | P → Q | P ↔ Q |
|---|---|-------|-------|----|-------|-------|
| T | T |   T   |   T   | F  |   T   |   T   |
| T | F |   F   |   T   | F  |   F   |   F   |
| F | T |   F   |   T   | T  |   T   |   F   |
| F | F |   F   |   F   | T  |   T   |   T   |

---

2. Predicate Logic Template

**Predicate Logic Statement:**

A predicate is a function that returns true or false for given inputs.

- **Example**: P(x): "x is greater than 5."

**Quantifiers:**

- **Universal Quantifier (∀)**: "For all x, P(x) is true."
  - *Example*: ∀x (x > 0 → x² > 0)
- **Existential Quantifier (∃)**: "There exists an x such that P(x)."
  - *Example*: ∃x (x is even ∧ x is prime)

**Template for Writing Predicate Logic Statements:**

- **Predicate**: P(x) = "x is [condition]"
- **Statement**: ∀x ∈ [Domain], P(x) [logical connective] Q(x)
  - *Example*: ∀x ∈ ℕ, (x > 2 → x² > 4)
- **Statement**: ∃x ∈ [Domain] such that P(x)
  - *Example*: ∃x ∈ ℤ, x² = 4

---

3. Proof Techniques Template

**Direct Proof**

- **Statement**: If P, then Q (P → Q)
- **Steps**:
  1. Assume P is true.
  2. Use logical steps to show Q must be true.

**Proof by Contradiction**

- **Statement**: Prove P.
- **Steps**:
  1. Assume ¬P (the negation).
  2. Show that this assumption leads to a contradiction.
  3. Conclude P must be true.

**Proof by Induction**

- **Statement**: Prove P(n) is true for all n ≥ k (often k = 0 or 1).
- **Steps**:
  - **Base Case**: Prove P(k) is true.
  - **Inductive Step**:
    1. Assume P(n) is true for n = m (Inductive Hypothesis).
    2. Prove P(m + 1) is true using that hypothesis.

**Template for Proof by Induction**

- **Base Case**: Show P(k) holds.
  - *Example*: Prove P(0) is true.
- **Inductive Step**:
  - **Inductive Hypothesis**: Assume P(n) is true for n = m.
  - **Inductive Proof**: Show P(m + 1) is true using the hypothesis.

---

4. Recursively Defined Functions

**Definition of a Recursive Function:**

A function defined in terms of one or more simpler or smaller instances of itself. It has:

- **Base Case(s)**: Explicit definition without recursion.
- **Recursive Case(s)**: The function calls itself on smaller inputs.

**General Form (Example: Factorial):**

- **Base Case**: `fact(0) = 1`
- **Recursive Case**: `fact(n) = n * fact(n - 1)`

**Example**: Fibonacci Sequence

- **Base Cases**: `F(0) = 0`, `F(1) = 1`
- **Recursive Case**: `F(n) = F(n - 1) + F(n - 2)`

**Tips:**

- Identify a clear base case or cases.
- Express the recursive step so it moves toward the base.
- Use Proof by Induction to establish properties.

---

5. Set Theory, Relations, and Counting/Combinatorics

**5.1 Basic Set Theory**

- **Set Notation**: E.g., A = {1, 2, 3, ...}
- **Subset (⊆)**: A ⊆ B means every element of A is also in B.
- **Union (A ∪ B)** and **Intersection (A ∩ B)**: Combine or overlap sets.
- **Complement (Aᶜ)**: Elements not in A.

**5.2 Relations**

A relation R between sets A and B is a subset of A × B.

**Common Properties on a Set A:**

- **Reflexive**: ∀x ∈ A, (x, x) ∈ R.
- **Symmetric**: ∀x, y ∈ A, (x, y) ∈ R ⇒ (y, x) ∈ R.
- **Transitive**: ∀x, y, z ∈ A, (x, y) ∈ R and (y, z) ∈ R ⇒ (x, z) ∈ R.

If R is reflexive, symmetric, and transitive, then R is an equivalence relation (see Section 7).

**5.3 Counting and Combinatorics**

**Basic Counting Principles**

- **Addition Principle**: If event A can occur in m ways and event B in n ways (disjoint), then A ∪ B can occur in m + n ways.
- **Multiplication Principle**: If event A can occur in m ways and event B in n ways (sequential), then the combination occurs in m × n ways.

**Permutations and Combinations**

- **Permutation**: Number of ways to order k items from n distinct items:
  - P(n, k) = n! / (n − k)!
- **Combination**: Number of ways to choose k items from n (order doesn't matter):
  - C(n, k) = n! / [k!(n − k)!]

**Binomial Theorem**

**Tips:**

- Proof by Induction often applies in combinatorial identities.
- Count carefully by breaking down into simpler elements.

---

6. Recurrence Relations

A recurrence relation defines a sequence {aₙ} where each term depends on previous terms.

**General Form:**

- aₙ = f(aₙ₋₁, aₙ₋₂, ..., aₙ₋k)

**Common Examples**

- **Arithmetic Recurrence**: aₙ = aₙ₋₁ + d.
- **Geometric Recurrence**: aₙ = r · aₙ₋₁.
- **Fibonacci-like**: Fₙ = Fₙ₋₁ + Fₙ₋₂, base cases F₀, F₁.

**6.1 Solving Recurrence Relations**

- **Iteration (Unrolling)**: Expand terms until a pattern emerges.
- **Characteristic Equation** (for linear homogeneous recurrences):
  - E.g., aₙ = c₁aₙ₋₁ + c₂aₙ₋₂.
  - Solve r² − c₁r − c₂ = 0.
- **Master Theorem**: For recurrences like T(n) = a T(n/b) + f(n).
- **Generating Functions**: Convert to a power series.
- **Proof by Induction**: Once a form is hypothesized, prove it.

---

7. Equivalence Relations & Equivalence Classes

**7.1 Equivalence Relations**

A relation R on set A is an equivalence relation if it is:

- **Reflexive**: ∀a ∈ A, (a, a) ∈ R.
- **Symmetric**: If (a, b) ∈ R ⇒ (b, a) ∈ R.
- **Transitive**: If (a, b) ∈ R and (b, c) ∈ R ⇒ (a, c) ∈ R.

**7.2 Equivalence Classes**

The equivalence class of a ∈ A is the set of all elements related to a:

- [a] = { x ∈ A | (a, x) ∈ R }

Each element belongs to exactly one equivalence class.

**7.3 Applying Set Theory to Equivalence**

- Equivalence relations partition a set into disjoint classes.
- **Example**: Congruence mod m: a ≡ b (mod m) if m | (a − b).
  - All integers with the same remainder mod m form an equivalence class.

**Tips:**

- Check reflexivity, symmetry, transitivity.
- Equivalence classes are crucial for grouping objects.

---

**Integrating These Templates**

- **Logic Tools (1–2)**: Formalize statements about sets, functions, or relations.
- **Proof Techniques (3)**: Used to prove properties of recursive functions, recurrence solutions, combinatorial claims.
- **Recursively Defined Functions (4)** & **Recurrence Relations (6)**: Often rely on induction.
- **Set Theory & Relations (5)** plus **Equivalence Relations (7)**: Foundational language for analyzing complex structures.

These expansions form a cohesive **Discrete Math Canvas**, covering fundamental language and methods from basic counting to complex equivalence class proofs.



 // Start of Selection
1. **Propositional Logic Template**

**Propositional Logic Statement:**

A proposition is a statement that can be either true (T) or false (F).

- **Example:** "The sky is blue." (True)
- **Example:** "2 + 2 = 5." (False)

**Logical Connectives:**

- **AND (Conjunction, ∧):** Both propositions must be true.
  
  *Example:* "(It is raining) ∧ (It is cold)" is true only if both conditions are met.

- **OR (Disjunction, ∨):** At least one proposition must be true.
  
  *Example:* "(It is raining)∨ (It is sunny)" is true if either condition is met.

- **NOT (Negation, ¬):** Inverts the truth value.
  
  *Example:* "¬(It is raining)" ⇒ "It is not raining."

- **Implication (→):** "If P then Q"; if the first proposition is true, then the second must be true.
  
  *Example:* "(Rain) → (Wet Ground)."

- **Biconditional (↔):** Both propositions have the same truth value.
  
  *Example:* "(Rain) ↔ (Wet Ground)" means both true or both false.

**Truth Table for Logical Connectives:**

| P | Q | P ∧ Q | P ∨ Q | ¬P | P → Q | P ↔ Q |
|---|---|-------|-------|----|-------|-------|
| T | T | T     | T     | F  | T     | T     |
| T | F | F     | T     | F  | F     | F     |
| F | T | F     | T     | T  | T     | F     |
| F | F | F     | F     | T  | T     | T     |

2. **Predicate Logic Template**

**Predicate Logic Statement:**

A predicate is a function that returns true or false for given inputs.

- **Example:** P(x): "x is greater than 5."

**Quantifiers:**

- **Universal Quantifier (∀):** "For all x, P(x) is true."
  
  *E.g.,* ∀x (x > 0 → x² > 0)

- **Existential Quantifier (∃):** "There exists an x such that P(x)."
  
  *E.g.,* ∃x (x is even ∧ x is prime)

**Template for Writing Predicate Logic Statements:**

- **Predicate:** P(x) = "x is [condition]"

- **Statement:** ∀x ∈ [Domain], P(x) [logical connective] Q(x)
  
  *Example:* ∀x ∈ ℕ, (x > 2 → x² > 4)

- **Statement:** ∃x ∈ [Domain] such that P(x)
  
  *Example:* ∃x ∈ ℤ, x² = 4

3. **Proof Techniques Template**

**Direct Proof**

- **Statement:** If P, then Q (P → Q)

- **Steps:**
  1. Assume P is true.
  2. Use logical steps to show Q must be true.

**Proof by Contradiction**

- **Statement:** Prove P.

- **Steps:**
  1. Assume ¬P (the negation).
  2. Show that this assumption leads to a contradiction.
  3. Conclude P must be true.

**Proof by Induction**

- **Statement:** Prove P(n) is true for all n ≥ k (often k=0 or 1).

- **Steps:**
  1. **Base Case:** Prove P(k) is true.
  2. **Inductive Step:**
     - Assume P(n) is true for n = m (Inductive Hypothesis).
     - Prove P(m+1) is true using that hypothesis.

**Template for Proof by Induction**

- **Base Case:** Show P(k) holds.
  
  *Example:* Prove P(0) is true.

- **Inductive Step:**
  1. **Inductive Hypothesis:** Assume P(n) is true for n = m.
  2. **Inductive Proof:** Show P(m+1) is true using the hypothesis.

4. **Recursively Defined Functions**

**Definition of a Recursive Function:**
A function defined in terms of one or more simpler or smaller instances of itself. It has:

- **Base Case(s):** Explicit definition without recursion.
- **Recursive Case(s):** The function calls itself on smaller inputs.

**General Form (Example: Factorial):**

**Example:** Fibonacci Sequence

**Tips:**

- Identify a clear base case or cases.
- Express the recursive step so it moves toward the base.
- Use Proof by Induction to establish properties.

5. **Set Theory, Relations, and Counting/Combinatorics**

**5.1 Basic Set Theory**

- **Set Notation:** e.g., A = {1, 2, 3, ...}
- **Subset (⊆):** A ⊆ B means every element of A is also in B.
- **Union (A ∪ B)** and **Intersection (A ∩ B):** Combine or overlap sets.
- **Complement (A^c):** Elements not in A.

**5.2 Relations**

A relation R between sets A and B is a subset of A × B.

**Common properties on a set A:**

- **Reflexive:** ∀x ∈ A, (x, x) ∈ R.
- **Symmetric:** ∀x, y ∈ A, (x, y) ∈ R ⇒ (y, x) ∈ R.
- **Transitive:** ∀x, y, z ∈ A, (x, y) ∈ R and (y, z) ∈ R ⇒ (x, z) ∈ R.

If R is reflexive, symmetric, and transitive, then R is an equivalence relation (see Section 7).

**5.3 Counting and Combinatorics**

**Basic Counting Principles:**

- **Addition Principle:** If event A can occur in m ways and event B in n ways (disjoint), then A ∪ B can occur in m + n ways.
- **Multiplication Principle:** If event A can occur in m ways and event B in n ways (sequential), then the combination occurs in m × n ways.

**Permutations and Combinations:**

- **Permutation:** Number of ways to order k items from n distinct items: P(n, k) = n! / (n − k)!
- **Combination:** Number of ways to choose k items from n (order doesn't matter): C(n, k) = n! / [k! (n − k)!]

**Binomial Theorem**

**Tips:**

- Proof by Induction often applies in combinatorial identities.
- Count carefully by breaking down into simpler elements.

6. **Recurrence Relations**

A recurrence relation defines a sequence {a_n} where each term depends on previous terms.

**General Form:**

**Common Examples:**

- **Arithmetic Recurrence:** a_n = a_{n−1} + d.
- **Geometric Recurrence:** a_n = r · a_{n−1}.
- **Fibonacci-like:** F_n = F_{n−1} + F_{n−2}, base cases F₀, F₁.

**6.1 Solving Recurrence Relations**

- **Iteration (Unrolling):** Expand terms until a pattern emerges.
- **Characteristic Equation (for linear homogeneous recurrences):**
  
  *e.g.,* a_n = c₁ a_{n−1} + c₂ a_{n−2}.
  
  Solve r² − c₁ r − c₂ = 0.

- **Master Theorem:** For recurrences like T(n) = a T(n/b) + f(n).
- **Generating Functions:** Convert to a power series.
- **Proof by Induction:** Once a form is hypothesized, prove it.

7. **Equivalence Relations & Equivalence Classes**

**7.1 Equivalence Relations**

A relation R on set A is an equivalence relation if it is:

- **Reflexive:** ∀a ∈ A, (a, a) ∈ R.
- **Symmetric:** (a, b) ∈ R ⇒ (b, a) ∈ R.
- **Transitive:** (a, b) ∈ R and (b, c) ∈ R ⇒ (a, c) ∈ R.

**7.2 Equivalence Classes**

The equivalence class of a ∈ A is the set of all elements related to a:

- Each element belongs to exactly one equivalence class.

**7.3 Applying Set Theory to Equivalence**

Equivalence relations partition a set into disjoint classes.

**Example:** Congruence mod m: a ≡ b (mod m) if m | (a − b).

All integers with the same remainder mod m form an equivalence class.

**Tips:**

- Check reflexivity, symmetry, transitivity.
- Equivalence classes are crucial for grouping objects.

**Integrating These Templates**

- **Logic Tools (1–2):** Formalize statements about sets, functions, or relations.
- **Proof Techniques (3):** Used to prove properties of recursive functions, recurrence solutions, combinatorial claims.
- **Recursively Defined Functions (4)** & **Recurrence Relations (6):** Often rely on induction.
- **Set Theory & Relations (5)** plus **Equivalence Relations (7):** Foundational language for analyzing complex structures.

These expansions form a cohesive “Discrete Math Canvas,” covering fundamental language and methods from basic counting to complex equivalence class proofs.


Below is an expanded set of templates that builds upon the original Propositional Logic, Predicate Logic, and Proof Techniques. These additions focus on Recursively Defined Functions, Set Theory & Relations, Counting & Combinatorics, Recurrence Relations, and Equivalence Relations—key topics in Discrete Mathematics.

4. Recursively Defined Functions Template

Definition of a Recursive Function

A recursive function is defined in terms of one or more simpler or smaller instances of itself. It typically has:

Base Case(s): Where the function is explicitly defined without further recursion.

Recursive Case(s): Where the function calls itself on smaller inputs, gradually building toward the base case.

General Form:

Example: Factorial Function

Example: Fibonacci Sequence

Tips for Using Recursive Definitions

Identify a clear base case or cases.

Express the recursive step so it strictly moves toward the base (e.g., reduces $n$).

Proof by Induction is often used to establish properties of recursively defined functions.

5. Set Theory, Relations, and Counting/Combinatorics

5.1 Basic Set Theory

Set Notation: $A = { x : P(x) }$

Subset ($\subseteq$): $A \subseteq B$ means every element of $A$ is also in $B$.

Union ($A \cup B$) and Intersection ($A \cap B$): Combine or overlap sets.

Complement ($A^c$): Elements not in $A$.

5.2 Relations

A relation $R$ between sets $A$ and $B$ is a subset of their Cartesian product $A \times B$. Common properties of relations on a set $A$ include:

Reflexive: $\forall x \in A,,(x,x) \in R$.

Symmetric: $\forall x,y \in A,,(x,y) \in R \implies (y,x) \in R$.

Transitive: $\forall x,y,z \in A,,(x,y) \in R \wedge (y,z) \in R \implies (x,z) \in R$.

When a relation is reflexive, symmetric, and transitive, it is an equivalence relation (see Section 7).

5.3 Counting and Combinatorics

Basic Counting Principles

Addition Principle: If event $E_1$ can occur in $n_1$ ways and event $E_2$ can occur in $n_2$ ways (disjoint), then $E_1 \cup E_2$ can occur in $n_1 + n_2$ ways.

Multiplication Principle: If event $E_1$ can occur in $n_1$ ways and event $E_2$ can occur in $n_2$ ways (sequential), then $E_1 \times E_2$ can occur in $n_1 \times n_2$ ways.

Permutations and Combinations

Permutation: The number of ways to order $k$ items from $n$ distinct items is


Combination: The number of ways to choose $k$ items from $n$ distinct items (order does not matter) is


Binomial Theorem


Tips

Proof by Induction often applies in combinatorial identities.

Count carefully: break down problems into simpler combinatorial elements.

6. Recurrence Relations

A recurrence relation defines a sequence ${a_n}$ where each term is expressed in terms of one or more previous terms.

General Form:

Common Examples

Arithmetic Recurrence: $a_{n} = a_{n-1} + d$.

Geometric Recurrence: $a_{n} = r\cdot a_{n-1}$.

Fibonacci-like: $F_n = F_{n-1} + F_{n-2}$, with base cases $F_0$ and $F_1$.

6.1 Solving Recurrence Relations

Iteration (Unrolling)

Write out successive terms until you see a pattern.

Example: $T(n) = T(n-1) + n$, unrolls to $T(n) = T(n-2) + (n-1) + n$, etc.

Characteristic Equation (for linear homogeneous recurrences)

Example: $a_n = 2a_{n-1} - a_{n-2}$.

Solve the characteristic equation $r^2 - 2r + 1 = 0$.

Combine solutions for the final closed form.

Master Theorem (for divide-and-conquer recurrences in algorithms)

Example: $T(n) = aT\bigl(\frac{n}{b}\bigr) + f(n)$.

Classify $f(n)$ relative to $n^{\log_b a}$ to find asymptotic complexity.

Generating Functions

Convert the recurrence into a power series; solve for a closed form by manipulating the series equation.

Proof by Induction

Once you have a proposed solution, use induction to confirm correctness.

7. Equivalence Relations & Equivalence Classes

7.1 Equivalence Relations

A relation $R$ on a set $A$ is an equivalence relation if it is:

Reflexive: $\forall x\in A,,(x,x) \in R$.

Symmetric: $\forall x,y\in A,,(x,y)\in R \implies (y,x)\in R$.

Transitive: $\forall x,y,z\in A,,(x,y)\in R \wedge (y,z)\in R \implies (x,z)\in R$.

7.2 Equivalence Classes

Given an equivalence relation $R$ on $A$:

The equivalence class of an element $a$ is the set of all elements that are related to $a$:


Each element of $A$ belongs to exactly one equivalence class for $R$.

7.3 Applying Set Theory to Equivalence

Partition of a Set: An equivalence relation on $A$ partitions $A$ into disjoint equivalence classes, grouping elements considered “equivalent” under $R$.

Example: Congruence modulo $m$.

$a \equiv b \pmod{m}$ if $m \mid (a - b)$.

Equivalence classes are sets of integers that share the same remainder when divided by $m$.

Tips

Proving a relation is an equivalence relation typically involves checking reflexivity, symmetry, and transitivity.

Understanding equivalence classes clarifies many classifications in mathematics (e.g., grouping objects that share a certain property).

Integrating These Templates

Logical Tools (Sections 1–2) help in formalizing statements about the sets, functions, or relations you define.

Proof Techniques (Section 3) apply to establish properties of recursive functions, solve or verify recurrence relations, and prove statements in combinatorics.

Recursively Defined Functions (Section 4) and Recurrence Relations (Section 6) frequently rely on Proof by Induction.

Set Theory & Relations (Section 5) plus Equivalence Relations (Section 7) establish foundational language for describing complex structures (e.g., partitioning sets, analyzing function domains, or grouping solutions).

These newly added templates form a cohesive expansion to your discrete math “Canvas.” They provide the fundamental language and methods for tackling everything from basic combinatorial counting to sophisticated proofs of equivalence classes or recursive sequences.

