CC=clang++

CFLAGS += -std=c++11

PROD = ToDoLogger

HDRS = $(shell ls *.h)
SRCS = $(shell ls *.cpp)
OBJS = $(patsubst %.cpp, %.o, $(SRCS))

all: $(PROD)

$(OBJS): %.o: %.cpp
	$(CC) -c $(CFLAGS) $(CPPFLAGS) $(INCLUDES) $< -o $@

$(PROD): $(OBJS)
	$(CC) -o $(PROD) $^

clean:
	rm -f $(PROD)
	rm -f *.o
