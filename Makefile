CC=clang++

CFLAGS += -std=c++11

PROD = todo

HDRS = $(shell ls *.h)
SRCS = $(shell ls *.cpp)
OBJS = $(patsubst %.cpp, %.o, $(SRCS))
LIBS = -lboost_system -lboost_filesystem

all: $(PROD)

$(OBJS): %.o: %.cpp
	$(CC) -c $(CFLAGS) $(CPPFLAGS) $(INCLUDES) $< -o $@

$(PROD): $(OBJS)
	$(CC) -o $(PROD) $^ $(LIBS)

clean:
	rm -f $(PROD)
	rm -f *.o
