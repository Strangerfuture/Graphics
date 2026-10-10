# Computer Graphics Algorithms

A collection of computer graphics algorithms implemented in C++ to explore fundamental graphics concepts, including line drawing techniques and rasterization.

## Algorithms

### Line Drawing Algorithms

- **Digital Differential Analyzer (DDA)** — Draws lines by incrementally calculating intermediate points between two endpoints.
- **Bresenham’s Line Algorithm (BSA)** — Uses integer-based calculations to efficiently determine the pixels needed to draw a straight line.

## Project Structure

```text
Graphics/
├── Line Drawing Algorithm/
│   ├── BSA.cpp
│   ├── DDA.cpp
│   └── makefile
└── README.md
```

## Getting Started

### Prerequisites

- A C++ compiler, such as `g++`
- GNU Make

On Arch Linux, install the required tools with:

```bash
sudo pacman -S gcc make
```

### Clone the Repository

```bash
git clone https://github.com/Strangerfuture/Graphics.git
cd Graphics
```

### Compile and Run

Navigate to the line drawing directory:

```bash
cd "Line Drawing Algorithm"
```

Compile the DDA algorithm:

```bash
g++ DDA.cpp -o dda
./dda
```

Compile the Bresenham’s Line Algorithm:

```bash
g++ BSA.cpp -o bsa
./bsa
```

Alternatively, use the provided Makefile if it defines suitable build targets:

```bash
make
```

## Learning Objectives

- Understand raster graphics and pixel-based line rendering.
- Compare incremental line drawing algorithms.
- Explore the differences between floating-point and integer-based calculations.
- Practice implementing computer graphics algorithms in C++.

## Language

- C++

## Author

**Strangerfuture**

GitHub: [@Strangerfuture](https://github.com/Strangerfuture)
