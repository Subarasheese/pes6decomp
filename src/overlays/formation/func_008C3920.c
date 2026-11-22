/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001B9C60(char *);
extern void func_001D7F10(void *);
extern void func_001F1EA0(char *);
extern s32 func_002DC1D0(s32);
extern void func_002DF960(void *);
extern void func_008C38A0(char *);
extern void func_008C5D70(char *);

void func_008C3920(char *arg0) {
    char *temp_a0;

    func_002DC1D0(M2C_FIELD(arg0, s32 *, 0x50));
    func_002DF960(M2C_FIELD(arg0, char **, 0x54));
    temp_a0 = M2C_FIELD(arg0, char **, 0x58);
    if (temp_a0 != NULL) {
        func_001B9C60(temp_a0);
    }
    func_001F1EA0(M2C_FIELD(arg0, char **, 0x18));
    func_008C5D70(arg0 + 0x68);
    func_001D7F10(M2C_FIELD(arg0, char **, 0x5C));
    func_001D7F10(M2C_FIELD(arg0, char **, 0x60));
    func_001D7F10(M2C_FIELD(arg0, char **, 0x64));
    func_008C38A0(arg0);
}
