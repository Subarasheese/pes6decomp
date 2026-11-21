/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_001DF7B0(s8 *);
extern char D_00CCD048[];

void func_00C89220(int arg0) {
    u32 *entry;

    if (!(arg0 < 3)) {
        return;
    }
    entry = (u32 *)(arg0 * 4 + (u32)D_00CCD048);
    func_001DF7B0((s8 *)*entry);
    *entry = 0;
}
