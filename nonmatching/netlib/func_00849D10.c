/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA50(void);
s16 *func_008472D0();                               /* extern */
s32 func_008502E0(u64, u8);                         /* extern */
extern char D_008B14CC[];
extern char D_008B14CD[];
extern char D_008B14EC[];

void func_00849D10(void *arg0) {
    s16 temp_s1;

    if ((func_002DCA50() != 0) && (((u64) ((s64) (*(u8 *)D_008B14CC) << 0x3E) >> 0x3F) != 0)) {
        temp_s1 = *func_008472D0();
        if (temp_s1 != (func_008502E0((u64) ((s64) (*(u8 *)D_008B14CD) << 0x3E) >> 0x3F, M2C_FIELD(arg0, u8 *, 0)) & 0xFF)) {
            M2C_FIELD(arg0, s32 *, 0xA0) = (s32) (*(s32 *)D_008B14EC);
        }
    }
}
