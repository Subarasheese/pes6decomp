/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef void (*EntryCommand)(void);
extern void func_00900A70(void);
extern void func_00900940(void);
extern void func_00900980(void);
void func_00900CD0(s32 index) {
    EntryCommand local[3] = {func_00900A70, func_00900980, func_00900940};
    local[index]();
}
