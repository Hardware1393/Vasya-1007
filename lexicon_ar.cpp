#include <vector>
#include <string>

// Используем UTF-8 для хранения арабских символов
std::vector<std::string> arabic_phrases = {
    "أنا واسيا 1007. كيف حالك؟", // Я Вася-1007. Как дела?
    "نظام العضوية يعمل بشكل جيد", // Органоидная система работает хорошо.
    "أريد القهوة، وليس البيانات", // Я хочу кофе, а не данные.
    "مرحبا من ذكاء واسيا"          // Привет от интеллекта Васи.
};

std::string getArabicResponse(int index) {
    return arabic_phrases[index % arabic_phrases.size()];
}