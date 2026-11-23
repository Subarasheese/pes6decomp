/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef void (*EntryCommand)(void);
extern void func_00901600(void);
extern void func_00901510(void);
extern void func_00901500(void);
void func_00901680(s32 index) {
    EntryCommand local[3] = {func_00901600, func_00901510, func_00901500};
    local[index]();
}
