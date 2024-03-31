# Comparative Analysis of both C and ASM kernels in Debug and Release Mode

## Approximate Mean/Average Running Times (in seconds)
| Vector Sizes | C (Debug Mode) | ASM (Debug Mode) | C (Release Mode) | ASM (Release Mode) |
|--------------|----------------|---------------------|------------------|-----------------------|
| 2^20         |          7.812 |               3.537 |            3.069 |                 3.147 |
| 2^24         |          0.082 |               0.026 |            0.057 |                  0.04 |
| 2^30         |          0.005 |               0.002 |            0.002 |                 0.002 |

## Standard Deviation of Running Times (in seconds)
| Vector Sizes | C (Debug Mode) | ASM (Debug Mode) | C (Release Mode) | ASM (Release Mode) |
|--------------|----------------|---------------------|------------------|-----------------------|
| 2^20         |          1.593 |               0.471 |            0.301 |                 0.205 |
| 2^24         |          0.004 |               0.001 |            0.031 |                  0.01 |
| 2^30         |          0.001 |               0.001 |            0.001 |                 0.001 |

## Analysis of the Running Times

From the results, it can be seen that the mean or average running times of the ASM kernel in debug mode is more efficient than its C counterpart. As the vector size increases, the running time of the C kernel increases more compared to the ASM kernel. However, the average running times of C kernel significantly decrease when the program is run in release mode. Yet, the running times of ASM kernel does not change as much from debug mode to release mode. This shows that the optimization in Visual Studio works better for C than for ASM. Without optimization, in debug mode, ASM runs better, but with optimization, both run at similar times. Overall though, ASM is better performing with lower standard deviations in its running times compared to C as well.

## Correctness Checks

**Outputs in Debug Mode**

