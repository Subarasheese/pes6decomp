/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_001D5EE0(s32, void *);
extern void func_001E75A0(s32, s32 *);
extern s32 func_0021E000(u32);
extern s32 func_0026DA40(s32);
extern s32 SD_stop(s32);
extern void func_0095EA40(s64);
extern s32 func_009751B0(void);
extern s32 func_009753A0(void);
extern s32 func_009755E0(void);

extern s32 D_003E7B24;
extern s32 D_003E7B28;
extern s32 D_003E7B2C;
extern char D_009C0510[];
extern char D_009C0518[];

void func_00975AA0(void) {
    if (func_0026DA40(1) != 0) {
        SD_stop(0x9A080400);
    }
    D_003E7B24 = func_009755E0();
    D_003E7B28 = func_009753A0();
    D_003E7B2C = func_009751B0();
    if (D_003E7B24 != 0x188) {
        func_001E75A0(func_0021E000((u32) D_003E7B24), ((void *)D_009C0510));
    }
    if (D_003E7B28 != 0x1DEB9) {
        func_001D5EE0(D_003E7B28, ((void *)D_009C0518));
    }
    func_001D5EE0(0x102A4, ((void *)D_009C0518));
    func_0095EA40(0);
}
