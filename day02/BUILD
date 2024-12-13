cc_library (
    name = "part01",
    hdrs = ["part01.h"],
    srcs = ["part01.cc"],
)

cc_library (
    name = "part02",
    hdrs = ["part02.h"],
    srcs = ["part02.cc"],
)

cc_binary (
    name = "main",
    srcs = ["main.cc"],
    deps = [
        ":part01",
        ":part02"
    ]
)

cc_test(
  name = "part01_test",
  size = "small",
  srcs = ["part01_test.cc"],
  deps = [
    "@googletest//:gtest",
    "@googletest//:gtest_main",
    ":part01"
    ],
)

cc_test(
  name = "part02_test",
  size = "small",
  srcs = ["part02_test.cc"],
  deps = [
    "@googletest//:gtest",
    "@googletest//:gtest_main",
    ":part02",
    ],
)
