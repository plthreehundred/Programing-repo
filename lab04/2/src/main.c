
int main()
{
	// Введення дійсного числа
	float x = 0.432;
	// Отримання цілого числа з дійсного
	int xi = x;
	// Перетворення дробової частини в цілу
	float xd = (x - xi) * 1000;
	// Визначення у скільки разів дробова частина більша за цілу
	float y = xd / xi;
	// Округлення реузльтату до двох знаків після коми
	int y1 = y * 100;
	float yo = y1 / 100.0f;
	// Перевірка ділення на нуль 
	if (xi == 0)
	{ 
	  exit(1);
	 }
	return 0;
}
