/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *func_001C48E8(void *, int, unsigned int);
extern void func_001D7F10(void *);
extern void func_001F1EA0(char *);
extern void func_002DF960(void *);
extern void func_008C5D70(char *);
extern void func_008D3040(char *);

void func_008D3CB0(char *arg0) {
    if (arg0 != NULL) {
        func_008D3040(arg0);
        func_002DF960(M2C_FIELD(arg0, char **, 0xB4));
        func_001F1EA0(M2C_FIELD(arg0, char **, 0x10));
        func_008C5D70(arg0 + 0xB8);
        func_001D7F10(M2C_FIELD(arg0, char **, 0x48));
        func_001D7F10(M2C_FIELD(arg0, char **, 0x4C));
        func_001D7F10(M2C_FIELD(arg0, char **, 0x54));
        func_001C48E8((s32 *) arg0, 0, 0xD8);
    }
}
