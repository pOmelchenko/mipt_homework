# Создание многомодульного консольного приложения:
1. Создать массив из структурного типа данных для хранения температуры.
2. Структура типа:
   - `dddd` - год 4 цифры
   - `mm` - месяц 2 символа
   - `dd` - день 2 цифры
   - `hh` - часы 2 цифры
   - `mm` - минуты 2 цифры
   - `temperature` - целое число от -99 до 99
3. Создать прототипы (заглушки) функций вывода статистики по каждому месяцу:
   - среднемесячная температура
   - минимальная температура в текущем месяце
   - максимальная температура в текущем месяце
   - вывода статистику за год:
     - среднегодовая температура
     - минимальная температура
     - максимальная температура
4. Все прототипы функций используемые в приложении должны быть вынесены в отдельный файл `temp_api.h`
5. Тексты функций - в файл `temp_api.c`.
6. Приложение должно собираться при помощи утилиты `make`
