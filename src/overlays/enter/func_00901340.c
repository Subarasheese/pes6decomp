/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef void (*EntryCommand)(void);
extern void func_00901290(void);
extern void func_00901130(void);
extern void func_00901150(void);
void func_00901340(s32 index) {
    EntryCommand local[3] = {func_00901290, func_00901150, func_00901130};
    local[index]();
}
