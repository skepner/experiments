\name{acmacs.Antigen}
\title{Class to access antigen related data.}
\alias{acmacs.Antigen-class}
\alias{acmacs.Antigen}
\docType{package}
\usage{
antigen <- chart$antigens[[antigen_number]]
antigen$name
antigen$passage
antigen$reassortant
}
\value{An object of class \code{"acmacs.Antigen"} to access and modify
  antigen data. It has the following properties:

  \item{name}{name of the antigen.}

  Properties below are not available for lispmds saves and always return
  default (empty or falsy values).

  \item{abbreviated_name}{name with the abbreviated location and
  two-digit year, available only for charts with parsed names.}

  \item{date}{isolation date of antigen in format YYYY-MM-DD.}

  \item{passage}{passage history.}

  \item{lineage}{Influenza B lineage, \code{"VICTORIA"} or \code{"YAMAGATA"}.}

  \item{reassortant}{reassortant information.}

  \item{reference}{boolean flag indicating if antigen was declared as
  reference one.}

  \item{lab_ids}{List of character objects in format LAB#LAB_ID.}

  \item{annotations}{List of character objects with additional data
  associated with the antigen. Special annotation \code{"DISTINCT"} is
  used to avoid duplicating antigens in the chart, DISTINCT antigens are
  never merged when tables are merged.}

}
\keyword{ package }
\author{Eugene Skepner, eu@antigenic-cartography.org.}
