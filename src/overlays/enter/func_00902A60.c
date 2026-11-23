/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef void (*EntryCommand)(void);
extern void func_00902980(void);
extern void func_00902760(void);
extern void func_00902790(void);
void func_00902A60(s32 index) {
    EntryCommand local[3] = {func_00902980, func_00902790, func_00902760};
    local[index]();
}
