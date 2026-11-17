/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

/* Unless func_00B29CB0 reports something (nonzero: return 0), fills a 0x20-byte record with
 * func_00188910 and returns its word at +0x18. */
s32 func_00B29CB0(void);
void func_00188910(s32 *);

s32 func_00B277E0(void) {
    s32 rec[8];

    if (func_00B29CB0() != 0) {
        return 0;
    }
    func_00188910(rec);
    return rec[6];
}
