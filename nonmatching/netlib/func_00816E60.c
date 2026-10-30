/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A3A20[];
extern char D_008A3A30[];

void func_00816E60(void) {
    (*(s32 *)D_008A3A20) = 1;
    (*(s32 *)D_008A3A30) = 1;
}
