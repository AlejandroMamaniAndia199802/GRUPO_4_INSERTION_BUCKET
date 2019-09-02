# Insertion and bucket sort implementation in C++

## Overview

Sorting algorithms are widely studied in computer science courses, since its simplicity allow the student to understand the importance of algorithms. Furthermore, most computer tasks imply sorting a list of elements with a given sorting criteria. For this and more other reasons, they are an interesting object of study.

This repository was created as part of the course "Algorithms and Data Structures" taught in Universidad de Ingenería y Tecnología (aka UTEC). The objective of the homework assignment was/is to gain a depeer understanding on a given topic related to sorting algorithms. We (contributors) were given **insertion sort** and **bucĸet sort**.

## Implementation

### Insertion sort


![Insertion sort pseudocode](https://raw.githubusercontent.com/AlejandroMamaniAndia199802/GRUPO_4_INSERTION_BUCKET/master/rsrc/img/insertion_pseudo.png)

![Insertion sort implementation](https://raw.githubusercontent.com/AlejandroMamaniAndia199802/GRUPO_4_INSERTION_BUCKET/master/rsrc/img/insertion_code.png)


### Bucket sort

![Bucket sort pseudocode](https://raw.githubusercontent.com/AlejandroMamaniAndia199802/GRUPO_4_INSERTION_BUCKET/master/rsrc/img/bucket_pseudo.png)

![Bucket sort implementation](https://raw.githubusercontent.com/AlejandroMamaniAndia199802/GRUPO_4_INSERTION_BUCKET/master/rsrc/img/bucket_code.png)

## Accepted test
To implement the test we used the library "catch.hpp".
It allows to check the sort of any quantity of numbers,
through sentences like ("TEST CASE" and "REQUIRE").

## Running time of the implementation

![Benchmark](https://github.com/AlejandroMamaniAndia199802/GRUPO_4_INSERTION_BUCKET/blob/master/rsrc/img/3000.png)
![Benchmark](https://github.com/AlejandroMamaniAndia199802/GRUPO_4_INSERTION_BUCKET/blob/master/rsrc/img/0_to_8000.png)
![Benchmark](https://github.com/AlejandroMamaniAndia199802/GRUPO_4_INSERTION_BUCKET/blob/master/rsrc/img/0_to_49000.png)

## Computer specifications

```sh
$ sudo lshw -short
H/W path         Device      Class          Description
=======================================================
                             system         SVS15125PLB (54510124)
/0                           bus            VAIO
/0/0                         memory         128KiB BIOS
/0/4                         processor      Intel(R) Core(TM) i7-3520M CPU @ 2.90GHz
/0/4/5                       memory         128KiB L1 cache
/0/4/6                       memory         512KiB L2 cache
/0/4/7                       memory         4MiB L3 cache
/0/a                         memory         8GiB System Memory
/0/a/0                       memory         4GiB SODIMM DDR3
/0/a/1                       memory         4GiB SODIMM DDR3
/0/100                       bridge         3rd Gen Core processor DRAM Controller
/0/100/1                     bridge         Xeon E3-1200 v2/3rd Gen Core processor PCI Express Root Port
/0/100/1/0                   display        GK107M [GeForce GT 640M LE]
```

## Algorithm complexity

* Bucket Sort
	* Time Complexity:
		* Worse Case: O(n^2) all number put to same index of bucket with reverse order
		* Best Case: O(n + k) k is the range of input number
	* Space Complexity: O(n)
* Insertion Sort
	* Time Complexity: 
		* Boundary Cases:
		* Worse Case: maximum time to sort if elements are sorted in reverse order.
		* Best Case:  O(n) when elements are already sorted.
	* Space Complexity: O(n^2)

## References

1. a
2. a
