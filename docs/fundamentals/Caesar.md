# Caesar Cipher

## 1. Overview

The **Caesar Cipher** is one of the simplest and oldest encryption techniques in classical cryptography. It is named after Julius Caesar, who reportedly used this technique to communicate with his military officers.

It is a **substitution cipher** in which each plaintext letter is replaced by another letter a fixed number of positions down the alphabet.

The number of positions shifted is determined by the encryption key \(k\).

For example, with a key of \(k = 3\):

| Plaintext  | A | B | C | D | E | F | ... | X | Y | Z |
| ---------- | - | - | - | - | - | - | --- | - | - | - |
| Ciphertext | D | E | F | G | H | I | ... | A | B | C |

The alphabet wraps around when reaching its end.

---

## 2. Algorithm Classification

| Property             | Classification                        |
| -------------------- | ------------------------------------- |
| Cipher Type          | Substitution Cipher                   |
| Substitution Model   | Monoalphabetic                        |
| Encryption Structure | Symmetric-Key Encryption              |
| Operation            | Modular Arithmetic                    |
| Key                  | Integer \(k\), representing the shift |
| Alphabet Size        | 26                                    |
| Historical Category  | Classical Cryptography                |

### Why Monoalphabetic?

Caesar is a **monoalphabetic substitution cipher** because every occurrence of a particular plaintext letter is always replaced by the same ciphertext letter, provided the key remains unchanged.

For example, with \(k = 3\), every occurrence of `A` becomes `D`.

This property makes the cipher vulnerable to frequency analysis.

---

## 3. Mathematical Foundation

The Caesar Cipher operates on the mathematical structure of modular arithmetic.

Before encryption, each alphabetic character is converted into a numerical representation.

### 3.1 Alphabet-to-Numeric Mapping

Each letter is assigned an integer between 0 and 25.

| Letter | Value | Letter | Value | Letter | Value |
| :----: | :---: | :----: | :---: | :----: | :---: |
|    A   |   0   |    J   |   9   |    S   |   18  |
|    B   |   1   |    K   |   10  |    T   |   19  |
|    C   |   2   |    L   |   11  |    U   |   20  |
|    D   |   3   |    M   |   12  |    V   |   21  |
|    E   |   4   |    N   |   13  |    W   |   22  |
|    F   |   5   |    O   |   14  |    X   |   23  |
|    G   |   6   |    P   |   15  |    Y   |   24  |
|    H   |   7   |    Q   |   16  |    Z   |   25  |
|    I   |   8   |    R   |   17  |        |       |

This mapping allows encryption and decryption to be expressed mathematically.

### 3.2 Encryption Function

The encryption function is defined as:

$$
\boxed{E_k(x) = (x+k)\mod 26}
$$

Where:

* \(x\): Numerical representation of the plaintext character.
* \(k\): Encryption key (shift value).
* \(26\): Number of letters in the English alphabet.
* \(E_k(x)\): Numerical representation of the resulting ciphertext character.

**Example:**

Encrypt the letter `X` using \(k = 5\).

1. Convert `X` into its numerical representation:

$$
X = 23
$$

2. Apply the encryption function:

$$
E_5(23) = (23+5)\mod 26
$$

$$
=28\mod 26=2
$$

3. Convert the resulting value back into a letter:

$$
2 = C
$$

Therefore:

$$
\boxed{X \rightarrow C}
$$

### 3.3 Decryption Function

Decryption reverses the encryption process.

The decryption function is:

$$
\boxed{D_k(x) = (x-k)\mod 26}
$$

Where:

* \(x\): Numerical representation of the ciphertext character.
* \(k\): Original encryption key.
* \(D_k(x)\): Numerical representation of the recovered plaintext character.

**Example:**

Decrypt the letter `C` using \(k = 5\).

$$
C = 2
$$

Apply the decryption function:

$$
D_5(2) = (2-5)\mod 26
$$

$$
=(-3)\mod 26=23
$$

Convert the result back into a letter:

$$
23 = X
$$

Therefore:

$$
\boxed{C \rightarrow X}
$$

**Note:** In programming languages such as C++, the modulo operator can return a negative result when its first operand is negative. An implementation must account for this when performing decryption.

---

## 4. Complete Encryption Example

Consider the following plaintext:

```text
HELLO WORLD
```

Using the encryption key:

$$
k=3
$$

Each alphabetic character is shifted three positions forward.

| Plaintext       | H  | E | L  | L  | O  |
| --------------- | -- | - | -- | -- | -- |
| Numeric Value   | 7  | 4 | 11 | 11 | 14 |
| Encrypted Value | 10 | 7 | 14 | 14 | 17 |
| Ciphertext      | K  | H | O  | O  | R  |

Applying the same process to the remaining characters:

```text
Plaintext:  HELLO WORLD
Key:        3
Ciphertext: KHOOR ZRUOG
```

Decryption with the same key recovers the original plaintext:

```text
Ciphertext: KHOOR ZRUOG
Key:        3
Plaintext:  HELLO WORLD
```

---

## 5. Key Space and Security

The Caesar Cipher has a very limited key space.

Since the English alphabet contains 26 letters, there are only 26 possible shift values:

$$
k \in \{0,1,2,\ldots,25\}
$$

However, \(k=0\) performs no encryption, leaving only **25 meaningful encryption keys**.

### Security Weaknesses

1. **Brute-Force Attack:** An attacker can test all 25 meaningful keys to recover the plaintext.
2. **Frequency Analysis:** Since the cipher preserves the frequency distribution of letters, statistical analysis can reveal the original message.
3. **Small Key Space:** The limited number of possible keys makes exhaustive key searching computationally trivial.

Consequently, the Caesar Cipher is unsuitable for protecting modern communications and is primarily useful for understanding fundamental cryptographic concepts.

---

## 6. Implementation Notes

The C++ implementation in this repository provides two independent functions:

* `encrypt(plaintext, k)`: Encrypts a plaintext string using the specified key.
* `decrypt(ciphertext, k)`: Recovers the original plaintext using the same key.

The implementation supports:

* Uppercase and lowercase English letters.
* Arbitrary integer keys, including negative values.
* Automatic key normalization using modulo 26.
* Preservation of spaces, numbers, and special characters.

Only alphabetic characters are transformed.

---

## 7. References

* William Stallings, *Cryptography and Network Security: Principles and Practice*.
* Paar, C. and Pelzl, J., *Understanding Cryptography: A Textbook for Students and Practitioners*.
* [Caesar Cipher — Wikipedia](https://en.wikipedia.org/wiki/Caesar_cipher).

---
