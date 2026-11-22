/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *func_001C48E8(void *, int, unsigned int);
extern void func_001D7F10(void *);
extern void func_001F1EA0(char *);
extern s32 func_0020A540(s32);
extern void func_002DF960(void *);
extern void func_008C5D70(char *);

void func_008C68F0(char *arg0) {
    if (arg0 != NULL) {
        func_002DF960(M2C_FIELD(arg0, char **, 0x74));
        func_002DF960(M2C_FIELD(arg0, char **, 0x70));
        func_001F1EA0(M2C_FIELD(arg0, char **, 0x54));
        func_0020A540(M2C_FIELD(arg0, s32 *, 0x4C));
        func_001D7F10(M2C_FIELD(arg0, char **, 0x78));
        func_001D7F10(M2C_FIELD(arg0, char **, 0x7C));
        func_001D7F10(M2C_FIELD(arg0, char **, 0x80));
        func_008C5D70(arg0 + 0xB0);
        func_001C48E8((s32 *) arg0, 0, 0xD0);
    }
}
