# Runge-Kutta Method with modification for Solving ODEs

## Problem Statement

Given the first-order ordinary differential equation (ODE):

$$\frac{dy}{dx} = f(x, y)$$

with an initial condition:

$$y(x_0) = y_0,$$

we aim to approximate the solution over the interval $[x_0, x_n]$ using the modified Euler method.

### Approach

The Euler method is a simple numerical technique that provides an iterative solution to the ODE. The main idea is to use the slope at the beginning of an interval to estimate the function's value at the next point.

1. **Discretize the interval:** Divide the interval $[x_0, x_n]$ into $n$ equal subintervals of width $h$, where:
   $$h = \frac{x_n - x_0}{n}.$$

2. **Iteration Formula:** The iterative formula for the Euler method is given by:<br>
   $$k_1 = f(x_{i - 1}, y_{i - 1})$$<br>
   $$k_2 = f(x_{i - 1} + \frac{h}{2}, y_{i - 1} + \frac{h}{2}k_1)$$<br> 
   $$k_3 = f(x_{i - 1} + \frac{h}{2}, y_{i - 1} + \frac{h}{2}k_2)$$<br>
   $$k_4 = f(x_{i - 1} + h, y_{i - 1} + hk_3)$$<br>
   $$\Delta y = \frac{h}{6}(k_1 + 2k_2 + 2k_3 + k4)$$<br>
   $$y_i = y_{i - 1} + \Delta y$$
   where $y_i$ is the approximation of $y(x_i)$, and $x_i = x_0 + ih$.

3. **Initialization:** Start with the initial condition:
   $$y_0 = y(x_0).$$

### Example

Consider the ODE:
$$\frac{dy}{dx} = y - x^2,$$
with the initial condition $y(0) = 3$. We can apply the Runge-Kutta method to approximate $y$ over the interval $[0, 1]$.

### Conclusion

The Runge-Kutta method provides a straightforward way to numerically solve ODEs, though its accuracy depends on the step size $h$ and the nature of the function $f(x, y)$.

## Graphs

### Runge-Kutta Method Graph

The graph below shows the approximate solution obtained using the Euler method.

![Runge-Kutta Method Graph](./assets/pictures/RungeKuttaGraph.png)

### Wolfram Graph

The graph below represents the exact solution provided by Wolfram Alpha.

![Wolfram Graph](./assets/pictures/WolframGraph.png)

### Euler Method Graph

The graph below shows the approximate solution obtained using the Euler method.

![Modified Euler Method Graph](./assets/pictures/EulerGraph.png)

## Error Analysis: Runge-Kutta Method vs. Wolfram Results

In this section, we analyze the accuracy of the Runge-Kutta method by comparing its results with those obtained from Wolfram Alpha. We calculate both the absolute and relative errors to quantify the discrepancies between the two methods.

### Results

- **Absolute Error:** \(4.69524e-06\)

  The absolute error represents the difference between the actual value obtained from Wolfram and the approximate value calculated using the Runge-Kutta method. It provides a straightforward measure of the deviation in the results.

- **Relative Error:** \(1.10095e-06\)

  The relative error is defined as the absolute error divided by the true value (Wolfram result). This metric gives us a sense of the error relative to the magnitude of the true value, making it easier to assess the performance of the Runge-Kutta method in different contexts.

## Error Analysis: Modified Euler Method vs. Wolfram Results

In this section, we analyze the accuracy of the Runge-Kutta method by comparing its results with those obtained from Wolfram Alpha. We calculate both the absolute and relative errors to quantify the discrepancies between the two methods.

### Results

- **Absolute Error:** \(0.000516906\)

  The absolute error represents the difference between the actual value obtained from Wolfram and the approximate value calculated using the Runge-Kutta method. It provides a straightforward measure of the deviation in the results.

- **Relative Error:** \(6.69717e-05\)

  The relative error is defined as the absolute error divided by the true value (Wolfram result). This metric gives us a sense of the error relative to the magnitude of the true value, making it easier to assess the performance of the Runge-Kutta method in different contexts.

## Conclusion

Runge-Kutta method gives much more accurate results compared to modified Euler method.
