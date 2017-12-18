# library(testthat)
library(acmacs.r)
# test_check("acmacs.r")

show_chart_data <- function(chart) {
    cat(chart$name, "\n")
    cat("  number_of_antigens:", chart$number_of_antigens, "\n")
    cat("  number_of_sera:", chart$number_of_sera, "\n")
    cat("  number_of_points:", chart$number_of_points, "\n")
    cat("  number_of_projections:", chart$number_of_projections, "\n")
    if (nchar(chart$lineage) != 0) {
        cat("  lineage:", chart$lineage, "\n")
    }
    cat("info:", chart$info, "\n\n")

    ags <- chart$antigens
    format_antigen <- function(a) { paste(c(a$name, a$passage, a$reassortant, a$reference, a$annotations, paste("[", a$date, "]", sep="", collapse=""), a$lab_ids), collapse=" ", sep="") }
    cat("antigens:", length(ags), "\n ", paste(sapply(ags[1:min(50, length(ags))], format_antigen), collapse="\n  "), "\n")
    srs <- chart$sera
    format_serum <- function(a) { paste(c(a$name, a$annotations), collapse=" ", sep="") }
    cat("sera:", length(srs), "\n ", paste(sapply(srs[1:min(80, length(srs))], format_serum), collapse="\n  "), "\n")
}

print("test ********************************")
?acmacs.Chart
# ??acmacs.Chart
show_chart_data(new(acmacs.Chart, "/Users/eu/AD/sources/acmacs-chart-2/test/test-2004-3.ace"))
show_chart_data(new(acmacs.Chart, "/Users/eu/ac/results/ssm/2017-1207-tc0/merges/cdc-b-yam-hi.ace"))
# gc()