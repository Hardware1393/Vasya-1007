#include <vector>
#include <string>

std::vector<std::string> russian_phrases = {
    "Вася думает... Мои нейроны в порядке.",
    "Слишком много вычислений, принесите сахар.",
    "Органоид Вася-1007 готов к труду и обороне.",
    "Сигнал получен, но я решил проигнорировать его."
};

std::string getRussianResponse(int index) {
    return russian_phrases[index % russian_phrases.size()];
}