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
    cat("antigens:", length(ags), "\n ", paste(sapply(ags[1:5], function(a) { a$name }), collapse="\n  "), "\n")
    srs <- chart$sera
    cat("sera:", length(srs), "\n ", paste(sapply(srs[1:5], function(a) { a$name }), collapse="\n  "), "\n")
}

print("test ********************************")
?acmacs.Chart
# ??acmacs.Chart
show_chart_data(new(acmacs.Chart, "/Users/eu/AD/sources/acmacs-chart-2/test/test-2004-3.ace"))
show_chart_data(new(acmacs.Chart, "/Users/eu/ac/results/ssm/2017-1207-tc0/merges/melb-b-yam-hi.ace"))
# gc()