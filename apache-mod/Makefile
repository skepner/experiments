all: mod_ace

ifneq (,$(wildcard /usr/local/opt/llvm/bin/clang++))
  CXX=/usr/local/opt/llvm/bin/clang++
  CXX_STD=-std=c++17
else ifneq (,$(wildcard /usr/bin/g++-7))
  CXX=/usr/bin/g++-7
  CXX_STD=-std=c++17
endif

AD_INCLUDE = -I$(HOME)/AD/include
LD_LIBS = -L$(HOME)/AD/lib -lacmacsbase.1
# APR_CFLAGS = $(shell pkg-config --cflags apr-1)
# APR_LIBS = $(shell pkg-config --libs apr-1)

APXS_CXX = -S CC=$(CXX) -Wc,$(CXX_STD) -Wl,-shared

mod_ace: mod_ace.la
	ldd .libs/mod_ace.so

mod_ace.la: mod_ace.c
	apxs $(APXS_CXX) $(AD_INCLUDE) -n ace_module $(LD_LIBS) -c $^

clean:
	rm -rf out .libs *.o *.lo *.slo *.la

# mod_ace: out/mod_ace.o
#	apxs -n ace_module -Wl,-shared $(LD_LIBS) $(APR_LIBS) -c out/mod_ace.o

# out/%.o: %.cc
#	mkdir -p out
#	$(CXX) $(CXX_STD) $(AD_INCLUDE) $(APR_CFLAGS) -fPIC -DPIC -c $^ -o $@
