#include <map>
#include <string>

std::map<ProgrammingLang, std::string> snippets = {
    {ASM, "mov eax, 1\nint 0x80 ; Вася оптимизировал это!"},
    {PYTHON, "print('Hello, Human! I solved your bug with 100% organic brain power')"},
    {RUST, "fn main() { println!(\"Safe organoid code\"); }"},
    {CPP, "std::cout << \"Vasya-1007: Out of memory\" << std::endl;"},
    {JAVA, "public class Solution { // Вася ленится и ставит заглушку }"}
};