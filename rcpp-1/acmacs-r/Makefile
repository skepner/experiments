# -*- Makefile -*-

PKG_NAME = acmacs.r

ifneq ($(R),)
  ROOT_DIR = $(R)/R
else ifeq ($(ROOT_DIR),)
  $(error Please provide ROOT_DIR, e.g. make ROOT_DIR=/my/local/r/installation)
endif

PKG_DIR = $(ROOT_DIR)/pkg
LIB_DIR = $(ROOT_DIR)/library
OUT_DIR = $(ROOT_DIR)/$(PKG_NAME)

ifneq ($(T),"")
  export TMPDIR = $(T)
endif

all: bin

install: build | $(LIB_DIR)
	R CMD INSTALL --clean --debug -l $(LIB_DIR) $(PKG_DIR)/$(PKG_NAME)_*.tar.gz

bin: build | $(LIB_DIR)
	cd $(ROOT_DIR); R CMD INSTALL --build --clean --debug -l $(LIB_DIR) $(PKG_DIR)/$(PKG_NAME)_*.tar.gz

build: compile-attributes | $(PKG_DIR)
	D=$$(pwd) && cd $(PKG_DIR) && R CMD build "$$D"

check: build | $(OUT_DIR) $(LIB_DIR)
	R CMD check -o $(OUT_DIR) -l $(LIB_DIR) --no-examples --no-manual $(PKG_DIR)/$(PKG_NAME)_*.tar.gz

compile-attributes:
	Rscript -e "library(Rcpp); compileAttributes(verbose=TRUE);"

test:
	@#R_LIBS=/r/R/library R --vanilla -q -e 'library('$(PKG_NAME)'); ls("package:acmacs.r"); a = new(acmacs.Chart, "/Users/eu/AD/sources/acmacs-chart-2/test/test-2004-3.ace"); a$$number_of_antigens; gc();'
	R_LIBS=/r/R/library Rscript --vanilla --default-packages=methods,utils ~/Shared/experiments/rcpp-1/acmacs-r/tests/testthat.R

clean:
	rm -rf $(OUT_DIR) $(ROOT_DIR)/$(PKG_NAME)_*.tgz $(PKG_DIR)/$(PKG_NAME)_*.tar.gz $(LIB_DIR)/$(PKG_NAME)

$(OUT_DIR):
	mkdir -p $(OUT_DIR)

$(LIB_DIR):
	mkdir -p $(LIB_DIR)

$(PKG_DIR):
	mkdir -p $(PKG_DIR)
