int heat_level = 36; // Градусы Цельсия

bool isOverheated() {
    heat_level += 2;
    return heat_level > 42; // Критическая температура для органоида
}