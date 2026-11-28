/* compiler: ee-gcc-2.9 */
#include "pes6/https/ssleay_091b_types.h"

extern void func_00BD9F80(STACK *stack, void (*freeEntry)());
extern void func_00BDA038(STACK *stack);

void func_00BDA010(STACK *stack, void (*freeEntry)()) {
    func_00BD9F80(stack, freeEntry);
    func_00BDA038(stack);
}