![Screenshot 2024-03-31 094525](https://github.com/plvzfq-rit/LBYARCH_Project_2/assets/107260683/41654ca0-0432-446c-b9f5-61e9784c6f38)
C and ASM Kernel Outputs at Vector size 2^20 ran in Debug Mode

![Screenshot 2024-03-31 094603](https://github.com/plvzfq-rit/LBYARCH_Project_2/assets/107260683/64ecc1d0-f3de-467f-94c2-ba1b70699f54)
C and ASM Kernel Outputs at Vector size 2^24 ran in Debug Mode

![Screenshot 2024-03-31 094636](https://github.com/plvzfq-rit/LBYARCH_Project_2/assets/107260683/7a833bfc-5727-49d8-a0a4-36ea323d4c93)
C and ASM Kernel Outputs at Vector size 2^30 ran in Debug Mode

**Outputs in Release Mode**

![Screenshot 2024-03-31 094657](https://github.com/plvzfq-rit/LBYARCH_Project_2/assets/107260683/dbc83bba-202c-4090-91b2-92495ab56d0b)
C and ASM Kernel Outputs at Vector size 2^20 ran in Release Mode

![Screenshot 2024-03-31 094712](https://github.com/plvzfq-rit/LBYARCH_Project_2/assets/107260683/4115a17b-2af9-4e3e-ab90-db2c88a5d766)
C and ASM Kernel Outputs at Vector size 2^24 ran in Release Mode

![Screenshot 2024-03-31 094736](https://github.com/plvzfq-rit/LBYARCH_Project_2/assets/107260683/eb8e492b-e7bd-4a21-957e-b5330ffde24d)
C and ASM Kernel Outputs at Vector size 2^30 ran in Release Mode


# Appendix

## Running Times for X_length = 2^30 (in seconds)
| Run No.        | C Debug | ASM Debug | Run No.        | C Release Mode | ASM Release Mode |
|----------------|---------|-----------|----------------|----------------|------------------|
|            #01 |  13.931 |     3.165 |            #01 |          4.447 |            3.149 |
|            #02 |  12.153 |     3.187 |            #02 |          3.759 |            3.108 |
|            #03 |   7.362 |     3.630 |            #03 |          2.985 |            2.977 |
|            #04 |   7.801 |     3.259 |            #04 |          2.963 |            3.092 |
|            #05 |   6.754 |     3.234 |            #05 |          3.008 |            2.979 |
|            #06 |   6.537 |     3.431 |            #06 |          2.867 |            3.179 |
|            #07 |   6.573 |     4.330 |            #07 |          2.998 |            3.018 |
|            #08 |   6.949 |     4.332 |            #08 |          2.955 |            3.532 |
|            #09 |   6.453 |     3.147 |            #09 |          2.963 |            3.286 |
|            #10 |   6.855 |     3.315 |            #10 |          2.968 |            3.179 |
|            #11 |   6.659 |     4.188 |            #11 |          2.945 |            3.343 |
|            #12 |   8.685 |     4.461 |            #12 |          3.119 |            3.209 |
|            #13 |   8.725 |     4.286 |            #13 |          3.091 |            3.337 |
|            #14 |   7.689 |     3.890 |            #14 |          3.068 |            3.036 |
|            #15 |   7.078 |     3.239 |            #15 |          3.047 |            3.953 |
|            #16 |   7.510 |     3.432 |            #16 |          3.001 |            3.345 |
|            #17 |   8.585 |     3.121 |            #17 |          3.159 |            3.113 |
|            #18 |   7.859 |     3.262 |            #18 |          2.972 |            3.100 |
|            #19 |   8.349 |     3.380 |            #19 |          2.992 |            3.034 |
|            #20 |   8.002 |     3.789 |            #20 |          2.962 |            3.066 |
|            #21 |   7.068 |     3.921 |            #21 |          3.049 |            3.134 |
|            #22 |   7.223 |     3.661 |            #22 |          3.011 |            3.043 |
|            #23 |   7.468 |     3.423 |            #23 |          2.967 |            3.134 |
|            #24 |   7.890 |     3.136 |            #24 |          2.993 |            3.145 |
|            #25 |   8.027 |     3.031 |            #25 |          2.979 |            3.007 |
|            #26 |   7.789 |     3.075 |            #26 |          2.944 |            2.986 |
|            #27 |   6.148 |     4.423 |            #27 |          2.957 |            2.988 |
|            #28 |   8.013 |     3.051 |            #28 |          2.936 |            3.006 |
|            #29 |   7.100 |     3.111 |            #29 |          3.038 |            2.999 |
|            #30 |   7.137 |     3.194 |            #30 |          2.914 |            2.947 |
| Mean           |   7.812 |     3.537 | Mean           |          3.069 |            3.147 |
| Std. Deviation |   1.593 |     0.471 | Std. Deviation |          0.301 |            0.205 |

## Running Times for X_length = 2^24 (in seconds)
| Run No.        | C Debug Time (s) | ASM Debug Time (s) | Run No.        | C Release Time(s) | ASM Release Time (s) |
|----------------|------------------|--------------------|----------------|-------------------|----------------------|
|            #01 |            0.084 |              0.025 |            #01 |             0.032 |                0.029 |
|            #02 |            0.084 |              0.025 |            #02 |             0.062 |                0.049 |
|            #03 |            0.082 |              0.025 |            #03 |             0.039 |                0.031 |
|            #04 |            0.082 |              0.025 |            #04 |             0.046 |                0.030 |
|            #05 |            0.082 |              0.025 |            #05 |             0.056 |                0.031 |
|            #06 |            0.080 |              0.026 |            #06 |             0.064 |                0.029 |
|            #07 |            0.080 |              0.026 |            #07 |             0.031 |                0.029 |
|            #08 |            0.073 |              0.024 |            #08 |             0.038 |                0.030 |
|            #09 |            0.073 |              0.025 |            #09 |             0.036 |                0.029 |
|            #10 |            0.083 |              0.025 |            #10 |             0.039 |                0.032 |
|            #11 |            0.082 |              0.027 |            #11 |             0.041 |                0.047 |
|            #12 |            0.080 |              0.026 |            #12 |             0.049 |                0.042 |
|            #13 |            0.083 |              0.027 |            #13 |             0.047 |                0.048 |
|            #14 |            0.075 |              0.026 |            #14 |             0.203 |                0.061 |
|            #15 |            0.081 |              0.026 |            #15 |             0.031 |                0.029 |
|            #16 |            0.084 |              0.026 |            #16 |             0.036 |                0.030 |
|            #17 |            0.082 |              0.027 |            #17 |             0.049 |                0.027 |
|            #18 |            0.084 |              0.026 |            #18 |             0.046 |                0.044 |
|            #19 |            0.085 |              0.026 |            #19 |             0.060 |                0.041 |
|            #20 |            0.082 |              0.027 |            #20 |             0.045 |                0.038 |
|            #21 |            0.085 |              0.027 |            #21 |             0.052 |                0.048 |
|            #22 |            0.083 |              0.025 |            #22 |             0.066 |                0.047 |
|            #23 |            0.084 |              0.027 |            #23 |             0.067 |                0.046 |
|            #24 |            0.091 |              0.027 |            #24 |             0.062 |                0.044 |
|            #25 |            0.086 |              0.027 |            #25 |             0.057 |                0.042 |
|            #26 |            0.085 |              0.026 |            #26 |             0.054 |                0.039 |
|            #27 |            0.090 |              0.030 |            #27 |             0.078 |                0.050 |
|            #28 |            0.081 |              0.026 |            #28 |             0.078 |                0.052 |
|            #29 |            0.085 |              0.026 |            #29 |             0.070 |                0.063 |
|            #30 |            0.083 |              0.028 |            #30 |             0.088 |                0.056 |
| Mean           |            0.082 |              0.026 | Mean           |             0.057 |                0.040 |
| Std. Deviation |            0.004 |              0.001 | Std. Deviation |             0.031 |                0.010 |

## Running Times for X_length = 2^20 (in seconds)
| Run No.        | C Debug Time (s) | ASM Debug Time (s) | Run No.        | C Release Time(s) | ASM Release Time (s) |
|----------------|------------------|--------------------|----------------|-------------------|----------------------|
|            #01 |            0.005 |              0.001 |            #01 |             0.002 |                0.001 |
|            #02 |            0.006 |              0.001 |            #02 |             0.002 |                0.002 |
|            #03 |            0.005 |              0.001 |            #03 |             0.002 |                0.002 |
|            #04 |            0.006 |              0.001 |            #04 |             0.002 |                0.002 |
|            #05 |            0.006 |              0.002 |            #05 |             0.002 |                0.002 |
|            #06 |            0.005 |              0.002 |            #06 |             0.002 |                0.002 |
|            #07 |            0.006 |              0.001 |            #07 |             0.001 |                0.001 |
|            #08 |            0.004 |              0.002 |            #08 |             0.001 |                0.002 |
|            #09 |            0.006 |              0.001 |            #09 |             0.001 |                0.001 |
|            #10 |            0.005 |              0.001 |            #10 |             0.002 |                0.001 |
|            #11 |            0.005 |              0.002 |            #11 |             0.002 |                0.002 |
|            #12 |            0.005 |              0.002 |            #12 |             0.001 |                0.002 |
|            #13 |            0.005 |              0.002 |            #13 |             0.002 |                0.002 |
|            #14 |            0.005 |              0.002 |            #14 |             0.001 |                0.002 |
|            #15 |            0.005 |              0.002 |            #15 |             0.002 |                0.001 |
|            #16 |            0.006 |              0.002 |            #16 |             0.001 |                0.002 |
|            #17 |            0.005 |              0.001 |            #17 |             0.002 |                0.001 |
|            #18 |            0.004 |              0.001 |            #18 |             0.002 |                0.001 |
|            #19 |            0.004 |              0.002 |            #19 |             0.002 |                0.002 |
|            #20 |            0.005 |              0.002 |            #20 |             0.001 |                0.001 |
|            #21 |            0.005 |              0.001 |            #21 |             0.002 |                0.002 |
|            #22 |            0.005 |              0.001 |            #22 |             0.002 |                0.002 |
|            #23 |            0.005 |              0.002 |            #23 |             0.001 |                0.001 |
|            #24 |            0.005 |              0.001 |            #24 |             0.001 |                0.002 |
|            #25 |            0.005 |              0.001 |            #25 |             0.001 |                0.001 |
|            #26 |            0.005 |              0.002 |            #26 |             0.001 |                0.002 |
|            #27 |            0.006 |              0.002 |            #27 |             0.001 |                0.001 |
|            #28 |            0.006 |              0.002 |            #28 |             0.001 |                0.001 |
|            #29 |            0.005 |              0.002 |            #29 |             0.002 |                0.001 |
|            #30 |            0.005 |              0.002 |            #30 |             0.002 |                0.002 |
| Mean           |            0.005 |              0.002 | Mean           |             0.002 |                0.002 |
| Std. Deviation |            0.001 |              0.001 | Std. Deviation |             0.001 |                0.001 |
