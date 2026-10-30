/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001AD7F0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_001B02B0(M2C_UNK *, s32 *);            /* extern */
extern char D_011E4A00[];
extern char D_011E6A00[];

s32 func_00158A90(void) {
    func_001AD7F0(((void *)D_011E6A00), 0x100);
    func_001B02B0(((void *)D_011E6A00), ((void *)D_011E4A00) + 0x30);
    return (*(s32 *)D_011E4A00);
}
