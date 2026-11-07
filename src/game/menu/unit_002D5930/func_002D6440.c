/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
#include "pes6/unit_002d5930.h"
extern s32 D_003B25D0[];
extern u8 D_00591BB4[];
extern void *func_001C48E8(void *, s32, u32);
extern u32 func_00351ED0(u8);
typedef struct { UpdateCallback values[3]; } CallbackWords;
extern CallbackWords D_003B25C0[];
void func_002D6440(void) {
    CallbackWords defaultCallbacks = D_003B25C0[0];
    s32 presets[36];
    s32 *source = D_003B25D0;
    s32 *destination = presets;
    s32 remaining = 18;
    s32 presetGroup;
    s32 index;
    s32 *entry;
    s32 offset;
    s32 first, second, third;

    do {
        remaining--;
        destination[0] = source[0];
        destination[1] = source[1];
        source += 2;
        destination += 2;
    } while (remaining > 0);
    if (D_003E7614->initialized == 0) {
        func_001C48E8(D_003E7614, 0, 0x60);
        D_003E7614->initialized = 1;
        switch (func_00351ED0(D_00591BB4[0])) {
        case 0:
            presetGroup = 0;
            D_003E7614->enabled = 1;
            break;
        case 3:
            presetGroup = 2;
            D_003E7614->enabled = 1;
            break;
        case 1:
        case 2:
        case 4:
            presetGroup = 1;
            D_003E7614->enabled = 1;
            break;
        case 5:
            D_003E7614->enabled = 0;
            break;
        }
        if (D_003E7614->enabled != 0) {
            index = 0;
            offset = 0;
            entry = &presets[presetGroup * 12];
            do {
                index++;
                first=entry[0];
                second=entry[1];
                third=entry[2];
                entry += 3;
                M2C_FIELD((u8 *)D_003E7614+offset,s32 *,4)=first;
                M2C_FIELD((u8 *)D_003E7614+offset,s32 *,8)=second;
                M2C_FIELD((u8 *)D_003E7614+offset,s32 *,12)=third;
                offset += 12;
            } while (index < 4);
            M2C_FIELD(D_003E7614, UpdateCallback *, 0x4C) = defaultCallbacks.values[0];
            M2C_FIELD(D_003E7614, UpdateCallback *, 0x50) = defaultCallbacks.values[1];
            M2C_FIELD(D_003E7614, UpdateCallback *, 0x54) = defaultCallbacks.values[2];
        }
    }
}
