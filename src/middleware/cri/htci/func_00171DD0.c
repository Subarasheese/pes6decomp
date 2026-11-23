/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware, htCiSetAccessName, from crashbashash/DW4_Decomp, src/cri/htci.c. See
 * THIRD_PARTY.md. */

extern char *strcpy(char *, const char *);
extern char D_00387920[40];
void func_00171DD0(const char *prefix) {
    if (prefix == 0) {
        strcpy(D_00387920, "host:");
    } else {
        strcpy(D_00387920, prefix);
    }
}
