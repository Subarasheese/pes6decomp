/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u8 func_00197510(u8);                               /* extern */

void func_00197530(void *arg0) {
    M2C_FIELD(arg0, u8 *, 7) = func_00197510(M2C_FIELD(arg0, u8 *, 7));
    M2C_FIELD(arg0, u8 *, 6) = func_00197510(M2C_FIELD(arg0, u8 *, 6));
    M2C_FIELD(arg0, u8 *, 5) = func_00197510(M2C_FIELD(arg0, u8 *, 5));
    M2C_FIELD(arg0, u8 *, 3) = func_00197510(M2C_FIELD(arg0, u8 *, 3));
    M2C_FIELD(arg0, u8 *, 2) = func_00197510(M2C_FIELD(arg0, u8 *, 2));
    M2C_FIELD(arg0, u8 *, 1) = func_00197510(M2C_FIELD(arg0, u8 *, 1));
}
