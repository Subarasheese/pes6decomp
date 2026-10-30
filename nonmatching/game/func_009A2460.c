/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CB63D4[];
extern char D_00CB63D5[];
extern char D_00CB63D6[];
extern char D_00CB63D7[];

void func_009A2460(void *arg0) {
    (*(u8 *)D_00CB63D4) = M2C_FIELD(arg0, u8 *, 0);
    (*(u8 *)D_00CB63D5) = M2C_FIELD(arg0, u8 *, 1);
    (*(u8 *)D_00CB63D6) = M2C_FIELD(arg0, u8 *, 2);
    (*(u8 *)D_00CB63D7) = M2C_FIELD(arg0, u8 *, 3);
}
