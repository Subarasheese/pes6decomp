/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef void (*EntryCommand)(void);
extern void func_009039B0(void);
extern void func_009038B0(void);
extern void func_009038C0(void);
void func_00903A20(s32 index) {
    EntryCommand local[3] = {func_009039B0, func_009038C0, func_009038B0};
    local[index]();
}
