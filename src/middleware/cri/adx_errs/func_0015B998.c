/* compiler: ee-gcc-2.96-G0 */
extern char D_003C7D58[];
extern char D_003C7D90[];
void func_0015B478(const char *);

int func_0015B998(unsigned int channel, int size) {
    if (channel >= 256) {
        func_0015B478(D_003C7D58);
        return -3;
    }
    if (size == 0) {
        func_0015B478(D_003C7D90);
        return -3;
    }
    return 0;
}
