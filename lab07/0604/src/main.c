// Задаємо функцію для визначення кількості слів
int func(char mass[]) {
    // Змінна для визначення кількості слів
    int count = 0;
    //Змінна, яка показує кількість символів в массиві
    int n = 0;      //Цикл while для знаходження
    while (mass[n] != '\0') {
        n++;
    }
    //Цикл for для знаходження кількості слів в реченні
    for (int i = 0; i < n; i++) {
        if (mass[i] != ' ' && mass[i + 1] <= ' ') {
            count++;
        }
    }
    printf("%d", count);
    return count;
}

int main() {

    //Задаємо массив символів в який вписуємо слова
    char mass[] = " eight dollars  ";
    // Виклик функції для визначення кількості слів в реченні
    func(mass);
	
    return 0;
    }
