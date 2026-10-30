/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchPlayers[];
extern char D_00591E19[];
extern char D_00591E4D[];
extern char D_00591E4E[];
extern char D_00591F24[];
extern char D_00CBBE38[];
extern char D_00CBBE39[];

void func_00BF0580(void) {
    s32 var_a0;
    s32 var_a1;
    s32 var_v1;
    void *temp_a3;

    if (((*(u8 *)D_00CBBE39) != 0) && ((s32) (*(u8 *)D_00591E19) < 0x17)) {
        if ((*(u8 *)D_00591E19) != 0xFF) {
            var_a0 = (s32) (*(u8 *)D_00591E19) % 23;
        } else {
            var_a0 = 1;
        }
        temp_a3 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
        if ((*(u8 *)D_00591E4D) != 0xFF) {
            var_a1 = (s32) (*(u8 *)D_00591E4D) % 23;
        } else {
            var_a1 = 1;
        }
        if (M2C_FIELD(temp_a3, u8 *, 0x13) == M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a1 * 0x240)), u8 *, 0x13)) {
            if ((*(u8 *)D_00591F24) == 0) {
                if (((*(u8 *)D_00CBBE38) != 2) && ((*(u8 *)D_00CBBE38) != 1)) {
                    var_v1 = 0;
                } else {
                    var_v1 = 1;
                }
                if (var_v1 != 0) {
                    if (M2C_FIELD(temp_a3, u8 *, 0) != (*(u8 *)D_00591E4E)) {
                        goto block_18;
                    }
                } else {
block_18:
                    (*(u8 *)D_00CBBE39) = 0;
                }
            }
        } else {
            (*(u8 *)D_00CBBE39) = 0;
        }
    }
}
