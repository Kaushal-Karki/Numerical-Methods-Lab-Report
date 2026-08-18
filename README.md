# Numerical Methods — Algorithms

## Experiment 1: Bisection Method

**Algorithm:**

1. Start.
2. Define the function `f(x)`.
3. Enter the initial values `a` and `b` such that `f(a) × f(b) < 0`.
4. Calculate the midpoint:
   `c = (a + b) / 2`
5. If `f(c) = 0`, then `c` is the required root.
6. If `f(a) × f(c) < 0`, set `b = c`; otherwise set `a = c`.
7. Repeat steps 4–6 until the desired accuracy is obtained.
8. Display the root.
9. Stop.

---

## Experiment 2: False Position (Regula-Falsi) Method

**Algorithm:**

1. Start.
2. Define the function `f(x)`.
3. Enter `a` and `b` such that `f(a) × f(b) < 0`.
4. Calculate:
   `c = (a × f(b) - b × f(a)) / (f(b) - f(a))`
5. If `f(c) = 0`, then `c` is the required root.
6. If `f(a) × f(c) < 0`, set `b = c`; otherwise set `a = c`.
7. Repeat until the required accuracy is achieved.
8. Display the root.
9. Stop.

---

## Experiment 3: Newton-Raphson Method

**Algorithm:**

1. Start.
2. Define the function `f(x)` and its derivative `f'(x)`.
3. Enter an initial approximation `x₀`.
4. Calculate the next approximation using:
   `xₙ₊₁ = xₙ - f(xₙ) / f'(xₙ)`
5. Check whether `|xₙ₊₁ - xₙ|` is less than the specified tolerance.
6. If not, set `xₙ = xₙ₊₁` and repeat step 4.
7. Display the approximate root.
8. Stop.

---

## Experiment 4: Secant Method

**Algorithm:**

1. Start.
2. Define the function `f(x)`.
3. Enter two initial approximations `x₀` and `x₁`.
4. Calculate:
   `x₂ = x₁ - [f(x₁)(x₁ - x₀)] / [f(x₁) - f(x₀)]`
5. Check whether `|x₂ - x₁|` is less than the specified tolerance.
6. If not, set `x₀ = x₁` and `x₁ = x₂`.
7. Repeat steps 4–6 until convergence.
8. Display the root.
9. Stop.

---

## Experiment 5: Gauss Elimination Method

**Algorithm:**

1. Start.
2. Enter the number of equations and the augmented matrix.
3. Convert the matrix into upper triangular form using elementary row operations.
4. For each pivot row, eliminate the elements below the pivot.
5. Perform back substitution starting from the last equation.
6. Calculate the values of the unknown variables.
7. Display the solution.
8. Stop.

---

## Experiment 6: Gauss-Jordan Method

**Algorithm:**

1. Start.
2. Enter the augmented matrix of the system.
3. Select the pivot element for each row.
4. Divide the pivot row by the pivot element to make the pivot equal to `1`.
5. Use row operations to make all other elements in the pivot column equal to `0`.
6. Repeat for every pivot column.
7. The resulting matrix gives the values of the unknowns directly.
8. Display the solution.
9. Stop.

---

## Experiment 7: LU Decomposition Method

**Algorithm:**

1. Start.
2. Enter the coefficient matrix `A` and constant matrix `B`.
3. Decompose matrix `A` into:
   `A = LU`
4. Calculate the lower triangular matrix `L` and upper triangular matrix `U`.
5. Solve:
   `LY = B`
   using forward substitution.
6. Solve:
   `UX = Y`
   using back substitution.
7. Display the values of the unknown variables.
8. Stop.

---

## Experiment 8: Jacobi Iterative Method

**Algorithm:**

1. Start.
2. Enter the system of linear equations.
3. Rearrange each equation to express one variable in terms of the others.
4. Choose initial approximations for all variables.
5. Calculate new values of the variables using only the values from the previous iteration.
6. Check the error between successive approximations.
7. If the error is greater than the tolerance, repeat the iteration.
8. Continue until the required accuracy is achieved.
9. Display the solution.
10. Stop.

---

## Experiment 9: Gauss-Seidel Method

**Algorithm:**

1. Start.
2. Enter the system of linear equations.
3. Rearrange the equations to express each variable in terms of the remaining variables.
4. Choose initial approximations for all variables.
5. Calculate the first variable using the latest available values.
6. Immediately use the newly calculated value to calculate the next variable.
7. Continue until all variables are updated.
8. Check the error between successive iterations.
9. Repeat until the required accuracy is achieved.
10. Display the solution.
11. Stop.

---

## Experiment 10: Lagrange Interpolation

**Algorithm:**

1. Start.
2. Enter the number of data points.
3. Enter the values of `x` and corresponding `y`.
4. Enter the value `X` at which interpolation is required.
5. Calculate the Lagrange basis polynomial for each data point:
   `Lᵢ(X) = Π (X - xⱼ) / (xᵢ - xⱼ)`, where `j ≠ i`.
6. Calculate:
   `P(X) = Σ yᵢLᵢ(X)`
7. Display the interpolated value `P(X)`.
8. Stop.

---

## Experiment 11: Newton's Divided Difference Interpolation

**Algorithm:**

