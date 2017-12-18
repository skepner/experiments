\name{acmacs.Chart}
\alias{acmacs.Chart-class}
\alias{acmacs.Chart}
\docType{package}
\title{Main class to access data stored in the chart file.}
\usage{
new(acmacs.Chart, filename)
}
%\method{$}chart$number_of_antigens
%chart$number_of_sera
%chart$number_of_points
%chart$number_of_projections
%}
\arguments{
  \item{filename}{A character object specifying a file pathname with
    chart data to load}
}
\value{An object of class \code{"acmacs.Chart"} to access and modify
  chart data. It has the following properties:

  \item{$name}{name of the chart.}

  \item{$number_of_antigens}{number of antigens in the chart.}
}
\keyword{ package }
\examples{
  chart <- new(acmacs.Chart, "/tmp/table.save")
}
\author{Eugene Skepner, eu@antigenic-cartography.org.}
