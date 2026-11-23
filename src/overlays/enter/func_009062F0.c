/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef void (*EntryCommand)(void);
extern void func_009060A0(void);
extern void func_00905F60(void);
extern void func_00905FB0(void);
void func_009062F0(s32 index) {
    EntryCommand local[3] = {func_009060A0, func_00905FB0, func_00905F60};
    local[index]();
}