1. Start.
2. Enter the number of data points.
3. Enter the values of `x` and `y`.
4. Construct the divided difference table.
5. Calculate the divided differences using:
   `f[xᵢ, xᵢ₊₁] = (f[xᵢ₊₁] - f[xᵢ]) / (xᵢ₊₁ - xᵢ)`
6. Continue calculating higher-order divided differences.
7. Form the Newton interpolation polynomial.
8. Substitute the required value of `X`.
9. Display the interpolated value.
10. Stop.

---

## Experiment 12: Trapezoidal Rule

**Algorithm:**

1. Start.
2. Enter the function `f(x)`.
3. Enter the lower limit `a`, upper limit `b`, and number of intervals `n`.
4. Calculate:
   `h = (b - a) / n`
5. Calculate the function values at each interval.
6. Apply the formula:
   `I = h/2 [f(a) + f(b) + 2Σf(xᵢ)]`
7. Display the approximate value of the integral.
8. Stop.

---

## Experiment 13: Simpson's 1/3 Rule

**Algorithm:**

1. Start.
2. Enter the function `f(x)`.
3. Enter the limits `a`, `b` and an even number of intervals `n`.
4. Calculate:
   `h = (b - a) / n`
5. Calculate the values of `f(x)` at all points.
6. Apply:
   `I = h/3 [f(x₀) + f(xₙ) + 4Σf(xᵢ) + 2Σf(xᵢ)]`
7. Use coefficient `4` for odd-indexed terms and `2` for even-indexed terms.
8. Display the approximate integral.
9. Stop.

---

## Experiment 14: Simpson's 3/8 Rule

**Algorithm:**

1. Start.
2. Enter the function `f(x)`.
3. Enter the limits `a`, `b` and the number of intervals `n`, where `n` is a multiple of `3`.
4. Calculate:
   `h = (b - a) / n`
5. Calculate the function values at all points.
6. Apply Simpson's 3/8 formula:
   `I = 3h/8 [f(x₀) + f(xₙ) + 3Σf(xᵢ) + 2Σf(xᵢ)]`
7. Use coefficient `3` for indices not divisible by `3` and coefficient `2` for indices divisible by `3`.
8. Display the approximate integral.
9. Stop.

---

## Experiment 15: Euler's Method

**Algorithm:**

1. Start.
2. Enter the differential equation:
   `dy/dx = f(x, y)`
3. Enter the initial values `x₀`, `y₀`, step size `h`, and required value of `x`.
4. Calculate the next value using:
   `yₙ₊₁ = yₙ + h f(xₙ, yₙ)`
5. Calculate:
   `xₙ₊₁ = xₙ + h`
6. Repeat until the required value of `x` is reached.
7. Display the approximate value of `y`.
8. Stop.

---

## Experiment 16: Modified Euler's Method

**Algorithm:**

1. Start.
2. Enter the differential equation:
   `dy/dx = f(x, y)`
3. Enter the initial values `x₀`, `y₀` and step size `h`.
4. Calculate the predictor:
   `yₚ = yₙ + h f(xₙ, yₙ)`
5. Calculate the corrector:
   `yₙ₊₁ = yₙ + h/2 [f(xₙ, yₙ) + f(xₙ₊₁, yₚ)]`
6. Repeat the correction step until the required accuracy is obtained.
7. Update `x` and `y`.
8. Repeat until the required value of `x` is reached.
9. Display the approximate solution.
10. Stop.

---

## Experiment 17: Runge-Kutta Method

**Algorithm:**

1. Start.

2. Enter the differential equation:
   `dy/dx = f(x, y)`

3. Enter initial values `x₀`, `y₀`, step size `h`, and required value of `x`.

4. Calculate:

   `k₁ = h f(xₙ, yₙ)`

   `k₂ = h f(xₙ + h/2, yₙ + k₁/2)`

   `k₃ = h f(xₙ + h/2, yₙ + k₂/2)`

   `k₄ = h f(xₙ + h, yₙ + k₃)`

5. Calculate the next value:
   `yₙ₊₁ = yₙ + (k₁ + 2k₂ + 2k₃ + k₄)/6`

6. Calculate:
   `xₙ₊₁ = xₙ + h`

7. Repeat until the required value of `x` is reached.

8. Display the approximate value of `y`.

9. Stop.

---

## Summary

| Experiment | Numerical Method                          |
| :--------: | ----------------------------------------- |
|      1     | Bisection Method                          |
|      2     | False Position (Regula-Falsi) Method      |
|      3     | Newton-Raphson Method                     |
|      4     | Secant Method                             |
|      5     | Gauss Elimination Method                  |
|      6     | Gauss-Jordan Method                       |
|      7     | LU Decomposition Method                   |
|      8     | Jacobi Iterative Method                   |
|      9     | Gauss-Seidel Method                       |
|     10     | Lagrange Interpolation                    |
|     11     | Newton's Divided Difference Interpolation |
|     12     | Trapezoidal Rule                          |
|     13     | Simpson's 1/3 Rule                        |
|     14     | Simpson's 3/8 Rule                        |
|     15     | Euler's Method                            |
|     16     | Modified Euler's Method                   |
|     17     | Runge-Kutta Method                        |
