/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_0017F390(void *, M2C_UNK, u8);         /* extern */
extern void *Pes6File_Channels[];

s32 func_0017F270(s32 arg0, s32 arg1) {
    u8 state;
    u8 temp_a2;
    void *next;
    void *prev;
    void *node;

    node = Pes6File_Channels[arg0 * 2];
    if (node == NULL) {
        return 0;
    }
    while (node != NULL) {
        if (M2C_FIELD(node, s32 *, 0x54) == arg1) {
            break;
        }
        node = M2C_FIELD(node, void **, 4);
    }
    if (node == NULL) {
        return 0;
    }
    state = M2C_FIELD(node, u8 *, 0x84);
    if (state == 1) {
        M2C_FIELD(node, s32 *, 0x5C) = 0;
        temp_a2 = M2C_FIELD(node, u8 *, 0x84);
        if (temp_a2 != 0) {
            prev = M2C_FIELD(node, void **, 0);
            next = M2C_FIELD(node, void **, 4);
            if (prev != NULL) {
                M2C_FIELD(prev, void **, 4) = next;
            } else {
                Pes6File_Channels[temp_a2 * 2] = next;
            }
            if (next != NULL) {
                M2C_FIELD(next, void **, 0) = M2C_FIELD(node, void **, 0);
            } else {
                Pes6File_Channels[temp_a2 * 2 + 1] = M2C_FIELD(node, void **, 0);
            }
            M2C_FIELD(node, u8 *, 0x84) = 0;
            func_0017F390(node, 0, temp_a2);
        }
    } else if (state == 2) {
        M2C_FIELD(node, u8 *, 0x85) = 1;
    }
    return 1;
}
