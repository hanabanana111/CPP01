CPP = c++
CPP_FLAGS = -Wall -Werror -Wextra -std=c++98

PROGRAM_NAME = MoarBrainz!
SRCDIR := ./
INCDIR := ./

SRC := $(wildcard $(SRCDIR)/*.cpp) 

INCLUDES := -I$(INCDIR)

OBJDIR := objs
OBJS := $(SRC:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

all: $(PROGRAM_NAME)

$(PROGRAM_NAME): $(OBJS) $(wildcard $(INCDIR)/*.hpp) 
	$(CPP) $(CPP_FLAGS) $(INCLUDES) -o $@ $(OBJS)

$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CPP) $(CPP_FLAGS) $(INCLUDES) -o $@ -c $<

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(PROGRAM_NAME)

re: fclean all

.PHONY: all clean fclean re

#format-----------------------------------------------------------------------

.PHONY: format

format:
	clang-format --style=Google -i $(SRCS)
# $(HEADERS)
