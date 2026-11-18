/* compiler: ee-gcc-2.9-G0 */
/* Adapted from a GT4 decompilation source via the PES6 resident code.
 * See THIRD_PARTY.md for the MIT attribution. */
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
extern unsigned char D_005CAA54;
void func_0019B1D0(struct OsdParam *p);
int func_00197218(void);

int func_00197258(void)
{
    struct OsdParam p;
    int lang;

    func_0019B1D0(&p);
    if (func_00197218()) {
        lang = D_005CAA54;
    } else {
        func_0019B1D0(&p);
        if (p.version == 0)
            lang = p.japLanguage;
        else
            lang = p.language;
    }
    return lang;
}
