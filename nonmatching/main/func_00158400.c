/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00157EC8(void *);
s32 func_001564F8(void *, u16 *, s32);              /* extern */
s32 func_001565A8(u16 *, u16 *);                    /* extern */
s32 func_00156AB0(u16 *, u16 *);                    /* extern */
s32 func_00156C28(void *, u16 *, s32);              /* extern */
s32 func_00157398(u16 *, u16 *);                    /* extern */
s32 func_00157500(void *, u16 *, s32);              /* extern */
s32 ADXB_DecodeHeaderAdx(void *, u16 *, s32);              /* extern */
s32 func_001592F0(void *, u16 *, s32);              /* extern */
s32 ADXB_CheckSpsd(u16 *, u16 *);                    /* extern */
s32 func_001597B8(void *, u16 *, s32);              /* extern */
s32 func_00159D68(u16 *, u16 *);                    /* extern */

s32 func_00158400(void *arg0, u16 *arg1, s32 arg2) {
    u16 temp_v0;

    func_00157EC8(arg0);
    temp_v0 = *arg1;
    if ((((temp_v0 >> 8) | (temp_v0 << 8)) & 0xFFFF) == 0x8000) {
        return ADXB_DecodeHeaderAdx(arg0, arg1, arg2);
    }
    if (ADXB_CheckSpsd(arg1, arg1) != 0) {
        return func_001592F0(arg0, arg1, arg2);
    }
    if (func_00159D68(arg1, arg1) != 0) {
        return func_001597B8(arg0, arg1, arg2);
    }
    if (func_00156AB0(arg1, arg1) != 0) {
        return func_00156C28(arg0, arg1, arg2);
    }
    if (func_00157398(arg1, arg1) != 0) {
        return func_00157500(arg0, arg1, arg2);
    }
    if (func_001565A8(arg1, arg1) != 0) {
        return func_001564F8(arg0, arg1, arg2);
    }
    return -1;
}
