# Comparative Analysis of both C and ASM kernels in Debug and Release Mode

## Running Times for X_length = 2^30 (in seconds)

| Run #          | C Debug Time (s) | ASM Debug Time (s) | C Release Time(s) | ASM Release Time (s) |
|----------------|------------------|--------------------|-------------------|----------------------|
|              0 |           13.931 |              3.165 |             4.447 |                3.149 |
|              1 |           12.153 |              3.187 |             3.759 |                3.108 |
|              2 |            7.362 |              3.630 |             2.985 |                2.977 |
|              3 |            7.801 |              3.259 |             2.963 |                3.092 |
|              4 |            6.754 |              3.234 |             3.008 |                2.979 |
|              5 |            6.537 |              3.431 |             2.867 |                3.179 |
|              6 |            6.573 |              4.330 |             2.998 |                3.018 |
|              7 |            6.949 |              4.332 |             2.955 |                3.532 |
|              8 |            6.453 |              3.147 |             2.963 |                3.286 |
|              9 |            6.855 |              3.315 |             2.968 |                3.179 |
|             10 |            6.659 |              4.188 |             2.945 |                3.343 |
|             11 |            8.685 |              4.461 |             3.119 |                3.209 |
|             12 |            8.725 |              4.286 |             3.091 |                3.337 |
|             13 |            7.689 |              3.890 |             3.068 |                3.036 |
|             14 |            7.078 |              3.239 |             3.047 |                3.953 |
|             15 |            7.510 |              3.432 |             3.001 |                3.345 |
|             16 |            8.585 |              3.121 |             3.159 |                3.113 |
|             17 |            7.859 |              3.262 |             2.972 |                3.100 |
|             18 |            8.349 |              3.380 |             2.992 |                3.034 |
|             19 |            8.002 |              3.789 |             2.962 |                3.066 |
|             20 |            7.068 |              3.921 |             3.049 |                3.134 |
|             21 |            7.223 |              3.661 |             3.011 |                3.043 |
|             22 |            7.468 |              3.423 |             2.967 |                3.134 |
|             23 |            7.890 |              3.136 |             2.993 |                3.145 |
|             24 |            8.027 |              3.031 |             2.979 |                3.007 |
|             25 |            7.789 |              3.075 |             2.944 |                2.986 |
|             26 |            6.148 |              4.423 |             2.957 |                2.988 |
|             27 |            8.013 |              3.051 |             2.936 |                3.006 |
|             28 |            7.100 |              3.111 |             3.038 |                2.999 |
|             29 |            7.137 |              3.194 |             2.914 |                2.947 |
| Mean           |            7.812 |              3.537 |             3.069 |                3.147 |
| Std. Deviation |            1.593 |              0.471 |             0.301 |                0.205 |


## Running Times (in seconds)

Run No. | C Debug | Asm Debug | | Run No. | C Release | Asm Release |
|-|-|-|-|-|-|-|
#01 | 5.363 | 1.543 | | #01 | 2.357 | 1.468 |
#02 | 5.391 | 1.504 | | #02 | 2.269 | 1.989 |
#03 | 5.365 | 1.506 | | #03 | 2.187 | 2.055 |
#04 | 5.891 | 1.609 | | #04 | 2.121 | 1.981 |
#05 | 5.349 | 1.495 | | #05 | 2.140 | 2.100 |
#06 | 5.823 | 1.715 | | #06 | 2.146 | 1.997 |
#07 | 5.827 | 1.620 | | #07 | 2.053 | 1.997 |
#08 | 5.345 | 1.497 | | #08 | 2.419 | 2.032 |
#09 | 5.365 | 1.529 | | #09 | 2.300 | 2.117 |
#10 | 5.374 | 1.522 | | #10 | 2.182 | 2.497 |
#11 | 5.333 | 1.507 | | #11 | 2.127 | 2.040 |
#12 | 5.334 | 1.504 | | #12 | 2.086 | 1.996 |
#13 | 5.385 | 1.504 | | #13 | 2.899 | 2.894 |
#14 | 5.275 | 1.529 | | #14 | 2.059 | 2.042 |
#15 | 5.330 | 1.507 | | #15 | 2.135 | 2.060 |
#16 | 5.300 | 1.509 | | #16 | 2.222 | 2.041 |
#17 | 5.071 | 1.509 | | #17 | 2.261 | 2.012 |
#18 | 5.310 | 1.502 | | #18 | 2.083 | 2.037 |
#19 | 5.162 | 1.508 | | #19 | 2.151 | 2.022 |
#20 | 5.838 | 1.859 | | #20 | 2.107 | 2.004 |
#21 | 5.526 | 1.618 | | #21 | 2.021 | 2.008 |
#22 | 5.436 | 1.552 | | #22 | 2.280 | 2.051 |
#23 | 5.435 | 1.528 | | #23 | 2.077 | 2.002 |
#24 | 5.389 | 1.548 | | #24 | 2.030 | 2.011 |
#25 | 5.873 | 1.928 | | #25 | 2.080 | 1.992 |
#26 | 5.300 | 1.519 | | #26 | 1.884 | 2.004 |
#27 | 5.339 | 1.497 | | #27 | 2.489 | 2.092 |
#28 | 5.299 | 1.499 | | #28 | 2.957 | 1.887 |
#29 | 5.142 | 1.543 | | #29 | 2.072 | 1.979 |
#30 | 5.467 | 1.511 | | #30 | 1.979 | 2.049 |

## Approximate Average Running Times (in seconds)
Kernel | Debug Mode | Release Mode |
|-|-|-|
|C|5.421 s|2.206 s|
|ASM|1.561 s|2.071 s|


## Approximate Standard Deviation of Running Times (in seconds)

Kernel | Debug Mode | Release Mode |
|-|-|-|
|C|0.215 s|0.235 s|
|ASM|0.106 s|0.214 s|


## Analysis of the Running Times 

After running the program 30 times in both modes, it can be seen from the results that in debug mode, the C kernel runs more than thrice as long compared to the ASM kernel. 

However, in release mode, both C and ASM run in a closer length of time with similar standard deviations. 

Yet, per mode, on an average, the ASM kernel runs faster than its C counterparts. 

This may suggest that ASM is more efficient and better performing in doing the same tasks especially when the program is unoptimized, as seen in the debug mode runs. 

It is noted though that the ASM kernel has a longer average time in release mode than in debug mode but with a bigger standard deviation. This may be due to various reasons such as the code structure, runtime environment and unoptimal compiler optimization for asm code.

## Correctness Checks
![Screenshot 2024-03-30 194857](https://github.com/plvzfq-rit/LBYARCH_Project_2/assets/107260683/4f40adbf-02ca-4811-8920-57dd935b7dbe)

**Outputs in Debug Mode**

![Screenshot 2024-03-30 194920](https://github.com/plvzfq-rit/LBYARCH_Project_2/assets/107260683/e29b57e7-4a51-48fe-8736-8ac072684433)

**Outputs in Release Mode**

As seen in the screenshots above, both kernels output the same values in both debug and release modes which shows the correctness of the code.
