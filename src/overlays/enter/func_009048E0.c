/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef void (*EntryCommand)(void);
extern void func_00904820(void);
extern void func_00904490(void);
extern void func_009044B0(void);
void func_009048E0(s32 index) {
    EntryCommand local[3] = {func_00904820, func_009044B0, func_00904490};
    local[index]();
}
