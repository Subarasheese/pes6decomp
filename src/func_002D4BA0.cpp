/* compiler: mwcc-3.0.1b210 */
#pragma exceptions off
extern "C" {
extern int func_00263070(void);
extern int func_00B29C50(void);
int func_002D4BA0(void) {
    if (func_00263070() != 0) {
        return !func_00B29C50();
    }
    return false;
}
}
