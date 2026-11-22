/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_0087C970(s32);
extern s8 *D_003AE9D8[];
extern void func_0087C4E0(void);
extern void func_0087C8F0(void);
extern void func_0087C910(s32);

s32 func_0087C870(void) {
    ((s32 *)(D_003AE9D8[0]))[0x23] = 1;
    func_0087C8F0();
    func_0087C970(((s32 *)(D_003AE9D8[0]))[0x23]);
    func_0087C910(1);
    func_0087C4E0();
    func_0087C970(((s32 *)(D_003AE9D8[0]))[0x23]);
    return 1;
}
