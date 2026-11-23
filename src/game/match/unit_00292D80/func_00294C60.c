/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u8 pad00[3], power;
} EffectInput;
extern u8 D_003E9CD0;
typedef struct {
    u8 field00, field01, field02;
    s8 direction;
    s32 amount;
    float power;
} EffectPreset;
extern EffectPreset D_005A2490[];
static inline void setEffectPreset(u8 field00, u8 field01, u8 field02, s32 amount, s8 direction) {
    D_005A2490[0].field00 = field00;
    D_005A2490[0].field01 = field01;
    D_005A2490[0].field02 = field02;
    D_005A2490[0].amount = amount;
    D_005A2490[0].direction = direction;
}
void func_00294C60(const EffectInput *input, const u8 *kind) {
    D_005A2490[0].power = (float)(input->power << 1);
    switch (*kind) {
    case 0:
        setEffectPreset(2, 6, 3, 70, -1);
        break;
    case 1:
        setEffectPreset(3, 3, 15, 60, -1);
        break;
    case 2:
        setEffectPreset(2, 3, 0, 50, 1);
        break;
    case 3:
        setEffectPreset(9, 2, 12, 60, 1);
        break;
    case 4:
        setEffectPreset(10, 5, 10, 60, 1);
        break;
    case 5:
        setEffectPreset(8, 2, 3, 65, 1);
        break;
    case 6:
        setEffectPreset(6, 2, 15, 55, 1);
        break;
    case 7:
        setEffectPreset(7, 5, 5, 65, 1);
        break;
    case 8:
        setEffectPreset(8, 5, 18, 65, 1);
        break;
    case 9:
        setEffectPreset(8, 8, 13, 35, 1);
        break;
    case 10:
        setEffectPreset(11, 4, 12, 60, -1);
        break;
    case 11:
        setEffectPreset(4, 2, 5, 60, -1);
        break;
    case 12:
        setEffectPreset(10, 2, 3, 65, -1);
        break;
    case 13:
        setEffectPreset(6, 2, 15, 60, -1);
        break;
    case 14:
        setEffectPreset(6, 10, 13, 34, -1);
        break;
    case 15:
        D_005A2490[0].field00 = 15;
        {
            s32 x = (D_003E9CD0 ^ (D_003E9CD0 << 5)) & 0xff;
            x = (x ^ (x >> 3)) & 255;
            x = x ^ (x << 5);
            D_003E9CD0 = x;
            D_005A2490[0].field01 = (int)(((float)((int)(u8)x - 1) / 254.0f) * 5.0f);
        }
        D_005A2490[0].field02 = 25;
        D_005A2490[0].amount = 50;
        D_005A2490[0].direction = 1;
        break;
    case 16:
        setEffectPreset(13, 2, 12, 65, 1);
        break;
    case 17:
        setEffectPreset(9, 2, 12, 55, 1);
        break;
    }
}
