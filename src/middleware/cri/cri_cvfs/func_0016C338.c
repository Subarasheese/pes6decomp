/* compiler: ee-gcc-2.96-G0 */
extern int sprintf(char *, const char *, ...);
/* Adapted from 3s-decomp, src/anniversary/cri/libadxe/cri_cvfs.c (addDevName).
 * licence: AGPL-3.0 (see THIRD_PARTY.md) */
typedef signed int Sint32;
typedef char Char8;
extern char *strcpy(char *dest, const char *src);
extern Char8 D_0050E790[0x148];
extern Char8 *func_0016ABC8(void);
extern Sint32 func_0016C2E8(Char8 *device_name);

void func_0016C338(const Char8 *device_name, Char8 *out) {
    Char8 *name_to_add = device_name;
    if (name_to_add == 0) {
        name_to_add = func_0016ABC8();
    }
    if (func_0016C2E8(name_to_add) == 1) {
        strcpy(D_0050E790, out);
        sprintf(out, "%s:%s", name_to_add, D_0050E790);
    }
}
