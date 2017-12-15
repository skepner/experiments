# library(testthat)
library(acmacs.r)
# test_check("acmacs.r")

print("test ********************************")
c1 <- new(acmacs.Chart, "/Users/eu/AD/sources/acmacs-chart-2/test/test-2004-3.ace")
cat("number_of_antigens:", c1$number_of_antigens, "\n")
cat("number_of_sera:", c1$number_of_sera, "\n")
