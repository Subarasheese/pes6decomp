/* compiler: ee-gcc-2.9-G0 */
#include "pes6/https/signature_methods.h"
extern s32 func_00BD6E38(s32, const u8 *, u32, u8 *, u32 *, void *);
extern void func_00BC7140(PalSignMethod);
extern s32 func_00BD6FD0(s32, const u8 *, u32, const u8 *, u32, void *);
extern void func_00BC7160(PalVerifyMethod);
extern s32 func_00BD56E8(s32, const u8 *, u32, u8 *, u32 *, void *);
extern void func_00BC7150(PalSignMethod);
extern s32 func_00BD5818(s32, const u8 *, u32, const u8 *, u32, void *);
extern void func_00BC7170(PalVerifyMethod);
s32 func_00BC65C0(void) {
    func_00BC7140(func_00BD6E38);
    func_00BC7160(func_00BD6FD0);
    func_00BC7150(func_00BD56E8);
    func_00BC7170(func_00BD5818);
    return 1;
}
