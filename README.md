# Comparative Analysis of both C and ASM kernels in Debug and Release Mode
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

Outputs in Debug Mode

![Screenshot 2024-03-30 194920](https://github.com/plvzfq-rit/LBYARCH_Project_2/assets/107260683/e29b57e7-4a51-48fe-8736-8ac072684433)

Outputs in Release Mode

As seen in the screenshots above, both kernels output the same values in both debug and release modes which shows the correctness of the code.
