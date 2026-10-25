/* compiler: ee-gcc-2.96-G0 */
unsigned int func_001C80F0(const char *);

int func_0016FD58(char *name) {
    if (func_001C80F0(name) != 17) {
        return 0;
    }
    return name[8] == '.';
}
