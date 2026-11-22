/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 *func_00B9C490(void);
extern void func_00BC7390(s32);
extern void func_00C1B3C0(u32);
extern s32 func_00C1B440(s32, u16);
extern u8 D_00CE3680[];
extern u8 D_00CE3687[];

void func_00B9F1F0(void) {
    int *entry;

    entry = func_00B9C490();
    D_00CE3680[0] = 1;
    D_00CE3687[0] = 1;
    entry[7] = 0;
    entry[0xd] = 0;
    func_00BC7390(0xe);
    func_00C1B3C0(entry[0xd]);
    func_00C1B440(0, *(u16 *)((int)entry + 0x3a));
}
