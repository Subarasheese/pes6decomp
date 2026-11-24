/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern void *memcpy(void *dst, const void *src, u32 size);
extern u16 *func_002BD240(void);
extern u8 *func_00C54950(u8 *cursor);
extern s32 D_003E9D48;
extern u8 *func_00C18E60(u8 *cursor);
extern u8 *func_00C186A0(u8 *cursor);
extern u8 *func_00C17C50(u8 *cursor);
extern u8 *func_00C16E20(u8 *cursor);
extern u8 *func_00C15F40(u8 *cursor);
extern u8 *func_00C183B0(u8 *cursor);
extern u8 *func_00C13C30(u8 *cursor);
extern s32 func_00C14FC0(s32 cursor);
extern u8 *func_00C12E50(u8 *cursor);
extern u8 *func_00C11E50(u8 *cursor);
extern u32 func_00C10310(u32 cursor);
extern u8 *func_00C219D0(u8 *cursor);
extern s32 func_00C0EFF0(s32 cursor);
u8 *func_002BD140(u8 *cursor) {
    s32 count;
    const s32 *state = &D_003E9D48;
    if (cursor) {
        count = 16;
        memcpy(cursor, &count, sizeof(count));
        cursor += sizeof(count);
        memcpy(cursor, func_002BD240(), count * sizeof(u16));
        cursor += count * sizeof(u16);
        cursor = func_00C18E60(cursor);
        cursor = func_00C186A0(cursor);
        cursor = func_00C17C50(cursor);
        cursor = func_00C16E20(cursor);
        cursor = func_00C15F40(cursor);
        cursor = func_00C183B0(cursor);
        cursor = func_00C13C30(cursor);
        cursor = (u8 *)func_00C14FC0((s32)cursor);
        cursor = func_00C12E50(cursor);
        cursor = func_00C11E50(cursor);
        cursor = (u8 *)func_00C10310((u32)cursor);
        cursor = func_00C219D0(cursor);
        cursor = (u8 *)func_00C0EFF0((s32)cursor);
        memcpy(cursor, state, sizeof(D_003E9D48));
        cursor = func_00C54950(cursor + sizeof(D_003E9D48));
    }
    return cursor;
}
