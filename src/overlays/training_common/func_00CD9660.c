/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001CEAB0(void);
extern void func_001CEB90(void);
extern void func_001CEBD0(s32);
extern void func_001CEC60(s64);
extern void func_001CEC70(void);
extern void func_001CECC0(s32);
extern s32 func_001D3090(char *);
extern void func_001D3260(char *);

void func_00CD9660(char *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 4) != 0) && (M2C_FIELD(arg0, s32 *, 0x18) != 0)) {
        func_001CECC0(func_001D3090(arg0 + 0xA4) + 0x60);
        func_001CEB90();
        func_001CEC60(0x2A);
        func_001CEBD0(2);
        func_001CEAB0();
        func_001D3260(arg0 + 0xA4);
        func_001CEC70();
        func_001CECC0(func_001D3090(arg0 + 0x90) + 0x60);
        func_001CEB90();
        func_001CEC60(0x2A);
        func_001CEBD0(2);
        func_001CEAB0();
        func_001D3260(arg0 + 0x90);
        func_001CEC70();
    }
}
