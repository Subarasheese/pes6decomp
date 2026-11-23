/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef void (*EntryCommand)(void);
extern void func_00902DB0(void);
extern void func_00902CB0(void);
extern void func_00902CC0(void);
void func_00902E00(s32 index) {
    EntryCommand local[3] = {func_00902DB0, func_00902CC0, func_00902CB0};
    local[index]();
}
