/* compiler: ee-gcc-2.9-G0 */
/* Byte-identical to a GT4 function; source ported from the GT4 decompilation
 * (MIT, see THIRD_PARTY.md). Names here do not identify PES6 behavior. */
struct OsdParam {
    unsigned int spdifMode : 1;
    unsigned int screenType : 2;
    unsigned int videoOutput : 1;
    unsigned int japLanguage : 1;
    unsigned int ps1drvConfig : 8;
    unsigned int version : 3;
    unsigned int language : 5;
    unsigned int timezoneOffset : 11;
};
extern unsigned char D_003B31D4;
void func_00105410(struct OsdParam *p);
int func_002D9600(void);

int func_002D9640(void)
{
    struct OsdParam p;
    int lang;

    func_00105410(&p);
    if (func_002D9600()) {
        lang = D_003B31D4;
    } else {
        func_00105410(&p);
        if (p.version == 0)
            lang = p.japLanguage;
        else
            lang = p.language;
    }
    return lang;
}
