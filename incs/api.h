
#ifndef API_H
# define API_H

# include <stdbool.h>
# include "structs.h"
# include "enums.h"

// api
// rotate
void	ra(t_stack *stack, bool print);
void	rb(t_stack *stack, bool print);
void	rr(t_stack *stack, bool print);

// rotate_reverse
void	rra(t_stack *stack, bool print);
void	rrb(t_stack *stack, bool print);
void	rrr(t_stack *stack, bool print);

// swap
void	sa(t_stack *stack, bool print);
void	sb(t_stack *stack, bool print);
void	ss(t_stack *stack, bool print);

// push
void	pa(t_stack *stack, bool print);
void	pb(t_stack *stack, bool print);

#endif
