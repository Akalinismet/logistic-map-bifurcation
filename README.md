# Logistic Map Bifurcation Exploration

This repository explores the **Logistic Map**, a simple nonlinear difference equation that exhibits chaotic behavior depending on the growth rate parameter `r`.

## Overview

The logistic map is defined as:

\[
x_{n+1} = r \cdot x_n \cdot (1 - x_n)
\]

This project includes:
- A **C program** that generates bifurcation data.
- A **Python script** that visualizes the results.
- A **C simulator** that interactively computes population values for any chosen parameters.

## Files

| File | Description |
|------|--------------|
| `logistic_map_bifurcation.c` | Generates `bifurcation.csv` with (r, x) pairs for plotting. |
| `plot_bifurcation.py` | Reads and visualizes the bifurcation diagram using Matplotlib. |
| `logistic_map_simulator.c` | Allows manual exploration of population evolution. |

## How to Use

### 1. Generate Data (C)
Compile and run:

```bash
gcc logistic_map_bifurcation.c -o bifurcation
./bifurcation

This will create bifurcation.csv.

2. Visualize (Python)
Run:
python plot_bifurcation.py

A bifurcation diagram will appear.

3. Interactive Simulation (C)
Compile and run:

gcc logistic_map_simulator.c -o simulator
./simulator

Enter desired values for iterations, population, and growth rate.

Example Output
The bifurcation plot shows how population dynamics shift from stability to chaos as r increases.

Author: İsmet Akalın
License: MIT
Language: C & Python
