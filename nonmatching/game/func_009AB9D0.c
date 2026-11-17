/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

void *func_0018D4E0(s32);                           /* extern */
void *func_0018D4F0(s32);                           /* extern */
M2C_UNK func_009ABC10(void *);                      /* extern */

typedef struct { f32 *h; f32 x, y, z; char pad[12]; s8 flag; char pad2[3]; } Ent;

s32 func_009AB9D0(char *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_v0;
    s32 var_v0_2;
    s8 var_s0;
    char *var_s1_3;
    void *temp_v0;
    void *temp_v0_2;
    Ent *e;
    Ent *ents;
    f32 fa, fb, fc;

    ents = (Ent *)(arg0 + 0x70);
    e = ents;
    var_s1 = 0;
loop_1:
    var_s0 = 1;
    ents[var_s1].h = func_0018D4F0(var_s1 & 0xFFFF);
    temp_v0 = e->h;
    if (temp_v0 != NULL) {
        fa = *(f32 *)temp_v0;
        fb = *(f32 *)((char *)temp_v0 + 4);
        fc = *(f32 *)((char *)temp_v0 + 8);
        ents[var_s1].x = fa;
        ents[var_s1].y = fb;
        ents[var_s1].z = fc;
        if (var_s1 < 0x77) {
            if ((var_s1 % 7) == 6) {
                var_s0 = 0;
            }
        } else if (var_s1 < 0xBB) {
            if (((s32) (var_s1 - 0x77) % 4) == 0) {
                var_s0 = 0;
            }
        } else if (var_s1 < 0xD3) {
            temp_v1 = var_s1 - 0xBB;
            if ((temp_v1 % 4) != 0) {
                var_v0 = temp_v1 >> 2;
                if (temp_v1 < 0) {
                    var_v0 = (s32) (temp_v1 + 3) >> 2;
                }
                if (var_v0 == 0) {
                    goto block_37;
                }
            } else {
block_37:
                var_s0 = 0;
            }
        } else {
            temp_v1_2 = var_s1 - 0xD3;
            if ((temp_v1_2 % 4) != 0) {
                var_v0_2 = temp_v1_2 >> 2;
                if (temp_v1_2 < 0) {
                    var_v0_2 = (s32) (temp_v1_2 + 3) >> 2;
                }
                if (var_v0_2 == 0) {
                    goto block_39;
                }
            } else {
block_39:
                var_s0 = 0;
            }
        }
        e->flag = var_s0;
        var_s1 += 1;
        e += 1;

        if (var_s1 >= 0xEB) {
            var_s0_2 = 0;
            var_s1_2 = 0;
loop_26:
            e->h = func_0018D4E0(var_s1_2 & 0xFFFF);
            temp_v0_2 = e->h;
            if (temp_v0_2 != NULL) {
                fa = *(f32 *)temp_v0_2;
                fb = *(f32 *)((char *)temp_v0_2 + 4);
                fc = *(f32 *)((char *)temp_v0_2 + 8);
                e->x = fa;
                e->y = fb;
                e->z = fc;
                if ((var_s0_2 != 0) && (var_s0_2 != 3)) {
                    e->flag = 1;
                } else {
                    e->flag = 0;
                }
                var_s0_2 += 1;
                e += 1;
                var_s1_2 += 4;
                if (var_s0_2 >= 4) {
                    var_s0_3 = 0;
                    var_s1_3 = arg0;
                    do {
                        *(void **)var_s1_3 = func_0018D4E0(var_s0_3 & 0xFFFF);
                        var_s0_3 += 1;
                        var_s1_3 += 4;
                    } while (var_s0_3 < 0x1C);
                    func_009ABC10(arg0 + 0x1E50);
                    return 1;
                }
                goto loop_26;
            }
            return 0;
        }
        goto loop_1;
    }
    return 0;
}
