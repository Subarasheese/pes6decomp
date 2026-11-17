/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001EEDA0(void *, u8);
extern void func_001F0A40(void *, u8);
extern char D_00CB4FB3[];
extern char D_00CCD510[];

void func_00C8C0A0(s32 arg0) {
    char *var_s0;
    char *var_s1;
    char *var_s2;
    s32 var_s3;
    s32 var_s4;

    func_001F0A40(*(void **)(D_00CCD510 + 4), arg0 & 0xFF);
    var_s2 = D_00CCD510;
    var_s1 = D_00CCD510;
    for (var_s4 = 0; var_s4 < 2; var_s4++) {
        var_s0 = var_s2;
        for (var_s3 = 0; var_s3 < 5; var_s3++) {
            func_001EEDA0(*(void **)(var_s0 + 0x14), arg0 & 0xFF);
            var_s0 += 4;
        }
        func_001EEDA0(*(void **)(var_s1 + 0xC), arg0 & 0xFF);
        var_s2 += 0x14;
        var_s1 += 4;
    }
    func_001EEDA0(*(void **)(D_00CCD510 + 8), ((arg0 * (*(u8 *)D_00CB4FB3)) / 255) & 0xFF);
}
