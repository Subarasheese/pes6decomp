/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef void (*EntryCommand)(void);
extern void func_00905BB0(void);
extern void func_00905800(void);
extern void func_009054A0(void);
void func_00905D00(s32 index) {
    EntryCommand local[3] = {func_00905BB0, func_00905800, func_009054A0};
    local[index]();
}
