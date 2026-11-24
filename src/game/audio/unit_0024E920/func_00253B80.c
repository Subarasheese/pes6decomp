/* compiler: mwcc-3.0.1b151 */
#include "pes6/sound_stream.h"

extern void func_00254590(void);
extern void func_00252880(void);
extern void func_00251D60(void);
extern void func_00252000(void);
extern void func_00253180(void);
extern void func_002534E0(void);
extern s32 D_003E9B5C;
extern s32 D_003E9B98;
extern s32 D_003E9B60;
extern s32 D_003E9B64;
extern void *D_003E9B70;
extern void *D_003E9BB8;
extern char D_0058C5A0[];
extern s32 ADXF_GetStat(void *);
extern s32 ADXF_GetFsizeSct(void *);
extern void ADXF_Close(void *);
extern void ADXF_ReadNw(void *, s32, void *);
extern void *ADXF_Open(char *, s32);

void func_00253B80(void) {
    func_00254590();
    func_00252880();
    func_00251D60();
    func_00252000();
    func_00253180();
    func_002534E0();
    switch (D_003E9B5C) {
    case 1:
        D_003E9B70 = ADXF_Open(D_0058C5A0, 0);
        D_003E9B5C++;
        break;
    case 2:
        ADXF_ReadNw(D_003E9B70, ADXF_GetFsizeSct(D_003E9B70), D_003E9BB8);
        D_003E9B5C++;
        break;
    case 3:
        if (ADXF_GetStat(D_003E9B70) != 2) {
            ADXF_Close(D_003E9B70);
            D_003E9B5C = 0;
            D_003E9B98 = 1;
        }
        break;
    }
    if (D_003E9B60 < D_003E9B64)
        D_003E9B60 = D_003E9B64;
}
