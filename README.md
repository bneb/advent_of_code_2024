## Advent Of Code 2024
###### My repo for solving advent of code in 2024 (https://adventofcode.com/2024)

---

### *`BUILD`ing*

I'm using bazel. http://bazel.build


Example:

```shell
bazel build //day01:main
```

---

### *Running*

Example:

```shell
bazel-bin/day02/main < day01/data/test_input.txt

\ Day01                                                                                                                                                     
 \  Part01 --- Total points: 15                                                                                                                             
  \ Part02 --- Total points: 12
```

---

### *Tests*

Example:

```shell
$ bazel test --test_output=all //day01:all

INFO: Analyzed 5 targets (0 packages loaded, 7 targets configured).
INFO: Found 3 targets and 2 test targets...
INFO: Elapsed time: 1.467s, Critical Path: 1.27s
INFO: 4 processes: 2 internal, 2 darwin-sandbox.
INFO: Build completed successfully, 4 total actions
PASSED: //day01:part01_test (see /private/var/tmp/_bazel_Kevin/7b87ab55e4b8c5b181e4a3e42fb2451b/execroot/_main/bazel-out/darwin_x86_64-fastbuild/testlogs/day01/part01_test/test.log)
INFO: From Testing //day01:part01_test
==================== Test output for //day01:part01_test:
Running main() from gmock_main.cc
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from Part01Test
[ RUN      ] Part01Test.ElementsInDifferentOrderHaveNoDistance
[       OK ] Part01Test.ElementsInDifferentOrderHaveNoDistance (0 ms)
[----------] 1 test from Part01Test (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED  ] 1 test.
================================================================================
PASSED: //day01:part02_test (see /private/var/tmp/_bazel_Kevin/7b87ab55e4b8c5b181e4a3e42fb2451b/execroot/_main/bazel-out/darwin_x86_64-fastbuild/testlogs/day01/part02_test/test.log)
INFO: From Testing //day01:part02_test
==================== Test output for //day01:part02_test:
Running main() from gmock_main.cc
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from Part02Test
[ RUN      ] Part02Test.ElementsInDifferentOrderHaveNoDistance
[       OK ] Part02Test.ElementsInDifferentOrderHaveNoDistance (0 ms)
[----------] 1 test from Part02Test (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED  ] 1 test.
================================================================================
//day01:part01_test                                             (cached) PASSED in 0.5s
//day01:part02_test                                             (cached) PASSED in 0.5s
```
