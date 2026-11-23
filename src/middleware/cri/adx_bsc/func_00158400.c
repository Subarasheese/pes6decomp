/* compiler: ee-gcc-2.96-G0 */
/* ADXB_DecodeHeader adapted from LucasPicoli/god-hand-decomp, src/cod/003264c8.c. See
 * THIRD_PARTY.md. */
#include "types.h"
typedef struct ADX_BASIC AdxBasic;
extern void func_00157EC8(AdxBasic *decoder);
extern s32 ADXB_DecodeHeaderAdx(AdxBasic *decoder, const u8 *data, s32 size);
extern s32 ADXB_CheckSpsd(const u8 *data);
extern s32 func_00159D68(const u8 *data);
extern s32 func_001597B8(AdxBasic *decoder, const u8 *data, s32 size);
extern s32 func_00156AB0(const u8 *data);
extern s32 func_00156C28(AdxBasic *decoder, const u8 *data, s32 size);
extern s32 func_00157398(const u8 *data);
extern s32 func_00157500(AdxBasic *decoder, const u8 *data, s32 size);
extern s32 func_001565A8(const u8 *data);
extern s32 func_001564F8(AdxBasic *decoder, const u8 *data, s32 size);
extern s32 func_001592F0(AdxBasic *decoder, const u8 *data, s32 size);
s32 func_00158400(AdxBasic *decoder, const u8 *data, s32 size) {
    u16 tag;
    func_00157EC8(decoder);
    tag = *(const u16 *)data;
    if ((u16)((tag >> 8) | (tag << 8)) == 0x8000)
        return ADXB_DecodeHeaderAdx(decoder, data, size);
    if (ADXB_CheckSpsd(data))
        return func_001592F0(decoder, data, size);
    if (func_00159D68(data))
        return func_001597B8(decoder, data, size);
    if (func_00156AB0(data))
        return func_00156C28(decoder, data, size);
    if (func_00157398(data))
        return func_00157500(decoder, data, size);
    if (func_001565A8(data))
        return func_001564F8(decoder, data, size);
    return -1;
}
