/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u32 first : 11;
    u32 : 2;
    u32 second : 11;
    u32 : 8;
} SlotCodes;
typedef struct {
    u8 reserved00[0x14];
    SlotCodes codes;
    u32 reserved18;
    float firstData, secondData;
} ReplaySlot;
typedef struct {
    ReplaySlot slots[23];
    u8 reserved33c[12];
    s16 marker;
    u8 reserved34a[6];
    s16 field350, field352;
} ReplayFrame;
extern ReplayFrame *D_003E758C;
extern u8 D_00591C09[];
extern u16 D_005A3030[], D_00CBAA00[];
extern u8 D_005A3032[];
extern void func_00BC6930(void), func_00BC8CB0(s32), func_009A3340(void);
void func_009B5820(void) {
    s32 frame, slot;
    if (D_00591C09[0] != 10) {
        for (frame = 0; frame < 300; frame++) {
            D_003E758C[frame].marker = 0x7fff;
            D_003E758C[frame].field350 = 0;
            D_003E758C[frame].field352 = 0;
            for (slot = 0; slot < 23; slot++) {
                D_003E758C[frame].slots[slot].codes.first = 0x112;
                D_003E758C[frame].slots[slot].firstData = 0;
                D_003E758C[frame].slots[slot].codes.second = 0x112;
                D_003E758C[frame].slots[slot].secondData = 0;
            }
        }
        D_005A3030[0] = 0;
        D_005A3032[0] = 0;
        D_00CBAA00[0] = 0;
        func_00BC6930();
        func_00BC8CB0(0x7fffffff);
        func_009A3340();
    }
}
