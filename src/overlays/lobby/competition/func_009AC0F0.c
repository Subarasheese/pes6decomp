/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001D4E00(char *);
extern void func_001D7F10(void *);
extern void func_002DF960(void *);
extern void func_002E33D0(char *);
extern s32 func_002ED130(s32);
extern void func_008CA7A0(char **);

void func_009AC0F0(char *arg0) {
    s32 var_s1;
    char *temp_a0;
    char *var_s0;

    func_002ED130(M2C_FIELD(arg0, s32 *, 4));
    func_008CA7A0(M2C_FIELD(arg0, char ***, 8));
    func_001D7F10(M2C_FIELD(arg0, char **, 0x1C));
    func_001D7F10(M2C_FIELD(arg0, char **, 0xC));
    func_002E33D0(M2C_FIELD(arg0, char **, 0x18));
    var_s1 = 0;
    var_s0 = arg0;
    do {
        func_002E33D0(M2C_FIELD(var_s0, char **, 0x44));
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 3);
    func_002DF960(M2C_FIELD(arg0, char **, 0x50));
    func_002DF960(M2C_FIELD(arg0, char **, 0x58));
    func_002DF960(M2C_FIELD(arg0, char **, 0x54));
    temp_a0 = M2C_FIELD(arg0, char **, 0);
    if (temp_a0 != NULL) {
        func_001D4E00(temp_a0);
        M2C_FIELD(arg0, char **, 0) = NULL;
    }
}
