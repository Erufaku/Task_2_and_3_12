# Task_2_and_3_12
Определить класс CString для работы со строками, длина которых хранится в самом классе (т.е. строки произвольных симовлов). В классе должны быть определены необходимые конструкторы, операторы присваивания, сложения (слияния строк), присваивания обычной строки переменной типа CString. Написать функцию и конструктор сохранения переменной данного типа в файл и загрузки из файла. В отдельном файле должен быть написан тест на данный класс.

Должен быть сделан базовый класс, решающий задачу. Пусть он называется CData. Должна быть создана [чисто] виртуальная функция вывода данных класса в файл вида virtual int output(const char *FileName=NULL)=0; От данного класса CData надо породить два класса CData0 и CData1, в первом из которых переопределена функция int output(const char *FileName); как функция вывода данных класса в файл в одну строку, а во втором данная функция определена как функция вывода данных класса в столбец (т.е. по одному элементу данных в одну строку).

В файле с исходными данными в каждой строке задаются данныедля одного экземпляра класса, порожденного от CData. Данные задачи задаются в каждой строке в виде: I FileName Data где I = 0 или = 1, FileName — имя выходного файла, Data — все данные одного объекта, разделенные пробелами.

Для каждой строки исходного файла надо создать класс CData0, если I == 0, либо надо создать класс CData1, если I == 1. Созданный класс надо заполнить данными из введенной строки. Имя выходного файла следует занести в соответствующее поле созданного класса.

Все созданные классы надо поместить в массив указателей на базовый класс CData **arr; . Каждый новый объект должен создаваться функцией вида CData *CreateData(const char *str, CFabricData **f ); , где f — массив фабрик для создания I-го дочернего класса от CData. Далее надо в цикле для каждого объекта из массива arr вызвать функцию output(). Также надо написать разумный тест на все реализованные функции класса.

Реализовал OpenMP в операторе + (если честно, эффективность не очень, но это единственный оператор в моей программе)
