/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[2];
    u8 a : 2;
    u8 f : 5;
} Blk;

extern u8 *Pes6SaveData_Current;
extern u8 D_00591BCA[];
s32 Pes6SaveData_IsUnavailable(void);
void func_0023D9C0(void);

static inline Blk *get_block(void) {
    if (Pes6SaveData_IsUnavailable() == 1) {
        return NULL;
    }
    if (Pes6SaveData_Current != NULL) {
        return (Blk *)(Pes6SaveData_Current + 0x4770);
    }
    return NULL;
}

s32 Pes6Settings_Get_B02_b2_w5_2(void) {
    Blk *p = get_block();
    s32 v;

    if (Pes6SaveData_IsUnavailable() == 1) {
        return 0;
    }
    if (p == NULL) {
        return 0;
    }
    v = p->f;
    if (v == 18) {
        func_0023D9C0();
        v = D_00591BCA[0];
    }
    return v;
}
