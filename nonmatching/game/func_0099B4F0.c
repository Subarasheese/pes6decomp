/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_00278280(s32);
extern void func_0099C5D0(void);
extern void func_0099C680(void);
extern char D_00591DCC[];
extern char D_00592800[];

void func_0099B4F0(void) {
    char *var_s0;
    s32 var_s1;
    u8 temp_v1;

    var_s1 = 0;
    var_s0 = D_00592800;
    do {
        temp_v1 = *(u8 *)var_s0;
        if (temp_v1 == 0xFF) {
            *(u8 *)(var_s0 + 0x10) = 0xFF;
            *(u8 *)(var_s0 + 1) = 0xFF;
            *(u8 *)(var_s0 + 2) = 0xFF;
            *(u8 *)(var_s0 + 0xE) = 0;
            *(u8 *)(var_s0 + 0xC) = 0xFF;
            *(u8 *)(var_s0 + 0xF) = 0;
        } else {
            if (temp_v1 == 8) {
                *(u8 *)(var_s0 + 3) = 0xA;
            }
            if (*(u8 *)(var_s0 + 1) == 0) {
                *(u8 *)(var_s0 + 0xC) = (*(u8 *)D_00591DCC * 0xB) + 1;
            } else {
                *(u8 *)(var_s0 + 0xC) = 0xC - (*(u8 *)D_00591DCC * 0xB);
            }
            if (*(u8 *)(var_s0 + 3) == 0) {
                func_00278280(var_s1 & 0xFF);
            }
        }
        var_s1 += 1;
        var_s0 += 0x28;
    } while (var_s1 < 8);
    func_0099C680();
    func_0099C5D0();
}
