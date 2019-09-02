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

### Tests


### Computer specifications

## Algorithm complexity

## Conclusions

* Bucket Sort
Time Complexity:
    Worse Case: O(n^2) all number put to same index of bucket with reverse order
    Best Case: O(n + k) k is the range of input number
Space Complexity: O(n)
* Insertion Sort
Time Complexity: 
Boundary Cases:
    Worse Case: maximum time to sort if elements are sorted in reverse order.
    Best Case:  O(n) when elements are already sorted.
Space Complexity: O(n^2)

## References

1. a
2. a
