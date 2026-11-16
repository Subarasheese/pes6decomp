/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(void *, s32, s32);            /* extern */
extern u8 Pes6TextureCache_List[];
extern char D_00509068[];

void func_00145BC0(s32 arg0) {
    s32 t;
    s32 var_s0;
    u32 var_a7;
    s32 var_a6;
    u8 *var_a5;
    u8 *node;
    s32 off;
    u32 count;

    node = M2C_FIELD(Pes6TextureCache_List, u8 **, 4);
    while (M2C_FIELD(node, u16 *, 0xE) != 0 || node != Pes6TextureCache_List) {
        node = M2C_FIELD(node, u8 **, 4);
    }
    var_s0 = arg0 & 0xFF;
    (*(s32 *)D_00509068) = var_s0;
    func_001C48E8(Pes6TextureCache_List, 0, 0x15E0);
    if (var_s0 == 0) {
        var_s0 = 0xE8;
    }
    (*(s32 *)D_00509068) = var_s0 & 0xFF;
    var_a5 = Pes6TextureCache_List;
    var_a7 = 0;
    var_a6 = 0;
    do {
        M2C_FIELD(var_a5, u8 **, 0) = Pes6TextureCache_List + (var_a6 - 0x18);
        M2C_FIELD(var_a5, u8 **, 4) = Pes6TextureCache_List + (var_a6 + 0x18);
        t = ((var_a7 - 1) << 8) + 0xF0800;
        M2C_FIELD(var_a5, s16 *, 0xC) = (s16) (t / 64);
        var_a7 += 1;
        count = *(u32 *)D_00509068;
        var_a6 += 0x18;
        var_a5 += 0x18;
    } while (count >= var_a7);
    off = count * 0x18;
    M2C_FIELD(Pes6TextureCache_List, u8 **, 0) = Pes6TextureCache_List + off;
    M2C_FIELD(Pes6TextureCache_List + off, u8 **, 4) = Pes6TextureCache_List;
}
