\name{acmacs.Chart}
\title{Main class to access data stored in the chart file.}
\alias{acmacs.Chart-class}
\alias{acmacs.Chart}
\docType{package}
\usage{
\code{new(acmacs.Chart, filename)}
}
\arguments{
  \item{filename}{A character object specifying a file pathname with
    chart data to load}
}
\value{An object of class \code{"acmacs.Chart"} to access and modify
  chart data. It has the following properties:

  \item{name}{name of the chart.}

  \item{info}{brief multiline description of the chart.}

  \item{number_of_antigens}{number of antigens in the chart.}

  \item{number_of_sera}{number of sera in the chart.}

  \item{number_of_points}{number of points in the chart, the sum of the
  number of antigens and the number of sera.}

  \item{number_of_projections}{number of projections (relaxed maps) in the chart.}

  \item{lineage}{for influenza B chart only, \code{"VICTORIA"} or \code{"YAMAGATA"}.}

  \item{antigens}{List of \code{\link{acmacs.Antigen}} objects}

  \item{sera}{List of \code{\link{acmacs.Serum}} objects.}
}
\keyword{ package }
\examples{
  # load chart from file
  chart <- new(acmacs.Chart, "/tmp/table.save")
  # print information about antigens
  ags <- chart$antigens
  format_antigen <- function(a) \{ paste(c(a$name, a$passage, a$reassortant, a$reference, a$annotations, paste("[", a$date, "]", sep="", collapse=""), a$lab_ids), collapse=" ", sep="") \}
  cat("antigens:", length(ags), "\n ", paste(sapply(ags, format_antigen), collapse="\n  "), "\n")
}
\seealso{
 \code{\link{acmacs.Antigen}} \code{\link{acmacs.Serum}}
}
\author{Eugene Skepner, eu@antigenic-cartography.org.}
