/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef void (*EntryCommand)(void);
extern void func_00900620(void);
extern void func_00900470(void);
extern void func_00900490(void);
void func_009006B0(s32 index) {
    EntryCommand local[3] = {func_00900620, func_00900490, func_00900470};
    local[index]();
}
