/* compiler: ee-gcc-2.9-G0 */
/* Byte-identical to a GT4 function; source ported from the GT4 decompilation
 * (MIT, see THIRD_PARTY.md). Names here do not identify PES6 behavior. */
/* Reads a 14-byte version string from a file once and caches it. */
extern char D_003B31D8[];
extern const char D_003DBFE8[];

int func_0010A6E8(const char *path, int mode);
int func_0010AD30(int fd, void *buf, int size);
int func_0010A978(int fd);

char *func_002D9590(void)
{
    int fd;

    if (D_003B31D8[0] == 0) {
        fd = func_0010A6E8(D_003DBFE8, 1);
        if (fd >= 0) {
            func_0010AD30(fd, D_003B31D8, 14);
            func_0010A978(fd);
        }
    }
    return D_003B31D8;
}
