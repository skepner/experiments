# -*- Makefile -*-

PKG_NAME = eu2

ROOT_DIR = /r/R
PKG_DIR = $(ROOT_DIR)/pkg
LIB_DIR = $(ROOT_DIR)/library
OUT_DIR = $(ROOT_DIR)/$(PKG_NAME)

all:
	@echo install
	@echo build
	@echo check
	@echo test
	@echo clean

install: build | $(LIB_DIR)
	cd $(ROOT_DIR); R CMD INSTALL -l $(LIB_DIR) $(PKG_DIR)/$(PKG_NAME)_*.tar.gz

build: compile-attributes | $(PKG_DIR)
	D=$$(pwd) && cd $(PKG_DIR) && R CMD build "$$D"

check: build | $(OUT_DIR) $(LIB_DIR)
	R CMD check -o $(OUT_DIR) -l $(LIB_DIR) --no-examples --no-manual $(PKG_DIR)/$(PKG_NAME)_*.tar.gz

compile-attributes:
	Rscript -e "library(Rcpp); compileAttributes(verbose=TRUE);"

test:
	R_LIBS=/r/R/library R --vanilla -q -e 'library('$(PKG_NAME)'); a = new(my.world); a$$p; a$$p = "aloha"; a$$greet(); a = 77; a; gc();'

clean:
	rm -rf $(OUT_DIR) $(PKG_DIR)/$(PKG_NAME)_*.tar.gz $(LIB_DIR)/$(PKG_NAME)

$(OUT_DIR):
	mkdir -p $(OUT_DIR)

$(LIB_DIR):
	mkdir -p $(LIB_DIR)

$(PKG_DIR):
	mkdir -p $(PKG_DIR)
