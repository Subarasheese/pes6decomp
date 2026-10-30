/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
extern u8 func_00BF6270(void);
extern void func_0027B200(void *, s32, s32);
M2C_UNK func_00209A00(void **, s32, M2C_UNK);       /* extern */
void **func_00B2A420(u8);                           /* extern */
M2C_UNK func_00B2ACF0(void **);                     /* extern */
s32 func_00BB1310(M2C_UNK);                         /* extern */
extern char D_00CBCB34[];
extern char D_00CBCB37[];
extern char D_00CBCB38[];

void func_00B462E0(void **arg0) {
    void **temp_a0;
    void **temp_s1;
    void *temp_v1;

    temp_s1 = func_00B2A420(func_00BF6270());
    func_00B2ACF0(arg0);
    if ((*(u8 *)D_00CBCB37) != 0x14) {

    } else {
        temp_v1 = M2C_FIELD(*temp_s1, void **, 4);
        if ((M2C_FIELD(temp_v1, u16 *, 0x30) == (func_00BB1310(0x151) & 0xFFFF)) && !(M2C_FIELD(temp_v1, f32 *, 0x38) < 40.0f) && (M2C_FIELD(M2C_FIELD(*arg0, void ***, 4), u16 *, 0x30) == 0x40C)) {
            func_00209A00(M2C_FIELD(*arg0, void ***, 4), func_00BB1310(0x7F) & 0xFFFF, 0);
        }
        temp_a0 = M2C_FIELD(*arg0, void ***, 4);
        if (M2C_FIELD(temp_a0, u16 *, 0x30) == (func_00BB1310(0x7F) & 0xFFFF)) {
            if (func_00207D80(temp_a0, 0x16) != 0) {
                func_0027B200(*M2C_FIELD(*arg0, void ***, 4), 9, 1);
            }
            if (func_00207D80(M2C_FIELD(*arg0, void ***, 4), 0x34) != 0) {
                switch ((*(u8 *)D_00CBCB38)) {               /* switch 1; irregular */
                default:                            /* switch 1 */
                    func_0027B200(*M2C_FIELD(*arg0, void ***, 4), 4, 1);
                    break;
                case 1:                             /* switch 1 */
                    func_0027B200(*M2C_FIELD(*arg0, void ***, 4), 3, 1);
                    break;
                case 2:                             /* switch 1 */
                    func_0027B200(*M2C_FIELD(*arg0, void ***, 4), 2, 1);
                    break;
                case 3:                             /* switch 1 */
                    func_0027B200(*M2C_FIELD(*arg0, void ***, 4), 1, 1);
                    break;
                }
                (*(u16 *)D_00CBCB34) |= 0x20;
            }
            if (func_00207D80(M2C_FIELD(*arg0, void ***, 4), 0x90) != 0) {
                switch ((*(u8 *)D_00CBCB38)) {               /* switch 2; irregular */
                default:                            /* switch 2 */
                    func_0027B200(*M2C_FIELD(*arg0, void ***, 4), 4, 0);
                    break;
                case 1:                             /* switch 2 */
                    func_0027B200(*M2C_FIELD(*arg0, void ***, 4), 3, 0);
                    break;
                case 2:                             /* switch 2 */
                    func_0027B200(*M2C_FIELD(*arg0, void ***, 4), 2, 0);
                    break;
                case 3:                             /* switch 2 */
                    func_0027B200(*M2C_FIELD(*arg0, void ***, 4), 1, 0);
                    break;
                }
            }
            if (func_00207D80(M2C_FIELD(*arg0, void ***, 4), 0xA2) != 0) {
                func_0027B200(*M2C_FIELD(*arg0, void ***, 4), 0xA, 1);
            }
        }
    }
}
