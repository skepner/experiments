all: mod_example

ifneq (,$(wildcard /usr/local/opt/llvm/bin/clang++))
  CXX=/usr/local/opt/llvm/bin/clang++
  CXX_STD=-std=c++17
else ifneq (,$(wildcard /usr/bin/g++-7))
  CXX=/usr/bin/g++-7
  CXX_STD=-std=c++17
endif

LD_LIBS=
APR_CFLAGS = $(shell pkg-config --cflags apr-1)
APR_LIBS = $(shell pkg-config --libs apr-1)

# mod_example: mod_example.cc
#	@#apxs -S CC=$(CXX) -S CFLAGS="$(CXX_STD)" $(LD_LIBS) -n example_module -c $^
#	apxs -n example_module -c $^

mod_example: mod_example.o
	apxs -i -n example_module $(APR_LIBS) -c mod_example.o

%.o: %.cc
	$(CXX) $(CXX_STD) $(APR_CFLAGS) -fPIC -DPIC -c $^
