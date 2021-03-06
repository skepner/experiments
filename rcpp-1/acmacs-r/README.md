acmacs.r package
================

This package provides R with ability to read, modify, save the data stored in acmacs and
lispmds files.

Supported platforms
===================

 - macOS 10.12 and 10.13

 - Linux

Dependencies
=============
```R
install.packages("Rcpp")
```

Installation
============

Package is supposed to be installed from a binary archive for the
specific platform. Building package from sources is complicated and it
cannot be done within R.

Package is in an alpha stage, it's worth perhaps installing it into a
temporary directory, that directory (/tmp/R/library in the example
below) must exist before you submit install.packages command.

macOS 10.12 and 10.13
---------------------

```R
install.packages("https://github.com/skepner/experiments/releases/download/acmacs.r-0.1/acmacs.r_0.1.tgz", lib="/tmp/R/library")
```

Linux
-----

Not yet supported.

Usage example
=============

```R
library(acmacs.r)
chart <- new(acmacs.Chart, "/tmp/file.ace")
cat(chart$info)

ags <- chart$antigens
format_antigen <- function(a) {
  paste(c(a$name, a$passage, a$reassortant, a$reference, a$annotations, paste("[", a$date, "]", sep="", collapse=""), a$lab_ids), collapse=" ", sep="")
}
cat("antigens:", length(ags), "\n ", paste(sapply(ags, format_antigen), collapse="\n  "), "\n")
```
