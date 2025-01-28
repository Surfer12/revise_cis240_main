
Suggested Additional Templates (Plain Text with LaTeX)

Graph Theory Template

Definitions:
  - **Graph (G):** A set of vertices (\( V \)) connected by edges (\( E \)).
  - **Directed Graph:** Edges have a direction associated with them.
  - **Weighted Graph:** Edges have weights representing cost or distance.

Key Concepts:
  - **Paths and Cycles:** Sequences of vertices connected by edges.
  - **Connectivity:** Whether a path exists between vertices.
  - **Subgraphs:** Portions of a graph that form a graph themselves.

Example:
  - **Problem:** Determine if a graph is connected.
  - **Solution:**
    - Use Depth-First Search (DFS) or Breadth-First Search (BFS).
    - If all vertices are visited, the graph is connected.

Number Theory Template

Definitions:
  - **Prime Numbers:** Integers greater than 1 with no positive divisors other than 1 and itself.
  - **Greatest Common Divisor (GCD):** The largest integer that divides two numbers.

Key Concepts:
  - **Euclidean Algorithm:** Efficient method for computing GCD.
  - **Modular Arithmetic:** Arithmetic system for integers where numbers "wrap around" upon reaching a modulus.

Example:
  - **Problem:** Find the GCD of two numbers using the Euclidean Algorithm.
  - **Solution:**
    - Apply the recursive formula: \( \text{GCD}(a, b) = \text{GCD}(b, a \mod b) \).

Discrete Probability Template

Definitions:
  - **Experiment:** A procedure that yields one of a possible set of outcomes.
  - **Sample Space (\( S \)):** The set of all possible outcomes.
  - **Event (\( E \)):** A subset of the sample space.

Key Concepts:
  - **Probability of an Event:** \( P(E) = \frac{|E|}{|S|} \) when outcomes are equally likely.
  - **Conditional Probability:** \( P(A \mid B) = \frac{P(A \cap B)}{P(B)} \).
  - **Bayes' Theorem:** Relates conditional probabilities of events.

Example:
  - **Problem:** Calculate the probability of drawing an ace from a deck of cards.
  - **Solution:**
    - \( P(\text{Ace}) = \frac{\text{Number of aces}}{\text{Total number of cards}} = \frac{4}{52} = \frac{1}{13} \).

Advanced Counting Techniques Template

Principles:
  - **Pigeonhole Principle:** If \( n+1 \) objects are placed into \( n \) boxes, at least one box contains more than one object.
  - **Inclusion-Exclusion Principle:** Accounts for overlapping sets when counting.

Example:
  - **Problem:** In a group of 367 people, prove that at least two share the same birthday.
  - **Solution:**
    - By the Pigeonhole Principle, since there are only 366 possible birthdays (including February 29), at least two people share a birthday.

Logic Circuit Design Template

Definitions:
  - **Logic Gates:** Basic building blocks (AND, OR, NOT, NAND, NOR, XOR).
  - **Combinational Circuits:** Output depends only on the current inputs.
  - **Sequential Circuits:** Output depends on current inputs and previous states.

Example:
  - **Problem:** Design a circuit that outputs true only when exactly one input is true.
  - **Solution:**
    - Use an XOR gate, which outputs true when inputs differ.

Automata Theory Template

Definitions:
  - **Finite Automaton:** Abstract machine to recognize patterns within input.
  - **Deterministic Finite Automaton (DFA):** For each state and input, there's exactly one transition.
  - **Non-Deterministic Finite Automaton (NFA):** May have multiple transitions for a state and input.

Key Concepts:
  - **Language Recognition:** Set of strings accepted by an automaton.
  - **Regular Expressions:** Algebraic expressions representing regular languages.

Example:
  - **Problem:** Create a DFA that accepts binary strings ending with '01'.
  - **Solution:**
    - Design states to track the last two input bits and accept if they are '01'.

Feel free to copy and paste this or let me know if you’d like this content sent in a different format!