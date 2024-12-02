#include "parser.h"

struct stack{
    size_t capacity;
    size_t item_size;
    size_t stack_pointer;
    struct token *tokens; /*zásobník bude použit pro shunting yard a evaluaci, kde pracuji pouze s tokeny*/
};

struct stack *stack_init(size_t capacity, size_t item_size);

int stack_push(struct stack *s, struct token tok);

int stack_expand(struct stack **s);

struct token stack_pop(struct stack *s);

struct token stack_top(struct stack *s);