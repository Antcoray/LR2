#include <iostream>

int main() {
    int h1 = 0, min1 = 0, h2 = 0, min2 = 0, duration = 0, totalHours = 0, totalMinutes = 0, startTimeMins = 0, endTimeMins = 0;

    std::cout << "Введите время начала решения задач (часы, минуты): " << std::endl;
    std::cin >> h1 >> min1;

    std::cout << "Введите время окончания решения задач (часы, минуты): " << std::endl;
    std::cin >> h2 >> min2;

    startTimeMins = h1 * 60 + min1;
    endTimeMins = h2 * 60 + min2;

    if (endTimeMins >= startTimeMins) {
        duration = endTimeMins - startTimeMins;
    } else {
        duration = (24*60 - startTimeMins) + endTimeMins;
    }

    totalHours = duration / 60;
    totalMinutes = duration % 60;

    std::cout << "Студент решал задачи " << totalHours << " часов и " << totalMinutes << " минут " << std::endl;

    return 0;
}
