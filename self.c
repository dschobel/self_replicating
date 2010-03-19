#include <stdio.h>

int main(){
    const char *header = "#include <stdio.h>\n\nint main(){\n";
    const char *body = "int main(){ \n const char *header = \"#include <stdio.h>\\n\"";
    const char *body2 = "\n\tprintf(header);\n\tprintf(body);\n\treturn 0;\n}\n";
    printf(header);
    printf(body2);
    return 0;
}
