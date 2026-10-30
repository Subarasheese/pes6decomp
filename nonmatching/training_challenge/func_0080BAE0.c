/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0080BBF0(s32);                         /* extern */
M2C_UNK func_0080BD70(s32);                         /* extern */
void *func_00824080();                              /* extern */
M2C_UNK func_009B43A0(s32);                         /* extern */
s32 func_009B4420();                                /* extern */
M2C_UNK func_009B4460(s32);                         /* extern */
M2C_UNK func_009B4500(s32);                         /* extern */
s32 func_009B4580();                                /* extern */
M2C_UNK func_009B5D20();                            /* extern */
M2C_UNK func_009B6420(s32);                         /* extern */
M2C_UNK func_009B6630(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00C8AA10(M2C_UNK);                     /* extern */
M2C_UNK func_00C92370(M2C_UNK);                     /* extern */
extern char D_00591DB4[];
extern char D_00829830[];
extern char D_00829832[];
extern char D_00829840[];

s32 func_0080BAE0(s32 arg0) {
    s32 var_s1;

    func_00C8AA10(0);
    func_00C92370(1);
    (*(s8 *)D_00591DB4) = 0;
    func_009B4460(((s32) ((func_009B4420() & 0xFFFF) + 0x12B) % 300) & 0xFFFF);
    func_009B4500(func_009B4420());
    func_009B43A0(func_009B4580());
    func_009B6420(func_009B4580());
    func_009B6630(3, 0);
    func_009B5D20();
    var_s1 = 0;
    if (*M2C_FIELD(*M2C_FIELD(func_00824080(), void ***, 0x18), s8 **, 8) != 0) {
        var_s1 = 1;
    }
    if (var_s1 == 0) {
        func_0080BBF0(arg0);
    } else {
        func_0080BD70(arg0);
    }
    (*(s8 *)D_00829830) = 0;
    (*(s32 *)D_00829840) = 0x3F800000;
    (*(s8 *)D_00829832) = 0;
    return 1;
}
