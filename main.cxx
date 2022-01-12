#include <iostream>


template<class T>
void input(std::string str, T& ans) {
    std::cout << str;
    std::cin >> ans;
}


int main() {
    double module_weight;
    input("module_weight = ", module_weight);
    double exam_weight;
    input("exam_weight = ", exam_weight);
    double module_count;
    input("module_count = ", module_count);
    double module_sum{}, current_sum{};
    std::cout << "input in 'current module' format" << std::endl;
    for (int i{}; i < module_count; ++i) {
        int current_mark;
        std::cin >> current_mark;
        current_sum += current_mark;
        int module_mark;
        std::cin >> module_mark;
        module_sum += module_mark;
    }
    double module_avg = module_sum / module_count;
    double current_avg = current_sum / module_count;
    double mark = module_avg * module_weight + current_avg * (1 - module_weight);
    std::cout << "Mijin = " << mark << std::endl;
    mark *= (1 - exam_weight);
    std::cout << "Lav Prca >= " << (39.6 - mark) / exam_weight << std::endl;
    std::cout << "Toshak >= " << (65 - mark) / exam_weight << std::endl;
    std::cout << "Gerazanc >= " << (88 - mark) / exam_weight << std::endl;
    std::cout << "100 >= " << (99.5 - mark) / exam_weight << std::endl;
}
