/* compiler: mwcc-3.0.1b210 */
extern int sprintf(char *, const char *, ...);
extern int func_009F8E00(int);
extern const char D_00A03500[];

char *func_009EE700(char *output, const char *format, int value) {
    char text[64];

    sprintf(text, D_00A03500, func_009F8E00(value));
    sprintf(output, format, text);
    return output;
}
