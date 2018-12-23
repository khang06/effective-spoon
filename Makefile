SRC_DIR := source
OBJ_DIR := build
SRC_FILES := $(wildcard $(SRC_DIR)/*.cpp)
.DEFAULT_GOAL := bin

OBJ_FILES := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))
LIBS := -lmbedcrypto -lz
LDFLAGS := -g
CXXFLAGS := -g -Wall -O2 -std=c++11 -MMD
-include $(OBJ_FILES:.o=.d)

.PHONY: bin $(OBJ_DIR)/%.o clean

bin: $(OBJ_FILES)
	$(CXX) $(LDFLAGS) -o splatsave $^ $(LIBS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) $(LIBS) -c -o $@ $<

clean:
	rm build/*.*
