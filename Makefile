CC := gcc
CFLAGS := -Wall -Wextra -g

SRC_DIR := src
BIN_DIR := bin
BUILD_DIR := build

# Ensure directories exist
$(BUILD_DIR):
	@mkdir -p $(BUILD_DIR)

$(BIN_DIR):
	@mkdir -p $(BIN_DIR)

# Get all source files
SRCS := $(wildcard $(SRC_DIR)/*.c)

# Generate object file names in build/
OBJS := $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRCS))

# Generate corresponding executable names in bin/
EXES := $(patsubst $(SRC_DIR)/%.c, $(BIN_DIR)/%, $(SRCS))

# Prevent Make from deleting object files.
.SECONDARY: $(OBJS) 

# Default target: Compile and link all
all: dir $(EXES)

# Compile each .c file into an object file
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Link each .o file to an executable
$(BIN_DIR)/%: $(BUILD_DIR)/%.o | $(BIN_DIR)
	$(CC) $(CFLAGS) $< -o $@

# Ensure build and bin directories exist
dir: $(BUILD_DIR) $(BIN_DIR)

.PHONY: dir clean all

# Clean build and bin directories
clean:
	@rm -rf $(BUILD_DIR) $(BIN_DIR)
