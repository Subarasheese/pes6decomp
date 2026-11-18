/* compiler: ee-gcc-2.9-G0 */
/* Adapted from a GT4 decompilation source via the PES6 resident code.
 * See THIRD_PARTY.md for the MIT attribution. */
/* Reads a 14-byte version string from a file once and caches it. */
extern char D_005CAA58[];
extern const char D_005FF338[];

int func_001A0270(const char *path, int mode);
int func_001A08B8(int fd, void *buf, int size);
int func_001A0500(int fd);

char *func_001971A8(void)
{
    int fd;

    if (D_005CAA58[0] == 0) {
        fd = func_001A0270(D_005FF338, 1);
        if (fd >= 0) {
            func_001A08B8(fd, D_005CAA58, 14);
            func_001A0500(fd);
        }
    }
    return D_005CAA58;
}
