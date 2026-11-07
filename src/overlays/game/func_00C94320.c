/* compiler: ee-gcc-2.9-Os-G0 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CA8D34[];
extern char D_00CCD924[];

void func_00C94320(void) {
    (*(s32 *)D_00CCD924) = (*(s32 *)D_00CA8D34);
}
