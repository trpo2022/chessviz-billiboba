APP_NAME = chess
LIB_NAME = libchess
TEST_NAME = chess-test

CC = gcc

CFLAGS = -Wall -Wextra -Werror
CPPFLAGS =  -I source -MP -MMD 
CPPFLAGST = -I thirdparty -MP -MMD

BIN_DIR = bin
OBJ_DIR = obj
SRC_DIR = source
TEST_DIR = test

APP_PATH = $(BIN_DIR)/$(APP_NAME)
TEST_PATH = $(BIN_DIR)/$(TEST_NAME)
LIB_PATH = $(OBJ_DIR)/$(SRC_DIR)/$(LIB_NAME)/$(LIB_NAME).a

SRC_EXT = c

APP_SOURCES = $(shell find $(SRC_DIR)/$(APP_NAME) -name '*.$(SRC_EXT)')
APP_OBJECTS = $(APP_SOURCES:$(SRC_DIR)/%.$(SRC_EXT)=$(OBJ_DIR)/$(SRC_DIR)/%.o)

LIB_SOURCES = $(shell find $(SRC_DIR)/$(LIB_NAME) -name '*.$(SRC_EXT)')
LIB_OBJECTS = $(LIB_SOURCES:$(SRC_DIR)/%.$(SRC_EXT)=$(OBJ_DIR)/$(SRC_DIR)/%.o)


TEST_SOURCES = $(shell find $(TEST_DIR) -name '*.$(SRC_EXT)')
TEST_OBJECTS = $(TEST_SOURCES:$(TEST_DIR)/%.$(SRC_EXT)=$(OBJ_DIR)/$(TEST_DIR)/%.o)

DEPS = $(APP_OBJECTS:.o=.d) $(LIB_OBJECTS:.o=.d)

.PHONY: all
all: $(APP_PATH)

-include $(DEPS)

$(APP_PATH): $(APP_OBJECTS) $(LIB_PATH)
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -o $@ 

$(LIB_PATH): $(LIB_OBJECTS)
	ar rcs $@ $^

$(OBJ_DIR)/%.o: %.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) $(CPPFLAGST) $< -o $@

.PHONY: clean
clean:
	$(RM) $(APP_PATH) $(LIB_PATH)
	find $(OBJ_DIR) -name '*.o' -exec $(RM) '{}' \;
	find $(OBJ_DIR) -name '*.d' -exec $(RM) '{}' \;

.PHONY: test
test: $(TEST_PATH)

-include $(DEPS)

$(TEST_PATH): ./obj/test/main.o ./obj/test/lib_test.o ./obj/source/libchess/libchess.a
	$(CC) $(CFLAGS) -o $@ $^

./obj/test/main.o: ./test/main.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) $(CPPFLAGST) $< -o $@

./obj/test/lib_test.o: ./test/tests.c 
	$(CC) -c $(CFLAGS) $(CPPFLAGS) $(CPPFLAGST) $< -o $@

test_run: $(TEST_PATH)
	./$(TEST_PATH)