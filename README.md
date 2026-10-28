# Cryptography Lab

**Understanding cryptography through implementation, analysis, and experimentation.**

This repository documents my progress in the *Introduction to Cryptography* course as a Computer Engineering student. It serves as a practical learning laboratory where I implement cryptographic algorithms in C++, explore their underlying mathematical principles, study their internal architectures, and investigate their strengths and weaknesses.

The goal is not simply to implement algorithms, but to understand **how they work, why they were designed that way, and what makes them secure or vulnerable.**

## Objectives

- Implement cryptographic algorithms in C++ to develop a practical understanding of their operation.
- Document the mathematical foundations, internal structures, and workflows of each algorithm.
- Explore encryption, decryption, and cryptanalysis techniques.
- Investigate the security properties and limitations of different cryptographic approaches.
- Conduct experiments to test theoretical concepts and observe algorithm behavior.
- Maintain references to relevant research papers, technical documentation, and educational resources.

## Repository Structure

The repository is organized by cryptographic topics and algorithms. Its structure will evolve as I progress through the course.

```text
cryptography-lab/
├── README.md
├── classical/
│   ├── caesar/
│   ├── monoalphabetic/
│   └── vigenere/
├── modern/
│   └── des/
├── docs/
│   ├── fundamentals/
│   └── references.md
└── experiments/
```

*Note: This is the planned organizational structure and may change as the project develops.*

## Topics Covered

### Classical Cryptography
- Caesar cipher
- Monoalphabetic substitution cipher
- Polyalphabetic substitution ciphers
- Cryptanalysis techniques, including exhaustive key search and frequency analysis

### Modern Cryptography
- Block cipher architecture
- Feistel networks
- Data Encryption Standard (DES)
- Substitution boxes (S-boxes), permutations, and key scheduling
- Additional algorithms and concepts as the course progresses

### Analysis and Experiments
- Mathematical analysis of algorithms and key spaces
- Implementation correctness and testing
- Cryptographic weaknesses and attack strategies
- Experiments exploring properties such as confusion, diffusion, and the avalanche effect

These topics represent the intended scope of the project, not a claim that every listed topic has already been implemented or investigated.

## Documentation

Each algorithm's documentation may include:

- **Overview:** Purpose, historical context, and classification.
- **Mathematical foundation:** Equations, transformations, and relevant concepts.
- **Algorithm workflow:** Schematics, diagrams, and step-by-step explanations.
- **Implementation:** C++ design decisions and usage examples.
- **Security analysis:** Strengths, weaknesses, and known limitations.
- **Cryptanalysis:** Attack methods and practical demonstrations, where applicable.
- **References:** Sources used for further study and technical verification.

The documentation is intended to explain both the theory and the practical implementation, with particular attention to the reasoning behind each algorithm's design.

## Technologies

- **C++** — Algorithm implementation and experimentation.
- **Markdown** — Technical documentation and learning notes.
- **Git and GitHub** — Version control and project tracking.

Additional tools may be introduced when they provide a clear benefit to testing, analysis, or documentation.

## Project Status

This is an ongoing educational project. Implementations, documentation, and experiments will be added incrementally as I study new concepts and develop a deeper understanding of cryptography.

The repository reflects my learning process, including the investigation of algorithmic limitations and the verification of implementations against known results.

## Disclaimer

This repository is intended for educational and research purposes. Implementations are developed to study cryptographic concepts and should not be assumed to be production-ready or suitable for protecting sensitive information.

Some algorithms studied here, including Caesar and DES, are insecure for modern cryptographic use. Their inclusion is for educational and historical purposes.

## References

Relevant textbooks, research papers, technical standards, and other learning resources will be documented throughout the repository as they are used.

---

*An ongoing exploration of cryptography through code, mathematics, and critical analysis.*