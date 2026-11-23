/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef void (*EntryCommand)(void);
extern void func_009031C0(void);
extern void func_009030C0(void);
extern void func_009030D0(void);
void func_009032E0(s32 index) {
    EntryCommand local[3] = {func_009031C0, func_009030D0, func_009030C0};
    local[index]();
}
