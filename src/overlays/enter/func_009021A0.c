/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef void (*EntryCommand)(void);
extern void func_00901FE0(void);
extern void func_00901EF0(void);
extern void func_00901EE0(void);
void func_009021A0(s32 index) {
    EntryCommand local[3] = {func_00901FE0, func_00901EF0, func_00901EE0};
    local[index]();
}
